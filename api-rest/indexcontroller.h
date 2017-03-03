#ifndef INDEXCONTROLLER_H
#define INDEXCONTROLLER_H

#include <string>
#include <hetach/http-kernel/controller.h>
#include <hetach/http/request.h>
#include <hetach/http/response.h>

class IndexController : public Hetach::HttpKernel::Controller
{
public:
    IndexController();

    void doGet();
    void doPost(std::string content);
};

#endif // INDEXCONTROLLER_H
