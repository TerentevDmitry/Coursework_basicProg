#pragma once
#include <string>
//DYNAMICLIBRARYRACE_EXPORTS

#ifdef DYNAMICLIBRARYTRANSPORT_EXPORTS
#define DYNAMICLIBRARYTRANSPORT_API __declspec(dllexport)
#else
#define DYNAMICLIBRARYTRANSPORT_API __declspec(dllimport)
#endif

namespace TransportOfRace
{

	class DYNAMICLIBRARYTRANSPORT_API Transport
	{
	protected:
		std::string transportName_; //имя
		bool transportSign_ = false; //признак (0 - наземный, 1 - воздушный)
		int transportSpeed_ = 0; //скорость
		int transportDrivingTimeBeforeRest_ = 0; //время движения до отдыха
		int transportDurationOfRest1_ = 0; //время отдыха первый раз
		float transportDurationOfRest2_ = 0; //время отдыха второй раз
		int transportDurationOfRestLast_ = 0; //время отдыха после второго раза
		int transportDistanceReductionCoefficient_ = 1; //коэффициент сокращения расстояния

	public:
		std::string getTransportName();
		int getTransportSign();
		int getTransportSpeed();
		int getTransportDrivingTimeBeforeRest();
		int getTransportDurationOfRest1();
		float getTransportDurationOfRest2();
		int getTransportDurationOfRestLast();
		int getTransportDistanceReductionCoefficient();
	};
};