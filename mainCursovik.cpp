//Курсовой проект «Симулятор гонок»

#include <iostream>
#include <string>
#include <limits>
#include "ChoosingTypeOfRace.h"
#include "TransportRegistration.h"
#include "DynamicLibraryTransport/Transport.h"
//#include "DynamicLibraryTransport/GroundTransport.h"
//#include "DynamicLibraryTransport/AirTransport.h"
#include "TypeOfRaceAndTransport.h"



void arrayOfWinners(TransportOfRace::Transport* MassiveOfRacers, const int ik)
{
    TransportOfRace::Transport tempObject; //временный объект для сортировки
    std::cout << std::endl;
    
    // Сортируем обратным пузырьком
    bool swapped = false;
    do {
        swapped = false;

        for (int i = ik - 1; i > 0; --i) {

            if (MassiveOfRacers[i - 1].getRacePassingTimeAll() > MassiveOfRacers[i].getRacePassingTimeAll()) {
                tempObject = MassiveOfRacers[i];
                MassiveOfRacers[i] = MassiveOfRacers[i - 1];
                MassiveOfRacers[i - 1] = tempObject;
                swapped = true;
            }
        }

    } while (swapped);

    std::cout << "Результаты гонки:" << std::endl;
    
    int k = 1; //Для вывода номера по порядку
   
    for (int i = 0; i < ik; ++i) 
    {
        if (MassiveOfRacers[i].getRacePassingTimeAll() != 0)
        {
            std::cout << k << ". ";
            std::cout << MassiveOfRacers[i].getTransportName() << ". Время: " << MassiveOfRacers[i].getRacePassingTimeAll() << std::endl;
            k++;
        }
    }
    std::cout << std::endl;
};

int main()
{
    setlocale(LC_ALL, "Russian"); //Корректное отображение Кириллицы
    system("chcp 1251");

    int typeOfRace = 0;
    float raceDistance = 0;

    do
    {
        std::cout << "Добро пожаловать в гоночный симулятор!" << std::endl;
        typeOfRace = ChoosingTypeOfRace();

        //Ввод длины дистанции
        do
        {
            std::cout << "Укажите длину дистанции (должна быть положительна), км: ";
            std::cin >> raceDistance;

            while (!std::cin.good())
            {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Длина - числовая характеристика протяжённости линий, измеряется в метрах" << std::endl;
                std::cout << "Укажите длину дистанции (должна быть положительна), км: ";
                std::cin >> raceDistance;
            };

            std::cout << std::endl;
            if (raceDistance < 0)
            {
                std::cout << "Вы ввели отрицательное значение длины, м" << std::endl;
            }
        } while (raceDistance <= 0);

        std::cout << "ВНИМАНИЕ: Должно быть зарегистрировано минимум два транспортных средства!" << std::endl;

        const int ik = 8; //Кол-во всего ТС + 1

        TransportOfRace::Transport MassiveOfRacers[ik]{}; // массив для зарегистрированных гонщиков

        //Регистрация ТС
        switch (typeOfRace)
        {
        case static_cast <int> (TypeOfRaceAndTransport::RaceForGroundTransport):
            std::cout << std::endl << "**********************************************************" << std::endl;
            std::cout << std::endl << "Вы выбрали 1. Гонка для наземного транспорта. Расстояние: " << raceDistance << std::endl;
            TransportRegistration(typeOfRace, raceDistance, MassiveOfRacers, ik);
            //GroundTransportRegistration(raceDistance, MassiveOfRacers, ik);
            break;
        case static_cast <int> (TypeOfRaceAndTransport::RaceForAirTransport):
            std::cout << std::endl << "**********************************************************" << std::endl;
            std::cout << std::endl << "Вы выбрали 2. Гонка для воздушного транспорта. Расстояние: " << raceDistance << std::endl;
            TransportRegistration(typeOfRace, raceDistance, MassiveOfRacers, ik);
            break;
        case static_cast <int> (TypeOfRaceAndTransport::RaceForGroundAndAirTransport):
            std::cout << std::endl << "**********************************************************" << std::endl;
            std::cout << std::endl << "Вы выбрали 3. Гонка для наземного и воздушного транспорта. Расстояние: " << raceDistance << std::endl;
            TransportRegistration(typeOfRace, raceDistance, MassiveOfRacers, ik);

            break;
        default:
            std::cout << "Вы выбрали несуществующую гонку." << std::endl << std::endl;
            break;
        }

        std::cout << "Зарегистрированные транспортные средства: ";

        for (int i = 0; i < ik; i++)
        {
            if (MassiveOfRacers[i].getTransportReg() == true)
            {
                if (i != 0 && i != (ik - 1))
                {
                    std::cout << ", ";
                }
                std::cout << MassiveOfRacers[i].getTransportName();
            }
        }

        arrayOfWinners(MassiveOfRacers, ik);

        std::cout << std::endl << std::endl;

    } while (!endOfGame());
};