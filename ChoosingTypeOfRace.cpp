
#include "ChoosingTypeOfRace.h"

int ChoosingTypeOfRace()
{
    int typeOfRace = 0;

    do
    {
        std::cout << "1. Гонка для наземного транспорта" << std::endl;
        std::cout << "2. Гонка для воздушного транспорта" << std::endl;
        std::cout << "3. Гонка для наземного и воздушного транспорта" << std::endl;
        std::cout << "Выберите тип гонки: ";
        std::cin >> typeOfRace;

        while (!std::cin.good())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Вы ввели неверные данные." << std::endl;
            std::cout << "1. Гонка для наземного транспорта" << std::endl;
            std::cout << "2. Гонка для воздушного транспорта" << std::endl;
            std::cout << "3. Гонка для наземного и воздушного транспорта" << std::endl;
            std::cout << "Выберите тип гонки: ";
            std::cin >> typeOfRace;
        };

        std::cout << std::endl;

    } while (!checkChoosingTypeOfRace(typeOfRace));

    return typeOfRace;
};

bool checkChoosingTypeOfRace(int typeOfRace)
{
    if (typeOfRace == 1)
    {
        std::cout << "Вы выбрали гонку для наземного транспорта" << std::endl;
        return true;
    }
    else if (typeOfRace == 2)
    {
        std::cout << "Вы выбрали гонку для воздушного транспорта" << std::endl;
        return true;
    }
    else if (typeOfRace == 3)
    {
        std::cout << "Вы выбрали гонку для наземного и воздушного транспорта" << std::endl;
        return true;
    }
    else
    {
        std::cout << "Вы выбрали несуществующую гонку." << std::endl << std::endl;
        return false;
    }
};