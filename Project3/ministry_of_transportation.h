#pragma once
#include "ministry.h"
class ministry_of_transportation :	public ministry
{
	static ministry_of_transportation *obj;



	public:
		static ministry* create();
		void set_minister(minister ) ;

	ministry_of_transportation();
	~ministry_of_transportation();

	//TODO : train schedule
};

