#include "Transport.h"

namespace TransportOfRace
{
	std::string Transport::getTransportName() { return transportName_; }
	int Transport::getTransportSign() { return transportSign_; }
	int Transport::getTransportSpeed() { return transportSpeed_; }

	int Transport::getTransportDrivingTimeBeforeRest() { return transportDrivingTimeBeforeRest_; }
	int Transport::getTransportDurationOfRest1() { return transportDurationOfRest1_; }
	float Transport::getTransportDurationOfRest2() { return transportDurationOfRest2_; }
	int Transport::getTransportDurationOfRestLast() { return transportDurationOfRestLast_; }

	int Transport::getTransportDistanceReductionCoefficient() { return transportDistanceReductionCoefficient_; }
};