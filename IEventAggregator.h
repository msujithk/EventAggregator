#pragma once
#include "Event.h"
#include "IObserver.h"
class IEventAggregator
{
public:
	IEventAggregator(void);
	virtual void Subscribe(Event event, IObserver observer)= 0;
	virtual void Unsubscribe(Event event, IObserver observer) = 0;
	virtual void Publish(Event event, int data) = 0;
public:
	~IEventAggregator(void);
};
