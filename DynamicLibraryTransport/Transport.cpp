#include "Transport.h"

namespace TransportOfRace
{
	float Transport::racePassingTimeAll(TransportOfRace::Transport* xxx, float raceDistance)
	{

		float racePassingTime = raceDistance / transportSpeed_;
		std::cout << std::endl << "10 ч. racePassingTime " << racePassingTime << " часов";

		int CountRaceRestTime = static_cast<int> (racePassingTime / transportDrivingTimeBeforeRest_);
		std::cout << std::endl << "1 р. CountRaceRestTime " << CountRaceRestTime << " раз";

		if (CountRaceRestTime == 0)
		{
			racePassingTimeAll_ = racePassingTime;
			std::cout << std::endl << "3 ч. raceRestTime " << racePassingTime << " часов";
			return racePassingTimeAll_;
		}
		else if (CountRaceRestTime == 1)
		{
			float raceRestTime = static_cast<float> (transportDurationOfRest1_);
			std::cout << std::endl << "3 ч. raceRestTime " << raceRestTime << " часов";

			racePassingTimeAll_ = racePassingTime + raceRestTime;
			std::cout << std::endl << "3 ч. racePassingTimeAll " << racePassingTimeAll_ << " часов" << std::endl;

			return racePassingTimeAll_;
		}
		else if (CountRaceRestTime == 2)
		{
			float raceRestTime = transportDurationOfRest1_ + transportDurationOfRest2_;
			std::cout << std::endl << "3 ч. raceRestTime " << raceRestTime << " часов";

			racePassingTimeAll_ = racePassingTime + raceRestTime;
			std::cout << std::endl << "3 ч. racePassingTimeAll " << racePassingTimeAll_ << " часов" << std::endl;

			return racePassingTimeAll_;
		}
		else
		{
			float raceRestTime = transportDurationOfRest1_ + transportDurationOfRest2_ 
							   + (static_cast<float> (CountRaceRestTime) * transportDurationOfRestLast_);
			std::cout << std::endl << "3 ч. raceRestTime " << raceRestTime << " часов" << std::endl;

			racePassingTimeAll_ = racePassingTime + raceRestTime;
			std::cout << std::endl << "3 ч. racePassingTimeAll " << racePassingTimeAll_ << " часов" << std::endl << std::endl;

			return racePassingTimeAll_;
		};	
	}

	std::string Transport::getTransportName() { return transportName_; }

	float Transport::getRacePassingTimeAll() { return racePassingTimeAll_; }
	
};