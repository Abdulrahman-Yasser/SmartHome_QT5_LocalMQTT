#include "../Notifier/Notifier.h"
#include <list>

class Observer{
    public:
        virtual void addSubscriber(Notifier *newSubscriber) = 0;
        virtual void removeSubscriber(Notifier *Subscriber) = 0;
        Observer();

};

