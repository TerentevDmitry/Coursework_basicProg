#include "GroundTransportRegistration.h"



void GroundTransportRegistration()
{
    bool endOfRegistration = false;
    int tipeOfTransport = 0;
    int NumberOfRegVehicles = 0;

    do
    {
            tipeOfTransport = PrintGroundTransportRegistration(tipeOfTransport, NumberOfRegVehicles, &endOfRegistration);
            


            if (tipeOfTransport != 0)
            {
                NumberOfRegVehicles++;
            }
            
                
               
            
      

        
        std::cout << "1. NumberOfRegVehicles = " << NumberOfRegVehicles << std::endl;
    } while (!endOfRegistration);
}

int PrintGroundTransportRegistration(int tipeOfTransport, int NumberOfRegVehicles, bool *endOfRegistration)
{
    std::cout << "1. Верблюд" << std::endl;
    std::cout << "2. Верблюд-скороход" << std::endl;
    std::cout << "3. Кентавр" << std::endl;
    std::cout << "4. Ботинки-вездеходы" << std::endl;
    
    if (NumberOfRegVehicles < 2)
    {
        std::cout << "Выберите транспорт(минимум два транспорта): ";
        std::cin >> tipeOfTransport;
        return tipeOfTransport;
    }
    else if (NumberOfRegVehicles >= 2)
    {
        std::cout << "0. Закончить регистрацию" << std::endl;
        std::cout << "Выберите транспорт(минимум два транспорта): ";
        std::cin >> tipeOfTransport;

        if (tipeOfTransport == 0)
        {
            std::cout << "Регистрация окончена" << std::endl;
            *endOfRegistration = true;
            return 0;
        }

        return tipeOfTransport;
    } 
    else
    {
        std::cout << "GroundTransportRegistration.cpp _ PrintGroundTransportRegistration" << std::endl;
        return tipeOfTransport;
    }
};


bool CheckGroundTransportRegistration(bool endOfRegistration, int NumberOfRegVehicles)
{
    if (NumberOfRegVehicles == 1)
    {
        std::cout << "Вы выбрали один транспорт. Нужно минимум два транспорта для начала гонки" << std::endl;
        return true;
    }
    else if (NumberOfRegVehicles >= 2)
    {
        std::cout << "Вы выбрали два или больше транспорта" << std::endl;
        return true;
    }
    else if (endOfRegistration == true && NumberOfRegVehicles < 2)
    {
        std::cout << "Вы выбрали 3. гонку для наземного и воздушного транспорта" << std::endl;
        return false;
    }
    else
    {
        std::cout << "GroundTransportRegistration.cpp _ CheckGroundTransportRegistration" << std::endl;
        return false;
    }
}
