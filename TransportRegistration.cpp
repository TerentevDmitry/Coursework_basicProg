#include "TransportRegistration.h"
#include "TypeOfRaceAndTransport.h"




//void GroundTransportRegistration(float raceDistance, TransportOfRace::Transport* MassiveOfRacers, const int ik)
//{
//    bool endOfRegistration = false;
//    int tipeOfTransport = 0;
//    int numberOfRegVehicles = 0; //���-�� ��������� ��
//
//    do
//    {
//        tipeOfTransport = PrintGroundTransportRegistration(tipeOfTransport, numberOfRegVehicles, &endOfRegistration, MassiveOfRacers, ik);
//
//        if (tipeOfTransport == static_cast <int> (TypeOfRaceAndTransport::Camel))
//        {
//            TransportOfRace::GroundTransportCamel Camel;
//            Camel.setTransportReg(true);
//            Camel.racePassingTimeAll(&Camel, raceDistance);
//            MassiveOfRacers[numberOfRegVehicles] = Camel;
//            
//            numberOfRegVehicles++;
//        }
//        else if (tipeOfTransport == static_cast <int> (TypeOfRaceAndTransport::CamelFast))
//        {
//            TransportOfRace::GroundTransportCamelFast CamelFast;
//            CamelFast.setTransportReg(true);
//            CamelFast.racePassingTimeAll(&CamelFast, raceDistance);
//            MassiveOfRacers[numberOfRegVehicles] = CamelFast;
//            
//            numberOfRegVehicles++;
//        }
//        else if (tipeOfTransport == static_cast <int> (TypeOfRaceAndTransport::Centaur))
//        {
//            TransportOfRace::GroundTransportCentaur Centaur;
//            Centaur.setTransportReg(true);
//            Centaur.racePassingTimeAll(&Centaur, raceDistance);
//            MassiveOfRacers[numberOfRegVehicles] = Centaur;
//            
//            numberOfRegVehicles++;
//        }
//        else if (tipeOfTransport == static_cast <int> (TypeOfRaceAndTransport::AllTerrainBoots))
//        {
//            TransportOfRace::GroundTransportAllterrainBoots AllTerrainBoots;
//            AllTerrainBoots.setTransportReg(true);
//            AllTerrainBoots.getRacePassingTimeAll();
//            AllTerrainBoots.racePassingTimeAll(&AllTerrainBoots, raceDistance);
//            MassiveOfRacers[numberOfRegVehicles] = AllTerrainBoots;
//            
//            numberOfRegVehicles++;
//        }
//    } while (!endOfRegistration);
//}

//int PrintGroundTransportRegistration(int tipeOfTransport, int numberOfRegVehicles, bool *endOfRegistration, TransportOfRace::Transport* MassiveOfRacers, const int ik)
//                                     
//{
//    if (numberOfRegVehicles != 0)
//    {
//        std::cout << "������������������ ������������ ��������: ";
//
//        for (int i = 0; i < ik; i++)
//        {
//            if (MassiveOfRacers[i].getTransportReg() == true)
//            {
//                if (i != 0 && i != (ik - 1))
//                {
//                    std::cout << ", ";
//                }
//                std::cout << MassiveOfRacers[i].getTransportName();
//            }
//        }
//    }
//
//    std::cout << std::endl << "��������������� ������������ ��������: " << std::endl;
//    std::cout << "1. �������" << std::endl;
//    std::cout << "2. �������-��������" << std::endl;
//    std::cout << "3. �������" << std::endl;
//    std::cout << "4. �������-���������" << std::endl;
//    
//    if (numberOfRegVehicles < 2)
//    {
//        std::cout << "�������� ���������(������� ��� ����������): ";
//       do
//       { 
//           std::cin >> tipeOfTransport;
//       
//       } while (!checkTransportRegistration(tipeOfTransport, MassiveOfRacers, ik));
//
//        return tipeOfTransport;
//    }
//    else if (numberOfRegVehicles >= 2)
//    {
//        std::cout << "0. ��������� ����������� � ������ �����" << std::endl;
//        std::cout << "�������� ��� ���������(���� ��������� ����������� � ������ �����): ";
//        do
//        {
//            std::cin >> tipeOfTransport;
//
//        } while (!checkTransportRegistration(tipeOfTransport, MassiveOfRacers, ik));
//
//        if (tipeOfTransport == 0)
//        {
//            std::cout << std::endl << "����������� ��������" << std::endl;
//            //std::cout << "numberOfRegVehicles = " << numberOfRegVehicles << std::endl;
//            *endOfRegistration = true;
//            return 0;
//        }
//        return tipeOfTransport;
//    } 
//    else
//    {
//        std::cout << "TransportRegistration.cpp _ PrintGroundTransportRegistration" << std::endl;
//        
//        return tipeOfTransport;
//    }
//};

void TransportRegistration(int typeOfRace, float raceDistance, TransportOfRace::Transport* MassiveOfRacers, const int ik)
{
    bool endOfRegistration = false;
    int tipeOfTransport = 0;
    int numberOfRegVehicles = 0; //���-�� ��������� ��

    do
    {
        tipeOfTransport = PrintTransportRegistration(typeOfRace, tipeOfTransport, numberOfRegVehicles, &endOfRegistration, MassiveOfRacers, ik);

        if (tipeOfTransport == static_cast <int> (TypeOfRaceAndTransport::Camel))
        {
            TransportOfRace::GroundTransportCamel Camel;
            Camel.setTransportReg(true);
            Camel.racePassingTimeAll(&Camel, raceDistance);
            MassiveOfRacers[numberOfRegVehicles] = Camel;

            numberOfRegVehicles++;
        }
        else if (tipeOfTransport == static_cast <int> (TypeOfRaceAndTransport::CamelFast))
        {
            TransportOfRace::GroundTransportCamelFast CamelFast;
            CamelFast.setTransportReg(true);
            CamelFast.racePassingTimeAll(&CamelFast, raceDistance);
            MassiveOfRacers[numberOfRegVehicles] = CamelFast;

            numberOfRegVehicles++;
        }
        else if (tipeOfTransport == static_cast <int> (TypeOfRaceAndTransport::Centaur))
        {
            TransportOfRace::GroundTransportCentaur Centaur;
            Centaur.setTransportReg(true);
            Centaur.racePassingTimeAll(&Centaur, raceDistance);
            MassiveOfRacers[numberOfRegVehicles] = Centaur;

            numberOfRegVehicles++;
        }
        else if (tipeOfTransport == static_cast <int> (TypeOfRaceAndTransport::AllTerrainBoots))
        {
            TransportOfRace::GroundTransportAllterrainBoots AllTerrainBoots;
            AllTerrainBoots.setTransportReg(true);
            AllTerrainBoots.getRacePassingTimeAll();
            AllTerrainBoots.racePassingTimeAll(&AllTerrainBoots, raceDistance);
            MassiveOfRacers[numberOfRegVehicles] = AllTerrainBoots;

            numberOfRegVehicles++;
        }
        else if (tipeOfTransport == static_cast <int> (TypeOfRaceAndTransport::CarpetPlane))
        {
            TransportOfRace::AirTransportCarpetPlane CarpetPlane;
            CarpetPlane.setTransportReg(true);
            CarpetPlane.raceAirPassingTimeAll(&CarpetPlane, raceDistance);
            MassiveOfRacers[numberOfRegVehicles] = CarpetPlane;

            numberOfRegVehicles++;
        }
        else if (tipeOfTransport == static_cast <int> (TypeOfRaceAndTransport::Eagle))
        {
            TransportOfRace::AirTransportEagle Eagle;
            Eagle.setTransportReg(true);
            Eagle.raceAirPassingTimeAll(&Eagle, raceDistance);
            MassiveOfRacers[numberOfRegVehicles] = Eagle;

            numberOfRegVehicles++;
        }
        else if (tipeOfTransport == static_cast <int> (TypeOfRaceAndTransport::Broomstick))
        {
            TransportOfRace::AirTransportBroomstick Broomstick;
            Broomstick.setTransportReg(true);
            Broomstick.raceAirPassingTimeAll(&Broomstick, raceDistance);
            MassiveOfRacers[numberOfRegVehicles] = Broomstick;

            numberOfRegVehicles++;
        }
    } while (!endOfRegistration);
}

int PrintTransportRegistration(int typeOfRace, int tipeOfTransport, int numberOfRegVehicles, bool* endOfRegistration, TransportOfRace::Transport* MassiveOfRacers, const int ik)

{
    if (numberOfRegVehicles != 0)
    {
        std::cout << "������������������ ������������ ��������: ";

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
    }
    
    switch (typeOfRace)
    {
    case static_cast <int> (TypeOfRaceAndTransport::RaceForGroundTransport):
        std::cout << std::endl << "��������������� ������������ ��������: " << std::endl;
        std::cout << "1. �������" << std::endl;
        std::cout << "2. �������-��������" << std::endl;
        std::cout << "3. �������" << std::endl;
        std::cout << "4. �������-���������" << std::endl;

        break;
    case static_cast <int> (TypeOfRaceAndTransport::RaceForAirTransport):
        std::cout << std::endl << "��������������� ������������ ��������: " << std::endl;
        std::cout << "1. ����-������" << std::endl;
        std::cout << "2. ���" << std::endl;
        std::cout << "3. �����" << std::endl;

        break;
    case static_cast <int> (TypeOfRaceAndTransport::RaceForGroundAndAirTransport):
        std::cout << std::endl << "��������������� ������������ ��������: " << std::endl;
        std::cout << "1. �������" << std::endl;
        std::cout << "2. �������-��������" << std::endl;
        std::cout << "3. �������" << std::endl;
        std::cout << "4. �������-���������" << std::endl;
        std::cout << "5. ����-������" << std::endl;
        std::cout << "6. ���" << std::endl;
        std::cout << "7. �����" << std::endl;

        break;
    default:
        std::cout << "������ �����������" << std::endl << std::endl;
        break;
    }

    if (numberOfRegVehicles < 2)
    {
        std::cout << "�������� ���������(������� ��� ����������): ";
        do
        {
            std::cin >> tipeOfTransport;

            if (typeOfRace == 2 && tipeOfTransport != 0)
            {
                tipeOfTransport += 4;//�������� ��� ��������� �����. � ��������� ����� transportNumber_ �� 5,6,7.
            };

        } while (!checkTransportRegistration(tipeOfTransport, MassiveOfRacers, ik));

        return tipeOfTransport;
    }
    else if (numberOfRegVehicles >= 2)
    {
        std::cout << "0. ��������� ����������� � ������ �����" << std::endl;
        std::cout << "�������� ��� ���������(���� ��������� ����������� � ������ �����): ";
        do
        {
            std::cin >> tipeOfTransport;
            if (typeOfRace == 2 && tipeOfTransport != 0)
            {
                tipeOfTransport += 4; //�������� ��� ��������� �����. � ��������� ����� transportNumber_ �� 5,6,7.
            };

        } while (!checkTransportRegistration(tipeOfTransport, MassiveOfRacers, ik));

        if (tipeOfTransport == 0)
        {
            std::cout << std::endl << "����������� ��������" << std::endl;
            
            *endOfRegistration = true;
            return 0;
        }
        return tipeOfTransport;
    }
    else
    {
        std::cout << "TransportRegistration.cpp _ PrintGroundTransportRegistration" << std::endl;

        return tipeOfTransport;
    }
};

bool checkTransportRegistration(int tipeOfTransport, TransportOfRace::Transport* MassiveOfRacers, const int ik)
{
    for (int i = 0; i < ik; i++)
    {
        if (tipeOfTransport == 0)
        {
            return true;
        }
        if (MassiveOfRacers[i].getTransportNumber() == tipeOfTransport)
        {
            std::cout << "�� ��������� ���������������� ��� ������������������ ��." << std::endl;
            std::cout << "�������� ��������� (0 - ��� ������): ";
            return false;
        }
       
    }
    return true;
};

bool endOfGame()
{
    int endGame = 0;
    
    std::cout << "1. �������� ��� ���� �����." << std::endl;
    std::cout << "2. �����" << std::endl;
    std::cout << "�������� ��������: ";
    std::cin >> endGame;
    
    if (endGame != 1 && endGame != 2)
    {
        do
        {
            std::cout << "�� ������� �������� ��������. �������� ������ ��������: ";
            std::cin >> endGame;
        } while (!(endGame == 1 || endGame == 2));
    };
    
    if (endGame == 2) { return true; }
    return false;
};