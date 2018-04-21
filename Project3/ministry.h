#pragma once
#include <iostream>
#include <string>
#include "minister.h"
#include "department.h"
#include <vector>

using namespace std;


class ministry
{
protected:
	string name;
	minister _minster;
	list <department> dept_vec;
	


public:
	ministry();
	~ministry();

		void set_ministry_name(string s);
		void set_dep(list<department> s);
		virtual void set_minister(minister  ) = 0;	 //TODO
		ministry & create();
		string   get_ministry_name();
		minister get_minister();
};

