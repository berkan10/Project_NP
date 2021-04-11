#include "spelers.h"
#include <iostream>
#include <string>
using namespace std;


spelers::spelers()
{

}
void spelers::setNaamSpeler(string naam)
{
    naamSpeler = naam;
}
void spelers::setRatingSpeler(string rating){
    ratingSpeler = rating;
}
void spelers::setLandSpeler(string land){
    landSpeler = land;
}
void spelers::setLeeftijdSpeler(string leeftijd){
    leeftijdSpeler = leeftijd;
}

string spelers::getNaamspeler(){
    return this->naamSpeler;
}
string spelers::getRatingSpeler(){
    return ratingSpeler;

}
string spelers::getLandSpeler(){
    return landSpeler;
}
string spelers::getLeeftijdSpeler(){
    return leeftijdSpeler;
}
