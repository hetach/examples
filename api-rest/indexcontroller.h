#ifndef INDEXCONTROLLER_H
#define INDEXCONTROLLER_H

#include <string>
#include <http-kernel/controller.h>
#include <http/request.h>
#include <http/response.h>

class IndexController : public Hetach::HttpKernel::Controller
{
public:
    IndexController();

    void doGet();
    void doPost(std::string content);
};

#endif // INDEXCONTROLLER_H
