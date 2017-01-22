#include <string>
#include <iostream>
#include "indexcontroller.h"

using namespace std;
using namespace Hetach::Router;

IndexController::IndexController()
{

}

void IndexController::doGet()
{
    this->response()->setContent("Index controller");
}

void IndexController::doPost(string content)
{
    this->response()->setContent(content);
}
