#include "GroundTransport.h"

namespace TransportOfRace
{
	GroundTransportCamel::GroundTransportCamel()
	{
		Transport::transportName_ = "Верблюд";
		Transport::transportSpeed_ = 10;
		Transport::transportDrivingTimeBeforeRest_ = 30;
		Transport::transportDurationOfRest1_ = 5;
		Transport::transportDurationOfRest2_ = 8;
		Transport::transportDurationOfRestLast_ = 8;
		Transport::transportNumber_ = 1;
	};

	GroundTransportCamelFast::GroundTransportCamelFast()
	{
		Transport::transportName_ = "Верблюд-быстроход";
		Transport::transportSpeed_ = 40;
		Transport::transportDrivingTimeBeforeRest_ = 10;
		Transport::transportDurationOfRest1_ = 5;
		Transport::transportDurationOfRest2_ = 6.5;
		Transport::transportDurationOfRestLast_ = 8;
		Transport::transportNumber_ = 2;
	};

	GroundTransportCentaur::GroundTransportCentaur()
	{
		Transport::transportName_ = "Кентавр";
		Transport::transportSpeed_ = 15;
		Transport::transportDrivingTimeBeforeRest_ = 8;
		Transport::transportDurationOfRest1_ = 2;
		Transport::transportDurationOfRest2_ = 2;
		Transport::transportDurationOfRestLast_ = 2;
		Transport::transportNumber_ = 3;
	};

	GroundTransportAllterrainBoots::GroundTransportAllterrainBoots()
	{
		Transport::transportName_ = "Ботинки-вездеходы";
		Transport::transportSpeed_ = 6;
		Transport::transportDrivingTimeBeforeRest_ = 60;
		Transport::transportDurationOfRest1_ = 10;
		Transport::transportDurationOfRest2_ = 5;
		Transport::transportDurationOfRestLast_ = 5;
		Transport::transportNumber_ = 4;
	};
}