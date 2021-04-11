#include "coaches.h"
#include <iostream>
#include <string>
using namespace std;

coaches::coaches()
{

}

void coaches::setNaamCoach(string naam){
    naamCoach = naam;
}
void coaches::setRatingCoach(string rating){
    ratingCoach = rating;
}
void coaches::setLandCoach(string land){
    landCoach = land;
}
void coaches::setLeeftijdCoach(string leeftijd){
    leeftijdCoach = leeftijd;
}

string coaches::getNaamCoach(){
    return naamCoach;
}
string coaches::getRatingCoach(){
    return ratingCoach;
}
string coaches::getLandCoach(){
    return landCoach;
}
string coaches::getLeeftijdCoach(){
    return leeftijdCoach;
}
