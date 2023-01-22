#ifndef CFREESPACEY_HEADERGUARD
#define CFREESPACEY_HEADERGUARD

#include <iostream>
#include <CFreeSpace.hpp>

class CFreeSpaceY : public CFreeSpace
{
public:
    CFreeSpaceY();
    ~CFreeSpaceY();
    virtual void printSpace() const override;
};

CFreeSpaceY::CFreeSpaceY()
{
}

CFreeSpaceY::~CFreeSpaceY()
{
}

void CFreeSpaceY::printSpace() const
{
    std::cout << "-";
}

#endif // CFREESPACEY_HEADERGUARD
