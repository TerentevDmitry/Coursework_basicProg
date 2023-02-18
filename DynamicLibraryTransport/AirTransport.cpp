#include "AirTransport.h"

namespace TransportOfRace
{
	AirTransportCarpetPlane::AirTransportCarpetPlane()
	{
		Transport::transportName_ = "����-������";
		Transport::transportSpeed_ = 10;
		Transport::transportNumber_ = 5;
	};

	AirTransportEagle::AirTransportEagle()
	{
		Transport::transportName_ = "���";
		Transport::transportSpeed_ = 8;
		Transport::transportNumber_ = 6;
	};

	AirTransportBroomstick::AirTransportBroomstick()
	{
		Transport::transportName_ = "�����";
		Transport::transportSpeed_ = 20;
		Transport::transportNumber_ = 7;
	};
}