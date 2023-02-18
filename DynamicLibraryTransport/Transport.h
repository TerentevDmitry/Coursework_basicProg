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
		std::string transportName_ = "������ ���"; //���
		bool transportReg_ = false; //������� (0 - �� ���������������, 1 - ���������������)
		int transportSpeed_ = 0; //��������
		int transportDrivingTimeBeforeRest_ = 0; //����� �������� �� ������
		int transportDurationOfRest1_ = 0; //����� ������ ������ ���
		float transportDurationOfRest2_ = 0; //����� ������ ������ ���
		int transportDurationOfRestLast_ = 0; //����� ������ ����� ������� ����
		int transportDistanceReductionCoefficient_ = 0; //����������� ���������� ���������� � %
		float racePassingTimeAll_ = 0; //������ ����� ����������� ������
		int transportNumber_ = 0; //����� ����������
		int countOfRest_ = 0; // ���-�� ��� ������
		float restTime_ = 0; // ������ ����� ������
		float timeDriving_ = 0; // ������ ����� ����
		float peaceOfDis_ = 0; // ������� ��������� �� ������ ����� ���������� ������.
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