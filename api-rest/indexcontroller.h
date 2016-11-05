#ifndef INDEXCONTROLLER_H
#define INDEXCONTROLLER_H

#include <http-kernel/controller.h>
#include <http-kernel/response.h>
#include <http-kernel/request.h>

class IndexController : public Hetach::HttpKernel::Controller
{
public:
    IndexController();

    Hetach::HttpKernel::Response* doGet();
};

#endif // INDEXCONTROLLER_H
