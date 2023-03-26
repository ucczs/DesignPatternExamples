#ifndef __COBSERVER_HPP__
#define __COBSERVER_HPP__

// forward declaration
class CPublisher;

class CObserver
{
protected:
    CPublisher* publisher {};
public:
    CObserver(CPublisher* publisher);
    ~CObserver();
    virtual void update() = 0;
};

CObserver::CObserver(CPublisher* publisher):
    publisher{publisher}
{
}

CObserver::~CObserver()
{
}

#endif // __COBSERVER_HPP__
