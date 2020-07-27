#pragma once
#include "IEventAggregator.h"
#include <map>
#include <vector>
#include "IObserver.h"
#incude "Events.h"
class EventAggregator: public IEventAggregator
{
private:
	map<int, IObserver *> m_Ledger; 
public:
	EventAggregator(void);
	void Subscribe(Event event, IObserver observer);
	void Unsubscribe(Event event, IObserver observer) ;
	void Publish(Event event, int data);
public:
	~EventAggregator(void);
};
