#ifndef CFREESPACEX_HEADERGUARD
#define CFREESPACEX_HEADERGUARD

#include <iostream>
#include <CFreeSpace.hpp>

class CFreeSpaceX : public CFreeSpace
{
public:
    CFreeSpaceX();
    ~CFreeSpaceX();
    virtual void printSpace() const override;
};

CFreeSpaceX::CFreeSpaceX()
{
}

CFreeSpaceX::~CFreeSpaceX()
{
}

void CFreeSpaceX::printSpace() const
{
    std::cout << "_";
}

#endif // CFREESPACEX_HEADERGUARD
