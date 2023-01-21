
#include "ChoosingTypeOfRace.h"

int ChoosingTypeOfRace(unsigned int typeOfRace)
{
    do
    {
        std::cout << "1. Гонка для наземного транспорта" << std::endl;
        std::cout << "2. Гонка для воздушного транспорта" << std::endl;
        std::cout << "3. Гонка для наземного и воздушного транспорта" << std::endl;
        std::cout << "Выберите тип гонки: ";
        std::cin >> typeOfRace;
        std::cout << std::endl;

        checkChoosingTypeOfRace(typeOfRace);

    } while (!checkChoosingTypeOfRace(typeOfRace));
};

bool checkChoosingTypeOfRace(unsigned int typeOfRace)
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
        std::cout << "Вы ввели неверную команду." << std::endl << std::endl;
        return false;
    }
};
