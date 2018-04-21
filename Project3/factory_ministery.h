#pragma once
#include"ministry.h"
class factory_ministery
{
public:
	factory_ministery(void);
	ministry * create(string);
	~factory_ministery(void);
};

