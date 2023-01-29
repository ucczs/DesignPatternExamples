#ifndef CFACTORYENGLISH_HEADERGUARD
#define CFACTORYENGLISH_HEADERGUARD

#include <CEnglishPerson.hpp>
#include <CCreator.hpp>

class CCreatorEnglish : public CCreator
{
public:
    CCreatorEnglish();
    ~CCreatorEnglish();
    virtual CEnglishPerson* factoryMethod() const override;
};

CCreatorEnglish::CCreatorEnglish(){}
CCreatorEnglish::~CCreatorEnglish(){}

CEnglishPerson* CCreatorEnglish::factoryMethod() const
{
    return new CEnglishPerson;
}


#endif // CFACTORYENGLISH_HEADERGUARD
