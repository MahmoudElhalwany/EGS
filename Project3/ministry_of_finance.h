#pragma once
#include "ministry.h"
class ministry_of_finance :public ministry
{
	static ministry_of_finance *obj;



	public:
		static ministry* create();
		void set_minister(minister ) ;

	ministry_of_finance();
	~ministry_of_finance();

	//TODO : check today's currency prices (exchange rates)
};

