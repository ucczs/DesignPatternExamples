#ifndef CFREESPACE_HEADERGUARD
#define CFREESPACE_HEADERGUARD

#include <iostream>

class CFreeSpace
{
private:
    /* data */
public:
    CFreeSpace();
    ~CFreeSpace();
    virtual void printSpace() const = 0;
};

CFreeSpace::CFreeSpace()
{
}

CFreeSpace::~CFreeSpace()
{
}

#endif // CFREESPACE_HEADERGUARD
