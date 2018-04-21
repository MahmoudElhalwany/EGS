#pragma once
#include "citizen.h"
class minister :public citizen
{
	string ministry_name;

public:
	minister();
	~minister();
	void   set_ministry_name(string s);
	string get_ministry_name();
};

