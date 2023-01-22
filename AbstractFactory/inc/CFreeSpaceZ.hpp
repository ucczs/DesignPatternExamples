#ifndef CFREESPACEZ_HEADERGUARD
#define CFREESPACEZ_HEADERGUARD

#include <iostream>
#include <CFreeSpace.hpp>

class CFreeSpaceZ : public CFreeSpace
{
public:
    CFreeSpaceZ();
    ~CFreeSpaceZ();
    virtual void printSpace() const override;
};

CFreeSpaceZ::CFreeSpaceZ()
{
}

CFreeSpaceZ::~CFreeSpaceZ()
{
}

void CFreeSpaceZ::printSpace() const
{
    std::cout << "=";
}

#endif // CFREESPACEZ_HEADERGUARD