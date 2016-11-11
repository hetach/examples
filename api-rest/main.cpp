#include <sys/signal.h>

#include "fcgiapplication.h"
#include "api-rest/apirest.h"
#include "indexcontroller.h"
#include "companiesresource.h"
#include "employeesresource.h"

using namespace Hetach;
using namespace Hetach::HttpKernel;

Application *app;

void unixSignalHandler(int)
{
    app->quit();

    exit(0);
}

int main()
{
    signal(SIGINT, unixSignalHandler);
    signal(SIGTERM, unixSignalHandler);
    signal(SIGTSTP, unixSignalHandler);

    app = new Application();

    Controller *controller = new IndexController();

    app->route("/", controller);

    Hetach::ApiRest::ApiRest *rest = new Hetach::ApiRest::ApiRest(app, "/api/rest");

    CompaniesResource *companies = new CompaniesResource();
    EmployeesResource *employees = new EmployeesResource();

    rest->addResource(companies);
    rest->addResource(companies, employees);

    app->boot();

    return 0;
}
