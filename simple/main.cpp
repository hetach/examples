#include <application.h>
#include <http-kernel/controller.h>

using namespace Hetach;
using namespace Hetach::HttpKernel;

class IndexController: public Controller
{
    Response* doGet()
    {
        this->response()->setContent("Index controller");

        return this->response();
    }
};

int main()
{
    Application *app = new Application();

    Controller *controller = new IndexController();

    app->route("/index", controller);

    app->run();

    return 0;
}
