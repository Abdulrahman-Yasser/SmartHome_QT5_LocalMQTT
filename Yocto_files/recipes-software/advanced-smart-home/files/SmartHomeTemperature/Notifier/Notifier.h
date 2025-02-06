#ifndef NOTIFIER_H
#define NOTIFIER_H

class Notifier
{
public:
    Notifier();
    virtual void temperatureRaised(int value) = 0;
};

#endif // NOTIFIER_H
