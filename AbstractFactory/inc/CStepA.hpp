#ifndef CSTEPA_HEADERGUARD
#define CSTEPA_HEADERGUARD

#include <iostream>
#include <CStep.hpp>

class CStepA : public CStep
{
public:
    CStepA();
    ~CStepA();
    virtual void printStep() const override;
};

CStepA::CStepA()
{
}

CStepA::~CStepA()
{
}

void CStepA::printStep() const
{
    std::cout << "|";
}


#endif // CSTEPA_HEADERGUARD