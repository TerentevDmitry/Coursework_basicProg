
#include "ChoosingTypeOfRace.h"

int ChoosingTypeOfRace(unsigned int typeOfRace)
{
    do
    {
        std::cout << "1. ����� ��� ��������� ����������" << std::endl;
        std::cout << "2. ����� ��� ���������� ����������" << std::endl;
        std::cout << "3. ����� ��� ��������� � ���������� ����������" << std::endl;
        std::cout << "�������� ��� �����: ";
        std::cin >> typeOfRace;
        std::cout << std::endl;

        checkChoosingTypeOfRace(typeOfRace);

    } while (!checkChoosingTypeOfRace(typeOfRace));
};

bool checkChoosingTypeOfRace(unsigned int typeOfRace)
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
        std::cout << "�� ����� �������� �������." << std::endl << std::endl;
        return false;
    }
};
