#pragma once

class ObserverC
{
public:
	ObserverC(void);
	void Update(Event event, int data);
public:
	~ObserverC(void);
};
