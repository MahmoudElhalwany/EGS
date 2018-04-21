#pragma once
#include "ministry.h"
class ministry_of_electricity :public ministry
{
	static ministry_of_electricity *obj;



	public:
		static ministry* create();
		void set_minister(minister ) ;

	ministry_of_electricity();
	~ministry_of_electricity();
};

