#pragma once

class ObserverD
{
public:
	ObserverD(void);
	void Update(Event event, int data);
public:
	~ObserverD(void);
};
