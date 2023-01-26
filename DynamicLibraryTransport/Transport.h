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
		std::string transportName_ = "������ ���"; //���
		bool transportSign_ = false; //������� (0 - ��������, 1 - ���������)
		int transportSpeed_ = 0; //��������
		int transportDrivingTimeBeforeRest_ = 0; //����� �������� �� ������
		int transportDurationOfRest1_ = 0; //����� ������ ������ ���
		float transportDurationOfRest2_ = 0; //����� ������ ������ ���
		int transportDurationOfRestLast_ = 0; //����� ������ ����� ������� ����
		int transportDistanceReductionCoefficient_ = 1; //����������� ���������� ����������
		float racePassingTimeAll_ = 0;

		

	public:

		std::string getTransportName();
		float getRacePassingTimeAll();
		float racePassingTimeAll(TransportOfRace::Transport*, float raceDistance);

		

		//float racePassingTimeAll(TransportOfRace::Transport*, float raceDistance);

	};
};