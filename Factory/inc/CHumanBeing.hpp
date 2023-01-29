#ifndef CHUMANBEING_HEADERGUARD
#define CHUMANBEING_HEADERGUARD


class CHumanBeing
{
public:
    CHumanBeing();
    ~CHumanBeing();
    virtual void sayHello() const = 0;
    virtual void askAQuestion() const = 0;
    virtual void excuseForNotUnderstanding() const = 0;
};


CHumanBeing::CHumanBeing() {}
CHumanBeing::~CHumanBeing() {}


#endif // CHUMANBEING_HEADERGUARD
