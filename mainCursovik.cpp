//Курсовой проект «Симулятор гонок»

#include <iostream>
#include <string>
#include <limits>
#include "ChoosingTypeOfRace.h"



int main()
{
	setlocale(LC_ALL, "Russian"); //Корректное отображение Кириллицы
	system("chcp 1251");
	
	//ground air
	
	std::cout << "Добро пожаловать в гоночный симулятор!" << std::endl;

    //std::string checkInitialInitValue;
    int typeOfRace = 0;
    float raceDistance = 0;

    typeOfRace = ChoosingTypeOfRace();

   
    do
    {
        std::cout << "Укажите длину дистанции (должна быть положительна): ";
        std::cin >> raceDistance;
        
        while (!std::cin.good())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Длина - числовая характеристика протяжённости линий, измеряется в метрах" << std::endl;
            std::cout << "Укажите длину дистанции (должна быть положительна): ";
            std::cin >> raceDistance;
        };
        
        std::cout << std::endl;
        if (raceDistance < 0)
        {
            std::cout << "Вы ввели отрицательное значение длины." << std::endl;
        }

    } while (raceDistance <= 0);


    //********************

    std::cout << "ВНИМАНИЕ: Должно быть зарегистрировано минимум два транспортных средства!" << std::endl;

   







    int NumberOfRegVehicles = 0;
    do
    {
        std::cout << "ВНИМАНИЕ: " << NumberOfRegVehicles << std::endl;

    } while (NumberOfRegVehicles++ <= 1);
    
    
    
  





	//system("pause");
}