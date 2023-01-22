#pragma once
#include <string>
#include <iostream>

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
		std::string transportName_ = "Дефолт имя"; //имя
		bool transportSign_ = false; //признак (0 - наземный, 1 - воздушный)
		int transportSpeed_ = 0; //скорость
		int transportDrivingTimeBeforeRest_ = 0; //время движения до отдыха
		int transportDurationOfRest1_ = 0; //время отдыха первый раз
		float transportDurationOfRest2_ = 0; //время отдыха второй раз
		int transportDurationOfRestLast_ = 0; //время отдыха после второго раза
		int transportDistanceReductionCoefficient_ = 1; //коэффициент сокращения расстояния
		float racePassingTimeAll_ = 0;

		

	public:

		std::string getTransportName();
		float getRacePassingTimeAll();
		float racePassingTimeAll(TransportOfRace::Transport*, float raceDistance);

		

		//float racePassingTimeAll(TransportOfRace::Transport*, float raceDistance);

	};
};