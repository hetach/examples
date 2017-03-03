#include <list>

#include "companiesresource.h"
#include "companyentity.h"

#include "hetach/api-rest/entitynotfoundexception.h"
#include "hetach/api-rest/exception.h"

using namespace std;
using namespace Hetach::ApiRest;

CompaniesResource::CompaniesResource(): Resource()
{

}

Entity* CompaniesResource::fetch(int id)
{
    if(id == 0) {
        throw EntityNotFoundException();
    } else if(id < 0) {
        throw Exception("Internal server error");
    }

    return new CompanyEntity(id);
}

Hetach::ApiRest::EntityCollection* CompaniesResource::fetchAll()
{
    list<Entity*> entities = {new CompanyEntity(1), new CompanyEntity(2), new CompanyEntity(3)};
    return new EntityCollection(entities);
}
