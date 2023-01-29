#ifndef CFRENCHPERSON_HEADERGUARD
#define CFRENCHPERSON_HEADERGUARD

#include <iostream>
#include <CHumanBeing.hpp>


class CFrenchPerson : public CHumanBeing
{
public:
    CFrenchPerson();
    ~CFrenchPerson();
    virtual void sayHello() const override;
    virtual void askAQuestion() const override;
    virtual void excuseForNotUnderstanding() const override;
};

CFrenchPerson::CFrenchPerson() {}
CFrenchPerson::~CFrenchPerson() {}

void CFrenchPerson::sayHello() const
{
    std::cout << "Bonjour!" << std::endl;
}

void CFrenchPerson::askAQuestion() const
{
    std::cout << "Pouvez-vous m'expliquer comment cela fonctionne?" << std::endl;
}

void CFrenchPerson::excuseForNotUnderstanding() const
{
    std::cout << "Désolé, je ne peux pas vous comprendre." << std::endl;
}


#endif // CFRENCHPERSON_HEADERGUARD
