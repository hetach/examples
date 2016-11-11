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

    string id = to_string(this->m_id);

    json.replace(json.find("{id}"), sizeof("{id}") - 1, id);

    return json;
}
