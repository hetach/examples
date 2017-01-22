#include "companyentity.h"

using namespace std;

CompanyEntity::CompanyEntity(int id)
{
    this->m_id = id;
}

string CompanyEntity::toJson()
{
    string json = R"(
        {
            "id": {id},
            "type": "company"
        }
    )";

    string id = to_string(this->m_id);

    json.replace(json.find("{id}"), sizeof("{id}") - 1, id);

    return json;
}
