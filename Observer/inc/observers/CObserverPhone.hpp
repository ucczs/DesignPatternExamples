#ifndef __COBSERVERPHONE_HPP__
#define __COBSERVERPHONE_HPP__

#include "CObserver.hpp"
#include "publisher/CPublisher.hpp"
#include <iostream>

class CObserverPhone : public CObserver
{
private:
public:
    CObserverPhone(CPublisher* publisher);
    ~CObserverPhone();
    void update() override;
};

CObserverPhone::CObserverPhone(CPublisher* publisher):
    CObserver{publisher}
{
    publisher->registerObserver(this);
}

CObserverPhone::~CObserverPhone()
{
}

void CObserverPhone::update()
{
    float state = publisher->getState();
    std::string publisher_name = publisher->getName();
    std::cout << "Phone buzzing ---- new value from " << publisher_name << ": " << state << std::endl;
}


#endif // __COBSERVERPHONE_HPP__
