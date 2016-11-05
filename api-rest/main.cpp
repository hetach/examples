#include <application.h>
#include <api-rest/apirest.h>

#include "indexcontroller.h"
#include "companiesresource.h"
#include "employeesresource.h"

using namespace Hetach;
using namespace Hetach::HttpKernel;

int main()
{
    Application *app = new Application();

    Controller *controller = new IndexController();

    app->route("/", controller);

    Hetach::ApiRest::ApiRest *rest = new Hetach::ApiRest::ApiRest(app, "/api/rest");

    CompaniesResource *companies = new CompaniesResource();
    EmployeesResource *employees = new EmployeesResource();

    rest->addResource(companies);
    rest->addResource(companies, employees);

    app->run();

    return 0;
}
