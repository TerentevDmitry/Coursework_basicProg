#pragma once
#include <iostream>
#include "DynamicLibraryTransport/Transport.h"
#include "DynamicLibraryTransport/GroundTransport.h"
#include "DynamicLibraryTransport/AirTransport.h"


//void GroundTransportRegistration(float raceDistance, TransportOfRace::Transport* MassiveOfRacers, const int ik);

bool checkTransportRegistration(int tipeOfTransport, TransportOfRace::Transport* MassiveOfRacers, const int ik);

//int PrintGroundTransportRegistration(int tipeOfTransport, int numberOfRegVehicles, bool *endOfRegistration, TransportOfRace::Transport* MassiveOfRacers, const int ik);

void TransportRegistration(int typeOfRace, float raceDistance, TransportOfRace::Transport* MassiveOfRacers, const int ik);

int PrintTransportRegistration(int typeOfRace, int tipeOfTransport, int numberOfRegVehicles, bool* endOfRegistration, TransportOfRace::Transport* MassiveOfRacers, const int ik);

bool endOfGame();