#pragma once
#include "Event.h>
class IObserver
{
public:
	IObserver(void);
	virtual void Update(Event event, int data) = 0;

public:
	~IObserver(void);
};
