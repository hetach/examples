#ifndef EMPLOYEESRESOURCE_H
#define EMPLOYEESRESOURCE_H

#include <string>
#include <hetach/api-rest/resource.h>
#include <hetach/api-rest/entity.h>
#include <hetach/api-rest/entitycollection.h>

class EmployeesResource : public Hetach::ApiRest::Resource
{
public:
    EmployeesResource();

    std::string name() { return "employees"; }

    Hetach::ApiRest::Entity* fetch(std::string id);
    Hetach::ApiRest::EntityCollection* fetchAll();
};

#endif // EMPLOYEESRESOURCE_H
