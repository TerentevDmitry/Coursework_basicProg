#include "Race.h"


namespace RaceOfRace
{
	//racePassingTimeAll; //время полного прохождения гонки T
	//racePassingTime; //время прохождения гонки T1 = S/V

	float Race::getRacePassingTimeAll()
	{
		return racePassingTimeAll_;
	};
	
	float Race::getRacePassingTime()
	{
		return racePassingTime_;
	};

};