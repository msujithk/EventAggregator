#include "main.h"
#include "ObserverA.h"
#include "ObserverB.h"
#include "ObserverC.h"
#include "ObserverD.h"
#include "EventAggregator.h"
main::main(void)
{
	IEventAggregator * eventAggregator = new EventAggregator();
	IObserver *observerA = new ObserverA();
	IObserver *observerB = new ObserverB();
	IObserver *observerC = new ObserverC();
	IObserver *observerD = new ObserverD();
	eventAggregator.Subscribe(Event.OnSearchComplete, observerA);
	eventAggregator.Subscribe(Event.OnItemSelected, observerB);
	eventAggregator.Subscribe(Event.OnUpdateClick, observerC);


}

main::~main(void)
{
}
