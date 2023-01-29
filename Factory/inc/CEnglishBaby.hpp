#ifndef CENGLISHBABY_HEADERGUARD
#define CENGLISHBABY_HEADERGUARD

#include <iostream>
#include <CHumanBeing.hpp>


class CEnglishBaby : public CHumanBeing
{
public:
    CEnglishBaby();
    ~CEnglishBaby();
    virtual void sayHello() const override;
    virtual void askAQuestion() const override;
    virtual void excuseForNotUnderstanding() const override;
};

CEnglishBaby::CEnglishBaby() {}
CEnglishBaby::~CEnglishBaby() {}

void CEnglishBaby::sayHello() const
{
    std::cout << "Hi hi!" << std::endl;
}

void CEnglishBaby::askAQuestion() const
{
    std::cout << "Why? Why?" << std::endl;
}

void CEnglishBaby::excuseForNotUnderstanding() const
{
    std::cout << "Hä." << std::endl;
}


#endif // CENGLISHBABY_HEADERGUARD
