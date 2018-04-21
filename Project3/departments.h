#pragma once
#include<vector>
#include"department.h"
class departments
{
	
	static list<department> alld;
public:

	static void add (department);
	static void clear();
	static list<department> get();
	departments(void);
	~departments(void);
};

