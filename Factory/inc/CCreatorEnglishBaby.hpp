#ifndef CFACTORYENGLISHBABY_HEADERGUARD
#define CFACTORYENGLISHBABY_HEADERGUARD

#include <CEnglishBaby.hpp>
#include <CCreator.hpp>

class CCreatorEnglishBaby : public CCreator
{
public:
    CCreatorEnglishBaby();
    ~CCreatorEnglishBaby();
    virtual CEnglishBaby* factoryMethod() const override;
};

CCreatorEnglishBaby::CCreatorEnglishBaby(){}
CCreatorEnglishBaby::~CCreatorEnglishBaby(){}

CEnglishBaby* CCreatorEnglishBaby::factoryMethod() const
{
    return new CEnglishBaby;
}


#endif // CFACTORYENGLISHBABY_HEADERGUARD
