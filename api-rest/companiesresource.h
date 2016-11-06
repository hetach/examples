#ifndef COMPANIESRESOURCE_H
#define COMPANIESRESOURCE_H

#include <string>
#include <api-rest/resource.h>
#include <api-rest/entity.h>
#include <api-rest/entitycollection.h>

class CompaniesResource : public Hetach::ApiRest::Resource
{
public:
    CompaniesResource();

    std::string name() { return "companies"; }

    Hetach::ApiRest::Entity* fetch(int id);
    Hetach::ApiRest::EntityCollection* fetchAll();
};

#endif // COMPANIESRESOURCE_H
