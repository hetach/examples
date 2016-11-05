#include <string>

#include "indexcontroller.h"

using namespace std;
using namespace Hetach::Router;

IndexController::IndexController()
{

}

Hetach::HttpKernel::Response* IndexController::doGet()
{
    this->response()->setContent("Index controller");

    return this->response();
}
