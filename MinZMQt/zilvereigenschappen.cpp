#include "zilvereigenschappen.h"
#include "spelers.h"
#include "coaches.h"
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <string>

zilvereigenschappen::zilvereigenschappen()
{
    cout << "I am the constructor, but shuuuuuu nobody knowss";
}

zilvereigenschappen::~zilvereigenschappen()
{
    cout << "I am the denstructor,  but shuuuuuu nobody knowss";
}
void zilvereigenschappen::speler(){  //invullen van de speler() functie met de ZilversSpeler[][] variabelen
    string zilverSpeler[5][4] =
        {
                {"-Cristiano Ronaldo","94","Portugal","33"},
                {"-Lionel Messi","92","Argentinie","31"},
                {"-Neymar da Silva","88","Brazilie","26"},
                {"-Luis Suarez","90","Uruguay","31"},
                {"-Manuel Neuer","89","Duitsland","32"}
        };


    unsigned char rand1 = rand()%5;
    unsigned char rand2 = rand()%5;
    unsigned char rand3 = rand()%5;

            cout << "Naam" << "          " << " Rating" << "            " << "Land" << "             " << "Leeftijd" << endl;

            setNaamSpeler(zilverSpeler[rand1][0]);
            setRatingSpeler(zilverSpeler[rand1][1]);
            setLandSpeler(zilverSpeler[rand1][2]);
            setLeeftijdSpeler(zilverSpeler[rand1][3]);

            cout << getNaamspeler() << "" << getRatingSpeler() << "" << getLandSpeler() << "" << getLeeftijdSpeler() << endl;

             setNaamSpeler(zilverSpeler[rand2][0]);
             setRatingSpeler(zilverSpeler[rand2][1]);
             setLandSpeler(zilverSpeler[rand2][2]);
             setLeeftijdSpeler(zilverSpeler[rand2][3]);

            cout << getNaamspeler() << "" << getRatingSpeler() << "" << getLandSpeler() << "" << getLeeftijdSpeler() << endl;

              setNaamSpeler(zilverSpeler[rand3][0]);
              setRatingSpeler(zilverSpeler[rand3][1]);
              setLandSpeler(zilverSpeler[rand3][2]);
              setLeeftijdSpeler(zilverSpeler[rand3][3]);

            cout << getNaamspeler() << "" << getRatingSpeler() << "" << getLandSpeler() << "" << getLeeftijdSpeler() << endl;

}
void zilvereigenschappen::coach(){ //invullen van de coach() functie met de Zilvercoach variabelen

    string zilvercoach[5][4] =
                 {
                        {"-Jose Mourinho","82","Portugal","55"},
                        {"-Pep Guardiola","89","Spanje","47"},
                        {"-Jürgen Klopp","87","Duitsland","51"},
                        {"-Zinedine Zidane","90","Frankrijk","46"},
                        {"-Carlo Ancelotti","86","Italie","59"}
                  };
    unsigned char rand1;
    unsigned char rand2;
    unsigned char rand3;
    rand1 = rand()%5;
    rand2 = rand()%5;
    rand3 = rand()%5;

    cout << "Naam" << "         " << " Rating" << "         " << "Nationaliteit" << "           " << "Leeftijd" << endl;

    setNaamCoach(zilvercoach[rand1][0]);
    setRatingCoach(zilvercoach[rand1][1]);
    setLandCoach(zilvercoach[rand1][2]);
    setLeeftijdCoach(zilvercoach[rand1][3]);

    cout << getNaamCoach() << " " << getRatingCoach() << " " << getLandCoach() << " " << getLeeftijdCoach() << endl;

    setNaamCoach(zilvercoach[rand2][0]);
    setRatingCoach(zilvercoach[rand2][1]);
    setLandCoach(zilvercoach[rand2][2]);
    setLeeftijdCoach(zilvercoach[rand2][3]);

    cout << getNaamCoach() << " " << getRatingCoach() << " " << getLandCoach() << " " << getLeeftijdCoach() << endl;

    setNaamCoach(zilvercoach[rand3][0]);
    setRatingCoach(zilvercoach[rand3][1]);
    setLandCoach(zilvercoach[rand3][2]);
    setLeeftijdCoach(zilvercoach[rand3][3]);

    cout << getNaamCoach() << " " << getRatingCoach() << " " << getLandCoach() << " " << getLeeftijdCoach() << endl;
}
