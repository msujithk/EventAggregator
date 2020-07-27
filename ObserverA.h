#pragma once

class ObserverA
{
public:
	ObserverA(void);
	void Update(Event event, int data);
public:
	~ObserverA(void);
};
