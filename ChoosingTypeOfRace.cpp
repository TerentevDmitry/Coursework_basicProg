#include "ChoosingTypeOfRace.h"

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
    std::cout << "1. ����� ��� ��������� ����������" << std::endl;
    std::cout << "2. ����� ��� ���������� ����������" << std::endl;
    std::cout << "3. ����� ��� ��������� � ���������� ����������" << std::endl;
    std::cout << "�������� ��� �����: ";
    std::cin >> typeOfRace;

    return typeOfRace;
};


bool CheckChoosingTypeOfRace(int typeOfRace)
{
    if (typeOfRace == 1)
    {
        std::cout << "�� ������� 1. ����� ��� ��������� ����������" << std::endl;
        return true;
    }
    else if (typeOfRace == 2)
    {
        std::cout << "�� ������� 2. ����� ��� ���������� ����������" << std::endl;
        return true;
    }
    else if (typeOfRace == 3)
    {
        std::cout << "�� ������� 3. ����� ��� ��������� � ���������� ����������" << std::endl;
        return true;
    }
    else
    {
        std::cout << "�� ������� �������������� �����." << std::endl << std::endl;
        return false;
    }
};