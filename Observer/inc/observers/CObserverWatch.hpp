#ifndef __COBSERVERWATCH_HPP__
#define __COBSERVERWATCH_HPP__

#include "CObserver.hpp"
#include "publisher/CPublisher.hpp"
#include <iostream>

class CObserverWatch : public CObserver
{
private:
public:
    CObserverWatch(CPublisher* publisher);
    ~CObserverWatch();
    void update() override;
};

CObserverWatch::CObserverWatch(CPublisher* publisher):
    CObserver{publisher}
{
    publisher->registerObserver(this);
}

CObserverWatch::~CObserverWatch()
{
}

void CObserverWatch::update()
{
    float state = publisher->getState();
    std::string publisher_name = publisher->getName();
    std::cout << "Buzzing and Ringing on the watch ---- new value from " << publisher_name << ": " << state << std::endl;
}


#endif // __COBSERVERWATCH_HPP__
