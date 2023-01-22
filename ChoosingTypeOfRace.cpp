
#include "ChoosingTypeOfRace.h"

int ChoosingTypeOfRace()
{
    int typeOfRace = 0;

    do
    {
        std::cout << "1. ����� ��� ��������� ����������" << std::endl;
        std::cout << "2. ����� ��� ���������� ����������" << std::endl;
        std::cout << "3. ����� ��� ��������� � ���������� ����������" << std::endl;
        std::cout << "�������� ��� �����: ";
        std::cin >> typeOfRace;

        while (!std::cin.good())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "�� ����� �������� ������." << std::endl;
            std::cout << "1. ����� ��� ��������� ����������" << std::endl;
            std::cout << "2. ����� ��� ���������� ����������" << std::endl;
            std::cout << "3. ����� ��� ��������� � ���������� ����������" << std::endl;
            std::cout << "�������� ��� �����: ";
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
        std::cout << "�� ������� ����� ��� ��������� ����������" << std::endl;
        return true;
    }
    else if (typeOfRace == 2)
    {
        std::cout << "�� ������� ����� ��� ���������� ����������" << std::endl;
        return true;
    }
    else if (typeOfRace == 3)
    {
        std::cout << "�� ������� ����� ��� ��������� � ���������� ����������" << std::endl;
        return true;
    }
    else
    {
        std::cout << "�� ������� �������������� �����." << std::endl << std::endl;
        return false;
    }
};