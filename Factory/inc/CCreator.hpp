#ifndef CCREATOR_HEADERGUARD
#define CCREATOR_HEADERGUARD

#include <CHumanBeing.hpp>

class CCreator
{
public:
    CCreator();
    ~CCreator();
    virtual CHumanBeing* factoryMethod() const = 0;
    void conversation() const;
};

CCreator::CCreator(){}
CCreator::~CCreator(){}

void CCreator::conversation() const
{
    CHumanBeing* humanBeing1 = this->factoryMethod();
    CHumanBeing* humanBeing2 = this->factoryMethod();

    humanBeing1->sayHello();
    humanBeing2->sayHello();

    humanBeing1->askAQuestion();
    humanBeing2->excuseForNotUnderstanding();
}

#endif // CCREATOR_HEADERGUARD
