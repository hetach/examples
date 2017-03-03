#ifndef EMPLOYEEENTITY_H
#define EMPLOYEEENTITY_H

#include <string>
#include <hetach/api-rest/entity.h>

class EmployeeEntity: public Hetach::ApiRest::Entity
{
public:
    EmployeeEntity(int id);

    std::string toJson();

protected:
    int m_id;
};

#endif // EMPLOYEEENTITY_H
