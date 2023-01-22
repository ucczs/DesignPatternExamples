#ifndef CSTEP_HEADERGUARD
#define CSTEP_HEADERGUARD

#include <iostream>

class CStep
{
private:
    /* data */
public:
    CStep();
    ~CStep();
    virtual void printStep() const = 0;
};

CStep::CStep()
{
}

CStep::~CStep()
{
}


#endif // CSTEP_HEADERGUARD