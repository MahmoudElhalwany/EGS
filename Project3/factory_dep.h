#pragma once
#include"department.h"
class factory_dep
{
public:
	factory_dep(void);
	static department* create(string ,string,string);
	~factory_dep(void);
};

