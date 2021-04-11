#include "stadiums.h"
#include <iostream>
using namespace std;
#include <string>

stadiums::stadiums()
{

}
void stadiums::setNaamStadium(string naam)
{
    naamStadium = naam;
}
void stadiums::setCapaciteitStadium(string capaciteit){
    capaciteitStadium = capaciteit;
}
void stadiums::setLandStadium(string land){
    landStadium = land;
}
void stadiums::setOpeningStadium(string opening){
    openingStadium = opening;
}

string stadiums::getNaamStadium(){
    return naamStadium;
}
string stadiums::getCapaciteitStadium(){
    return capaciteitStadium;
}
string stadiums::getLandStadium(){
    return landStadium;
}
string stadiums::getOpeningStadium(){
    return openingStadium;
}
