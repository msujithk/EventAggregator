#pragma once

class ObserverB
{
public:
	ObserverB(void);
	void Update(Event event, int data);
public:
	~ObserverB(void);
};
