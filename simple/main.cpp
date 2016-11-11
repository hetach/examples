#include "fcgiapplication.h"
#include "http-kernel/controller.h"
#include "http/response.h"

using namespace Hetach;
using namespace Hetach::HttpKernel;

class IndexController: public Controller
{
    void doGet()
    {
        this->response()->setContent("Index controller");
    }
};

int main()
{
    FCGIApplication *app = new FCGIApplication();

    Controller *controller = new IndexController();

    app->route("/index", controller);

    app->boot();

    return 0;
}
