#ifndef COMPANYENTITY_H
#define COMPANYENTITY_H

#include <string>
#include <hetach/api-rest/entity.h>

class CompanyEntity: public Hetach::ApiRest::Entity
{
public:
    CompanyEntity(int id);

    std::string toJson();

protected:
    int m_id;
};

#endif // COMPANYENTITY_H
