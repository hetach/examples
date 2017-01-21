#include "application.h"
#include "server/webserver.h"
#include "http-kernel/controller.h"
#include "http/response.h"

using namespace Hetach;
using namespace Hetach::HttpKernel;
using namespace Hetach::Server;

class IndexController: public Controller
{
    void doGet()
    {
        this->response()->setContent("Index controller");
    }
};

int main()
{
    Application *app = new Application(new WebServer());

    Controller *controller = new IndexController();

    app->route("/index", controller);

    return app->exec();
}
