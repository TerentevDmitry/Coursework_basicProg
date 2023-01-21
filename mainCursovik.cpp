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
    
        std::cout << std::endl << "ПРОВЕРКА: typeOfRace " << typeOfRace << std::endl;
    

    do
    {
        std::cout << "Укажите длину дистанции (должна быть положительна): ";
        std::cin >> raceDistance;
        std::cout << std::endl;

    } while (raceDistance <= 0);

    std::cout << "ВНИМАНИЕ: Должно быть зарегистрировано минимум два транспортных средства!" << std::endl;

    //std::cout << "2. Гонка для воздушного транспорта" << std::endl;
    //std::cout << "3. Гонка для наземного и воздушного транспорта" << std::endl;
    //std::cout << "Выберите тип гонки: ";
    //std::cin >> typeOfRace;
    //std::cout << std::endl;
    
    
    
    
    
    
  





	//system("pause");
}