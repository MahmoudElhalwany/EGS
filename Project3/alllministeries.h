#pragma once
#include"ministry.h"
#include<unordered_set>

class alllministeries
{
public:
	
	static list<ministry*> all;
	static int create(string s,string,minister,string,list<department>);
	alllministeries(void);
	~alllministeries(void);
};

