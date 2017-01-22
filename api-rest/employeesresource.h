#ifndef EMPLOYEESRESOURCE_H
#define EMPLOYEESRESOURCE_H

#include <string>
#include <api-rest/resource.h>
#include <api-rest/entity.h>
#include <api-rest/entitycollection.h>

class EmployeesResource : public Hetach::ApiRest::Resource
{
public:
    EmployeesResource();

    std::string name() { return "employees"; }

    Hetach::ApiRest::Entity* fetch(int id);
    Hetach::ApiRest::EntityCollection* fetchAll();
};

#endif // EMPLOYEESRESOURCE_H
