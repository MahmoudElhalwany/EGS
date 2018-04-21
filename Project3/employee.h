#pragma once
#include "citizen.h"
class employee :	public citizen
{

	int salary;

public:
	
	employee();
	~employee();
	
	void set_salary(int s);
	int get_salary();
	
};

