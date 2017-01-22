#include "application.h"
#include "server/webserver.h"
#include "http-kernel/controller.h"
#include "http/response.h"
#include "router/params.h"
#include "router/paramnotfoundexception.h"

using namespace Hetach;
using namespace Hetach::HttpKernel;
using namespace Hetach::Server;
using namespace Hetach::Router;

class IndexController: public Controller
{
    void doGet()
    {
        try {
            this->response()->setContent("Index controller " + this->routeParams()->value("someParam"));
        } catch(ParamNotFoundException) {
            this->response()->setContent("Index controller");
        }
    }
};

int main()
{
    Application *app = new Application(new WebServer());

    Controller *controller = new IndexController();

    app->route("/index", controller);
    app->route("/index/{someParam}", controller);

    return app->exec();
}
