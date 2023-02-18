#include "Transport.h"

namespace TransportOfRace
{
	float Transport::racePassingTimeAll(TransportOfRace::Transport* MassiveOfRacers, float raceDistance)
	{
		int countOfRest_ = raceDistance / (static_cast<int> (transportSpeed_ * transportDrivingTimeBeforeRest_));
		//std::cout << "countOfRest = " << countOfRest_ << std::endl;

		if (countOfRest_ == 0)
		{
			restTime_ = 0;
			//std::cout << "restTime1 = " << restTime_ << std::endl;
		}
		else if (countOfRest_ == 1)
		{
			restTime_ = transportDurationOfRest1_;
			//std::cout << "restTime1 = " << restTime_ << std::endl;
		}
		else if (countOfRest_ == 2)
		{
			restTime_ = transportDurationOfRest1_ + transportDurationOfRest2_;
			//std::cout << "restTime2 = " << restTime_ << std::endl;
		}
		else
		{
			peaceOfDis_ = raceDistance - (countOfRest_ * transportSpeed_ * transportDrivingTimeBeforeRest_);
			if (peaceOfDis_ == 0)
			{
				restTime_ = transportDurationOfRest1_ + (countOfRest_ - 2) * transportDurationOfRestLast_;
				//std::cout << "restTime3 = " << restTime_ << std::endl;
			}
			else
			{
				restTime_ = transportDurationOfRest1_ + transportDurationOfRest2_ + (countOfRest_ - 2) * transportDurationOfRestLast_;
				//std::cout << "restTime3 = " << restTime_ << std::endl;
			}
		}

		timeDriving_ = raceDistance / transportSpeed_;
		//std::cout << "timeDriving = " << timeDriving_ << std::endl;

		racePassingTimeAll_ = restTime_ + timeDriving_;
		//std::cout << "racePassingTimeAll_ = " << racePassingTimeAll_ << std::endl;


		return racePassingTimeAll_;
	}
	
	//**********
	float Transport::raceAirPassingTimeAll(TransportOfRace::Transport* MassiveOfRacers, float raceDistance)
	{
		if (transportSpeed_ == 10)
		{

			if (raceDistance < 1000)
			{
				transportDistanceReductionCoefficient_ = 0;
			}
			else if (raceDistance >= 1000 && raceDistance < 5000)
			{
				transportDistanceReductionCoefficient_ = 3;
			}
			else if (raceDistance >= 5000 && raceDistance < 10000)
			{
				transportDistanceReductionCoefficient_ = 10;
			}
			else if (raceDistance >= 10000)
			{
				transportDistanceReductionCoefficient_ = 5;
			}
			newAirDistance = raceDistance * ((100 - static_cast<float> (transportDistanceReductionCoefficient_)) / 100);
			//std::cout << "newDis_ = " << newAirDistance << std::endl;
		}
		else if (transportSpeed_ == 8)
		{
			transportDistanceReductionCoefficient_ = 6;
			newAirDistance = raceDistance * ((100 - static_cast<float> (transportDistanceReductionCoefficient_)) / 100);
			//std::cout << "newDis_ = " << newAirDistance << std::endl;
		}
		else if (transportSpeed_ == 20)
		{
			transportDistanceReductionCoefficient_ = raceDistance / 1000;

			newAirDistance = raceDistance * ((100 - static_cast<float> (transportDistanceReductionCoefficient_)) / 100);
			//std::cout << "newDis_ = " << newAirDistance << std::endl;
		}

		racePassingTimeAll_ = newAirDistance / transportSpeed_;

		return racePassingTimeAll_;
	}
	//**********


	float Transport::getRacePassingTimeAll() { return racePassingTimeAll_; }
	std::string Transport::getTransportName() { return transportName_; }
	void Transport::setTransportReg(bool transportReg)
	{ 
		transportReg_ = transportReg;
	};

	bool Transport::getTransportReg() { return transportReg_; };

	int Transport::getTransportNumber() { return transportNumber_; };
};