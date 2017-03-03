#include "hetach/application.h"
#include "hetach/server/webserver.h"
#include "hetach/http-kernel/controller.h"
#include "hetach/http/response.h"
#include "hetach/router/params.h"
#include "hetach/router/paramnotfoundexception.h"

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
