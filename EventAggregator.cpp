#include "EventAggregator.h"

EventAggregator::EventAggregator(void)
{
	
	m_Ledger[Event.OnSearchComplete] = new std::vector<IObserver> [100];
	m_Ledger[Event.OnItemSelected] = new std::vector<IObserver> [100];
	m_Ledger[Event.OnUpdateClick] = new std::vector<IObserver> [100];
}

EventAggregator::~EventAggregator(void)
{
}

void EventAggregator::Subscribe(Event event, IObserver observer)
{
	m_Ledger[event].push_back(observer);
}
void EventAggregator::Unsubscribe(Event event, IObserver observer) 
{
	m_Ledger[event].remove(observer);
}
void EventAggregator::Publish(Event event, int data)
{
	m_Ledger[event].Update(data);
}