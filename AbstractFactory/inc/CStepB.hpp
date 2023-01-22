#ifndef CSTEPB_HEADERGUARD
#define CSTEPB_HEADERGUARD

#include <iostream>
#include <CStep.hpp>

class CStepB : public CStep
{
public:
    CStepB();
    ~CStepB();
    virtual void printStep() const override;
};

CStepB::CStepB()
{
}

CStepB::~CStepB()
{
}

void CStepB::printStep() const
{
    std::cout << "^";
}


#endif // CSTEPB_HEADERGUARD