#include <regex>

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

    regex reg("\\{id\\}");
    string r = to_string(this->m_id);

    json = regex_replace(json, reg, r);

    return json;
}
