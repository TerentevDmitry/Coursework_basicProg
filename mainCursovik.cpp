//Курсовой проект «Симулятор гонок»

#include <iostream>
#include <string>
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

    //Цикл выбора типа гонки
        
    typeOfRace = ChoosingTypeOfRace();
    
    do
    {
        std::cout << "Укажите длину дистанции (должна быть положительна): ";
        std::cin >> raceDistance;
        std::cout << std::endl;

    } while (raceDistance <= 0);

    std::cout << "ВНИМАНИЕ: Должно быть зарегистрировано минимум два транспортных средства!" << std::endl;

    
    
    
    
    
    
  





	//system("pause");
}