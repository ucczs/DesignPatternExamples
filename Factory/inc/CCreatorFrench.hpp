#ifndef CFACTORYFRENCH_HEADERGUARD
#define CFACTORYFRENCH_HEADERGUARD

#include <CFrenchPerson.hpp>
#include <CCreator.hpp>

class CCreatorFrench : public CCreator
{
public:
    CCreatorFrench();
    ~CCreatorFrench();
    virtual CFrenchPerson* factoryMethod() const override;
};

CCreatorFrench::CCreatorFrench(){}
CCreatorFrench::~CCreatorFrench(){}

CFrenchPerson* CCreatorFrench::factoryMethod() const
{
    return new CFrenchPerson;
}


#endif // CFACTORYFRENCH_HEADERGUARD
