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
    //bool checkTrueTypeOfRace = false;

    //Цикл выбора типа гонки
    
    typeOfRace = ChoosingTypeOfRace(typeOfRace);
    
        std::cout << std::endl << "typeOfRace" << typeOfRace << std::endl;
    
    //do
    //{
    //    std::cout << "1. Гонка для наземного транспорта" << std::endl;
    //    std::cout << "2. Гонка для воздушного транспорта" << std::endl;
    //    std::cout << "3. Гонка для наземного и воздушного транспорта" << std::endl;
    //    std::cout << "Выберите тип гонки: ";
    //    std::cin >> typeOfRace;
    //    std::cout << std::endl;
    //    
    //    if (typeOfRace == 1)
    //    {
    //        std::cout << "Вы выбрали гонку для наземного транспорта" << std::endl;
    //        checkTrueTypeOfRace = true;
    //    }
    //    else if (typeOfRace == 2)
    //    {
    //        std::cout << "Вы выбрали гонку для воздушного транспорта" << std::endl;
    //        checkTrueTypeOfRace = true;
    //    }
    //    else if (typeOfRace == 3)
    //    {
    //        std::cout << "Вы выбрали гонку для наземного и воздушного транспорта" << std::endl;
    //        checkTrueTypeOfRace = true;
    //    }
    //    else
    //    {
    //        std::cout << "Вы ввели неверную команду." << std::endl << std::endl;
    //    }

    //} while (!checkTrueTypeOfRace);

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