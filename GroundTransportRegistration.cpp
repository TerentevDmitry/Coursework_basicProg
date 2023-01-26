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
    std::cout << "1. �������" << std::endl;
    std::cout << "2. �������-��������" << std::endl;
    std::cout << "3. �������" << std::endl;
    std::cout << "4. �������-���������" << std::endl;
    
    if (NumberOfRegVehicles < 2)
    {
        std::cout << "�������� ���������(������� ��� ����������): ";
        std::cin >> tipeOfTransport;
        return tipeOfTransport;
    }
    else if (NumberOfRegVehicles >= 2)
    {
        std::cout << "0. ��������� �����������" << std::endl;
        std::cout << "�������� ���������(������� ��� ����������): ";
        std::cin >> tipeOfTransport;

        if (tipeOfTransport == 0)
        {
            std::cout << "����������� ��������" << std::endl;
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
        std::cout << "�� ������� ���� ���������. ����� ������� ��� ���������� ��� ������ �����" << std::endl;
        return true;
    }
    else if (NumberOfRegVehicles >= 2)
    {
        std::cout << "�� ������� ��� ��� ������ ����������" << std::endl;
        return true;
    }
    else if (endOfRegistration == true && NumberOfRegVehicles < 2)
    {
        std::cout << "�� ������� 3. ����� ��� ��������� � ���������� ����������" << std::endl;
        return false;
    }
    else
    {
        std::cout << "GroundTransportRegistration.cpp _ CheckGroundTransportRegistration" << std::endl;
        return false;
    }
}
