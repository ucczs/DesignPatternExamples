#ifndef CENGLISHPERSON_HEADERGUARD
#define CENGLISHPERSON_HEADERGUARD

#include <iostream>
#include <CHumanBeing.hpp>


class CEnglishPerson : public CHumanBeing
{
public:
    CEnglishPerson();
    ~CEnglishPerson();
    virtual void sayHello() const override;
    virtual void askAQuestion() const override;
    virtual void excuseForNotUnderstanding() const override;
};

CEnglishPerson::CEnglishPerson() {}
CEnglishPerson::~CEnglishPerson() {}

void CEnglishPerson::sayHello() const
{
    std::cout << "Good morning!" << std::endl;
}

void CEnglishPerson::askAQuestion() const
{
    std::cout << "Can you explain me how that works?" << std::endl;
}

void CEnglishPerson::excuseForNotUnderstanding() const
{
    std::cout << "Sorry, I can't understand you." << std::endl;
}


#endif // CENGLISHPERSON_HEADERGUARD
