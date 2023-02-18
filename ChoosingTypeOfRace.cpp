#include "ChoosingTypeOfRace.h"
#include "TypeOfRaceAndTransport.h"

int ChoosingTypeOfRace()
{
    int typeOfRace = 0;

    do
    {
        typeOfRace = PrintChoosingTypeOfRace(typeOfRace);
       
        while (!std::cin.good())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            typeOfRace = PrintChoosingTypeOfRace(typeOfRace);
        };

        std::cout << std::endl;

    } while (!CheckChoosingTypeOfRace(typeOfRace));

    return typeOfRace;
};

int PrintChoosingTypeOfRace(int typeOfRace)
{
    std::cout << "1. Гонка для наземного транспорта" << std::endl;
    std::cout << "2. Гонка для воздушного транспорта" << std::endl;
    std::cout << "3. Гонка для наземного и воздушного транспорта" << std::endl;
    std::cout << "Выберите тип гонки: ";
    std::cin >> typeOfRace;

    return typeOfRace;
};

bool CheckChoosingTypeOfRace(int typeOfRace)
{
    if (typeOfRace == static_cast <int> (TypeOfRaceAndTransport::RaceForGroundTransport))
    {
        std::cout << "Вы выбрали 1. гонку для наземного транспорта" << std::endl;
        return true;
    }
    else if (typeOfRace == static_cast <int> (TypeOfRaceAndTransport::RaceForAirTransport))
    {
        std::cout << "Вы выбрали 2. гонку для воздушного транспорта" << std::endl;
        return true;
    }
    else if (typeOfRace == static_cast <int> (TypeOfRaceAndTransport::RaceForGroundAndAirTransport))
    {
        std::cout << "Вы выбрали 3. гонку для наземного и воздушного транспорта" << std::endl;
        return true;
    }
    else
    {
        std::cout << "Вы выбрали несуществующую гонку." << std::endl << std::endl;
        return false;
    }
};