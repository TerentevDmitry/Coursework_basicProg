#pragma once
#include <string>
#include <iostream>

//DYNAMICLIBRARYRACE_EXPORTS

//#ifdef DYNAMICLIBRARYTRANSPORT_EXPORTS
//#define DYNAMICLIBRARYTRANSPORT_API __declspec(dllexport)
//#else
//#define DYNAMICLIBRARYTRANSPORT_API __declspec(dllimport)
//#endif

namespace TransportOfRace
{

	class /*DYNAMICLIBRARYTRANSPORT_API*/ Transport
	{
	protected:
		std::string transportName_ = "Дефолт имя"; //имя
		bool transportReg_ = false; //признак (0 - не зарегистрирован, 1 - зарегистрирован)
		int transportSpeed_ = 0; //скорость
		int transportDrivingTimeBeforeRest_ = 0; //время движения до отдыха
		int transportDurationOfRest1_ = 0; //время отдыха первый раз
		float transportDurationOfRest2_ = 0; //время отдыха второй раз
		int transportDurationOfRestLast_ = 0; //время отдыха после второго раза
		int transportDistanceReductionCoefficient_ = 0; //коэффициент сокращения расстояния в %
		float racePassingTimeAll_ = 0; //полное время прохождения трассы
		int transportNumber_ = 0; //Номер транспорта
		int countOfRest_ = 0; // кол-во раз отдыха
		float restTime_ = 0; // полное время отдыха
		float timeDriving_ = 0; // полное время езды
		float peaceOfDis_ = 0; // остаток дистанции до финиша после последнего отдыха.
		float newAirDistance = 0;

	public:
		
		float raceAirPassingTimeAll(TransportOfRace::Transport* MassiveOfRacers, float raceDistance);
		float racePassingTimeAll(TransportOfRace::Transport* MassiveOfRacers, float raceDistance);
		float getRacePassingTimeAll();
		int getTransportNumber();
		
		std::string getTransportName();

		void setTransportReg(bool transportReg);
		bool getTransportReg();

		//float racePassingTimeAll(TransportOfRace::Transport*, float raceDistance);
	};
};