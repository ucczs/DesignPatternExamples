#ifndef __CTIMEPUBLISHER_HPP__
#define __CTIMEPUBLISHER_HPP__

#include "CPublisher.hpp"

class CTimePublisher : public CPublisher
{
private:
    int current_minutes = 0;
public:
    CTimePublisher(int start_minutes);
    ~CTimePublisher();
    void increment_time();
    float getState() const override;
};

CTimePublisher::CTimePublisher(int start_minutes):
    CPublisher{"TimePublisher"}
    , current_minutes{start_minutes}
{
}

CTimePublisher::~CTimePublisher()
{
}

void CTimePublisher::increment_time()
{
    std::cout << std::endl << "Time incremented." << std::endl << std::endl;
    current_minutes++;
}

float CTimePublisher::getState() const
{
    return current_minutes;
}


#endif // __CTIMEPUBLISHER_HPP__
