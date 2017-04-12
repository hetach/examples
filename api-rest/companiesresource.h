#ifndef COMPANIESRESOURCE_H
#define COMPANIESRESOURCE_H

#include <string>
#include <hetach/api-rest/resource.h>
#include <hetach/api-rest/entity.h>
#include <hetach/api-rest/entitycollection.h>

class CompaniesResource : public Hetach::ApiRest::Resource
{
public:
    CompaniesResource();

    std::string name() { return "companies"; }

    Hetach::ApiRest::Entity* fetch(std::string id);
    Hetach::ApiRest::EntityCollection* fetchAll();
};

#endif // COMPANIESRESOURCE_H
