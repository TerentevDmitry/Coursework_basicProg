#pragma once
#include "Transport.h"

//#ifdef DYNAMICLIBRARYTRANSPORT_EXPORTS
//#define DYNAMICLIBRARYTRANSPORT_API __declspec(dllexport)
//#else
//#define DYNAMICLIBRARYTRANSPORT_API __declspec(dllimport)
//#endif

namespace TransportOfRace
{
	class /*DYNAMICLIBRARYTRANSPORT_API*/ GroundTransportCamel : public TransportOfRace::Transport
	{
	public:
		GroundTransportCamel();
	};

	class /*DYNAMICLIBRARYTRANSPORT_API*/ GroundTransportCamelFast : public TransportOfRace::Transport
	{
	public:
		GroundTransportCamelFast();
	};

	class /*DYNAMICLIBRARYTRANSPORT_API*/ GroundTransportCentaur : public TransportOfRace::GroundTransportCamel
	{
	public:
		GroundTransportCentaur();
	};

	class /*DYNAMICLIBRARYTRANSPORT_API*/ GroundTransportAllterrainBoots : public TransportOfRace::GroundTransportCamel
	{
	public:
		GroundTransportAllterrainBoots();
	};
}