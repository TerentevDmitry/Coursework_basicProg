#include "GroundTransport.h"



namespace TransportOfRace
{
	GroundTransportCamel::GroundTransportCamel()
	{
		Transport::transportName_ = "Верблюд";
		Transport::transportSpeed_ = 10;
		Transport::transportDrivingTimeBeforeRest_ = 30;
		Transport::transportDurationOfRest1_ = 5;
		Transport::transportDurationOfRestLast_ = 8;
	};
	
	GroundTransportCamelFast::GroundTransportCamelFast()
	{
		Transport::transportName_ = "Верблюд-быстроход";
		Transport::transportSpeed_ = 40;
		Transport::transportDrivingTimeBeforeRest_ = 10;
		Transport::transportDurationOfRest1_ = 5;
		Transport::transportDurationOfRest2_ = 6.5;
		Transport::transportDurationOfRestLast_ = 8;
	};









}