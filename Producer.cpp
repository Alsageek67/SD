#include "Producer.h"

Producer::Producer ( void )
{
}

unsigned int Producer::give ( unsigned int n )
{

	return 0;
}

/*
class Producer
{
	enum state
	{
		PRE_GAME,
		GAME,
		END_GAME
	};


	unsigned int id;
	unsigned int initial_ressources;
	unsigned int n;
	unsigned int delay;
	std::string name;
	bool limited_ressources;
	enum state state;


	void init  ( unsigned int id, unsigned int res, unsigned int delay, bool limited_ressources );
	void reset ( void );

	void product ( void );

	void start_timer ( void );
	void stop_timer ( void );
	void timer ( void );

	unsigned int give ( unsigned int n );
	InfoProducer isObserved ( void );

public:	
	Producer ( void );
};
*/