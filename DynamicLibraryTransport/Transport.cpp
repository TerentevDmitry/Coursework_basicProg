#include "Transport.h"

namespace TransportOfRace
{
	float Transport::racePassingTimeAll(TransportOfRace::Transport* xxx, float raceDistance)
	{

		float racePassingTime = raceDistance / transportSpeed_;
		std::cout << std::endl << "10 �. racePassingTime " << racePassingTime << " �����";

		int CountRaceRestTime = static_cast<int> (racePassingTime / transportDrivingTimeBeforeRest_);
		std::cout << std::endl << "1 �. CountRaceRestTime " << CountRaceRestTime << " ���";

		if (CountRaceRestTime == 0)
		{
			racePassingTimeAll_ = racePassingTime;
			std::cout << std::endl << "3 �. raceRestTime " << racePassingTime << " �����";
			return racePassingTimeAll_;
		}
		else if (CountRaceRestTime == 1)
		{
			float raceRestTime = static_cast<float> (transportDurationOfRest1_);
			std::cout << std::endl << "3 �. raceRestTime " << raceRestTime << " �����";

			racePassingTimeAll_ = racePassingTime + raceRestTime;
			std::cout << std::endl << "3 �. racePassingTimeAll " << racePassingTimeAll_ << " �����" << std::endl;

			return racePassingTimeAll_;
		}
		else if (CountRaceRestTime == 2)
		{
			float raceRestTime = transportDurationOfRest1_ + transportDurationOfRest2_;
			std::cout << std::endl << "3 �. raceRestTime " << raceRestTime << " �����";

			racePassingTimeAll_ = racePassingTime + raceRestTime;
			std::cout << std::endl << "3 �. racePassingTimeAll " << racePassingTimeAll_ << " �����" << std::endl;

			return racePassingTimeAll_;
		}
		else
		{
			float raceRestTime = transportDurationOfRest1_ + transportDurationOfRest2_ 
							   + (static_cast<float> (CountRaceRestTime) * transportDurationOfRestLast_);
			std::cout << std::endl << "3 �. raceRestTime " << raceRestTime << " �����" << std::endl;

			racePassingTimeAll_ = racePassingTime + raceRestTime;
			std::cout << std::endl << "3 �. racePassingTimeAll " << racePassingTimeAll_ << " �����" << std::endl << std::endl;

			return racePassingTimeAll_;
		};	
	}

	std::string Transport::getTransportName() { return transportName_; }

	float Transport::getRacePassingTimeAll() { return racePassingTimeAll_; }
	
};