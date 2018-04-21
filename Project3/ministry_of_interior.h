#pragma once
#include "ministry.h"
class ministry_of_interior :public ministry
{
	static ministry_of_interior *obj;



	public:
		static ministry* create();
		void set_minister(minister ) ;

	ministry_of_interior();
	~ministry_of_interior();
	
};

