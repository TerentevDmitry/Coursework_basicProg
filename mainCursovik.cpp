//Курсовой проект «Симулятор гонок»

#include <iostream>
#include <string>
#include <limits>
#include "ChoosingTypeOfRace.h"
#include "GroundTransportRegistration.h"

#include "DynamicLibraryTransport/Transport.h"
#include "DynamicLibraryTransport/GroundTransport.h"
#include "DynamicLibraryRace/Race.h"





void MassForWin(float* Win, const int sizeRow)
{
    // Создаем массив

    

    // определяем размер массива
    //int sizeRow = sizeof(Win) / sizeof(Win[0]);
    //int sizeRow = 6;
    //std::cout << "Размер массива: " << sizeRow;

    // Выводим массив до сортировки
    std::cout << std::endl << "Массив до сортировки: " << std::endl;
    for (int i = 0; i < sizeRow; ++i) {
        std::cout << Win[i] << "\t";
    }
    std::cout << std::endl;

    // Сортируем обратным пузырьком
    bool swapped = false;
    do {
        swapped = false;
        float tmp = 0;

        for (int i = sizeRow - 1; i > 0; --i) {

            if (Win[i - 1] > Win[i]) {
                tmp = Win[i];
                Win[i] = Win[i - 1];
                Win[i - 1] = tmp;
                swapped = true;
            }
            // for (int i = 0; i < sizeRow - 1; ++i) {
            //  std::cout << arr[i] << "\t";
            //}
            // std::cout << std::endl;
        }

    } while (swapped);

    // Выводим массив после сортировки
    std::cout << std::endl << "Массив после сортировки: " << std::endl;
    for (int i = 0; i < sizeRow; ++i) {
        std::cout << Win[i] << "\t";
    }
    std::cout << std::endl;



};

// Создаем функцию создания динамического массива
float* create_arr(const int size)
{
    float* arr = new float[size] {};
    return arr;
}








int main()
{
	setlocale(LC_ALL, "Russian"); //Корректное отображение Кириллицы
	system("chcp 1251");
	
	std::cout << "Добро пожаловать в гоночный симулятор!" << std::endl;

    //std::string checkInitialInitValue;
    int typeOfRace = 0;
    float raceDistance = 0;

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


    //********************

    std::cout << "ВНИМАНИЕ: Должно быть зарегистрировано минимум два транспортных средства!" << std::endl;


    
   

    //Регистрация ТС


    if (typeOfRace == 1)
    {
       
        std::cout << "Вы выбрали 1. Гонка для наземного транспорта. Расстояние: " << raceDistance << std::endl;
        std::cout << "Зарегистрируйте наземные транспортные средства: " << std::endl;

        GroundTransportRegistration();
        




    }
    else if (typeOfRace == 2)
    {
        std::cout << "Вы выбрали гонку для воздушного транспорта" << std::endl;
        
    }
    else if (typeOfRace == 3)
    {
        std::cout << "Вы выбрали гонку для наземного и воздушного транспорта" << std::endl;
    }
    else
    {
        std::cout << "Вы выбрали несуществующую гонку." << std::endl << std::endl;
        
    }

    
    //====
    
    
    
    
        
        
        int ik = 0;
    
    
    
    
    
    
    
    
    
    
    //float* external_arr = create_arr(ik);
    
    //float Win[6] = {};
        TransportOfRace::GroundTransportCamel Camel;

        TransportOfRace::GroundTransportCamelFast CamelFast;
    
   

    std::cout << std::endl << "*** " << Camel.getTransportName() << " ***" << std::endl;
    std::cout << std::endl << "*** " << Camel.racePassingTimeAll(&Camel, raceDistance) << " ***" << std::endl;
    ik++;


    std::cout << std::endl << "*** " << CamelFast.getTransportName() << " ***" << std::endl;
    std::cout << std::endl << "*** " << CamelFast.racePassingTimeAll(&CamelFast, raceDistance) << " ***" << std::endl;
    ik++;
    


    //Rasee(&Camel, raceDistance);
    //std::cout << std::endl << "3 ч. racePassingTimeAll " << Rasee(&Camel, raceDistance) << " часов" << std::endl << std::endl;

  
    //std::cout << std::endl << "3 ч. racePassingTimeAll Camel " << Camel.getRacePassingTimeAll() << " часов" << std::endl << std::endl;
    std::cout << std::endl << "3 ч. racePassingTimeAll CamelFast " << CamelFast.getRacePassingTimeAll() << " часов" << std::endl << std::endl;


    

    float* external_arr = create_arr(ik);

    external_arr[0] = Camel.getRacePassingTimeAll();
    external_arr[1] = CamelFast.getRacePassingTimeAll();
    
    
    
    
    //std::cout << "#######" << std::endl;
    //for (int i = 0; i < ik; i++)
    //{
    //    std::cout << "int Win " << i << " значение " << external_arr[i] << std::endl;
    //}
    //std::cout << "#######" << std::endl;

    
    
    
    MassForWin(external_arr, ik);



   
    
    
    
  




    delete[] external_arr; // Удаление динамического массива
	//system("pause");
}