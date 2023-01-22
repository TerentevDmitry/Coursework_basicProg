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
		std::string transportName_; //���
		bool transportSign_ = false; //������� (0 - ��������, 1 - ���������)
		int transportSpeed_ = 0; //��������
		int transportDrivingTimeBeforeRest_ = 0; //����� �������� �� ������
		int transportDurationOfRest1_ = 0; //����� ������ ������ ���
		float transportDurationOfRest2_ = 0; //����� ������ ������ ���
		int transportDurationOfRestLast_ = 0; //����� ������ ����� ������� ����
		int transportDistanceReductionCoefficient_ = 1; //����������� ���������� ����������

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