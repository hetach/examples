#include <list>

#include "employeesresource.h"
#include "employeeentity.h"

using namespace std;
using namespace Hetach::ApiRest;

EmployeesResource::EmployeesResource(): Resource()
{

}

Entity* EmployeesResource::fetch(int id)
{
    return new EmployeeEntity(id);
}

Hetach::ApiRest::EntityCollection* EmployeesResource::fetchAll()
{
    list<Entity*> entities = {new EmployeeEntity(1), new EmployeeEntity(2), new EmployeeEntity(3)};
    return new EntityCollection(entities);
}
