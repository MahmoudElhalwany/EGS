#pragma once
#include "citizen.h"
#include "ministry.h"
#include <vector>
class admin :public citizen
{

	vector<ministry *> ministries_vec;


public:
	admin();
	~admin();

	bool add_ministry();
	bool remove_ministry();
	bool add_employee();
	bool remove_employee();

	//TODO
	int  get_ministry_count();
	
	//TODO
	int  get_citizen_count();

};

