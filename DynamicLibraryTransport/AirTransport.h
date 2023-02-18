#pragma once
#include "Transport.h"

//#ifdef DYNAMICLIBRARYTRANSPORT_EXPORTS
//#define DYNAMICLIBRARYTRANSPORT_API __declspec(dllexport)
//#else
//#define DYNAMICLIBRARYTRANSPORT_API __declspec(dllimport)
//#endif

namespace TransportOfRace
{
	class /*DYNAMICLIBRARYTRANSPORT_API*/ AirTransportCarpetPlane : public TransportOfRace::Transport
	{
	public:
		AirTransportCarpetPlane();
	};

	class /*DYNAMICLIBRARYTRANSPORT_API*/ AirTransportEagle : public TransportOfRace::Transport
	{
	public:
		AirTransportEagle();
	};

	class /*DYNAMICLIBRARYTRANSPORT_API*/ AirTransportBroomstick : public TransportOfRace::Transport
	{
	public:
		AirTransportBroomstick();
	};
}