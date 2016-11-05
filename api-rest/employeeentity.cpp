#include <regex>

#include "employeeentity.h"

using namespace std;

EmployeeEntity::EmployeeEntity(int id)
{
    this->m_id = id;
}

string EmployeeEntity::toJson()
{
    string json = R"(
        {
            "id": {id},
            "type": "employee"
        }
    )";

    regex reg("\\{id\\}");
    string r = to_string(this->m_id);

    json = regex_replace(json, reg, r);

    return json;
}
