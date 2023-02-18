cmake_minimum_required(VERSION 3.10)
#Название проекта
project(Cursovik_basicProg) 
#Установка переменной со списком исходников для исполняемого файла
set (SOURCES_EXE mainCursovik.cpp ChoosingTypeOfRace.cpp TypeOfRaceAndTransport.cpp TransportRegistration.cpp) 
set (HEADERS_EXE ChoosingTypeOfRace.h TypeOfRaceAndTransport.h TransportRegistration.h)
#Установка переменной со списком исходников для библиотеки
set (SOURCES_LIB DynamicLibraryTransport/AirTransport.cpp DynamicLibraryTransport/GroundTransport.cpp DynamicLibraryTransport/Transport.cpp) 
set (HEADERS_LIB DynamicLibraryTransport/AirTransport.h DynamicLibraryTransport/GroundTransport.h DynamicLibraryTransport/Transport.h)
#Включение экспорта всех символов для создания динамической библиотеки
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
#Создание статической библиотеки с именем LeavingPersonLib
add_library(Cursovik_basicProgLib SHARED ${SOURCES_LIB} ${HEADERS_LIB}) 
#Создание исполняемого файла с именем LeavingPersonExe
add_executable(Cursovik_basicProgExe ${SOURCES_EXE} ${HEADERS_EXE})
#Линковка программы с библиотекой
target_link_libraries(Cursovik_basicProgExe Cursovik_basicProgLib)