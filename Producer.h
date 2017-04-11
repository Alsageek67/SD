#ifndef __PRODUCER_H__
#define __PRODUCER_H__

#include <string>

class InfoProducer
{
public:
	unsigned int id;
	unsigned int n;    // compteur de ressources
	std::string  name; // nom de la ressource
};

class Producer
{
	// différents états possible
	enum state
	{
		PRE_GAME,
		GAME,
		END_GAME
	};

	


	unsigned int id; // identifiant du producteur
	unsigned int initial_ressources; // nombre initial de ressource
	unsigned int n; // nombre actuel de ressource
	unsigned int delay; // delais entre deux productions
	std::string name; //
	bool limited_ressources;
	enum state state;


	void init  (
		unsigned int id,
		unsigned int res,
		unsigned int delay,
		bool limited_ressources
	);
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

#endif