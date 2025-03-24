// from WindChill.h

// V line 4 below needed another "/" to convert line into a comment 
// WindChill.h

#ifndef WIND_CHILL_H
#define WIND_CHILL_H

#include <iostream>
#include <cmath>
#include <string>

using namespace std

void WriteHeader();
double AskForTemperature;
double AskForWindSpeed();
int ValidateTempAndWS(double temp, double speed);
double CalcWindChill(double T, double V);
int DetermineFrostbiteTimes(double T, double V);
void Goodbye();
bool DoAgain();

#endif
