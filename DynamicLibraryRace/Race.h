#pragma once


#ifdef DYNAMICLIBRARYRACE_EXPORTS
#define DYNAMICLIBRARYRACE_API __declspec(dllexport)
#else
#define DYNAMICLIBRARYRACE_API __declspec(dllimport)
#endif

namespace RaceOfRace
{
	class DYNAMICLIBRARYRACE_API Race
	{
	protected:
		float racePassingTimeAll_ = 0; //����� ������� ����������� ����� T
		float racePassingTime_ = 0; //����� ����������� ����� T1 = S/V
		

	public:
		float getRacePassingTimeAll();
		float getRacePassingTime();
	};






	

};