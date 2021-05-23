#include "goudeigenschappen.h"
#include "spelers.h"
#include "coaches.h"
#include "stadiums.h"
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <string>

using namespace std;



void goudeigenschappen::speler(){ //invullen van de speler() functie met de goldspelers[][] variabelen
    string goldSpelers[5][4] =
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

        cout << "Naam" << "         " << " Niveau" << "         " << "Nationaliteit" << "           " << "Leeftijd" << endl;

        setNaamSpeler(goldSpelers[rand1][0]);
        setRatingSpeler(goldSpelers[rand1][1]);
            setLandSpeler(goldSpelers[rand1][2]);
            setLeeftijdSpeler(goldSpelers[rand1][3]);

            cout << getNaamspeler() << "" << getRatingSpeler() << "" << getLandSpeler() << "" << getLeeftijdSpeler() << endl;

             setNaamSpeler(goldSpelers[rand2][0]);
             setRatingSpeler(goldSpelers[rand2][1]);
             setLandSpeler(goldSpelers[rand2][2]);
             setLeeftijdSpeler(goldSpelers[rand2][3]);

             cout << getNaamspeler() << "" << getRatingSpeler() << "" << getLandSpeler() << "" << getLeeftijdSpeler() << endl;


              setNaamSpeler(goldSpelers[rand3][0]);
              setRatingSpeler(goldSpelers[rand3][1]);
              setLandSpeler(goldSpelers[rand3][2]);
              setLeeftijdSpeler(goldSpelers[rand3][3]);

              cout << getNaamspeler() << "" << getRatingSpeler() << "" << getLandSpeler() << "" << getLeeftijdSpeler() << endl;


}
void goudeigenschappen::stadium(){ //invullen van de stadium() functie met de goldstadium variabelen
        string goldStadium[5][4] =
        {
                {"-Estadio do Maracana","78.838","Brazilië","1950"},
                {"-Giuseppe Meazza","81.277","Italie","1926"},
                {"-Anfield","45.276","Engeland","1884"},
                {"-Old Trafford","75.731","Engeland","1910"},
                {"-Camp Nou","99.354","Spanje","1957"}
        };

    unsigned char rand1 = rand()%5;
    unsigned char rand2 = rand()%5;
    unsigned char rand3 = rand()%5;


            setNaamStadium(goldStadium[rand1][0]);
            setCapaciteitStadium(goldStadium[rand1][1]);
            setLandStadium(goldStadium[rand1][2]);
            setOpeningStadium(goldStadium[rand1][3]);

    cout << getNaamStadium() << " " << getCapaciteitStadium() << " " << getLandStadium() << " " << getOpeningStadium() << endl;

            setNaamStadium(goldStadium[rand2][0]);
            setCapaciteitStadium(goldStadium[rand2][1]);
            setLandStadium(goldStadium[rand2][2]);
            setOpeningStadium(goldStadium[rand2][3]);

    cout << getNaamStadium() << " " << getCapaciteitStadium() << " " << getLandStadium() << " " << getOpeningStadium() << endl;

            setNaamStadium(goldStadium[rand3][0]);
            setCapaciteitStadium(goldStadium[rand3][1]);
            setLandStadium(goldStadium[rand3][2]);
            setOpeningStadium(goldStadium[rand3][3]);

    cout << getNaamStadium() << " " << getCapaciteitStadium() << " " << getLandStadium() << " " << getOpeningStadium() << endl;
}

void goudeigenschappen::coach(){ //invullen van de coach() functie met de goldcoach variabelen

    string goldCoach[5][4] =
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

    setNaamCoach(goldCoach[rand1][0]);
    setRatingCoach(goldCoach[rand1][1]);
    setLandCoach(goldCoach[rand1][2]);
    setLeeftijdCoach(goldCoach[rand1][3]);

    cout << getNaamCoach() << " " << getRatingCoach() << " " << getLandCoach() << " " << getLeeftijdCoach() << endl;

    setNaamCoach(goldCoach[rand2][0]);
    setRatingCoach(goldCoach[rand2][1]);
    setLandCoach(goldCoach[rand2][2]);
    setLeeftijdCoach(goldCoach[rand2][3]);

    cout << getNaamCoach() << " " << getRatingCoach() << " " << getLandCoach() << " " << getLeeftijdCoach() << endl;

    setNaamCoach(goldCoach[rand3][0]);
    setRatingCoach(goldCoach[rand3][1]);
    setLandCoach(goldCoach[rand3][2]);
    setLeeftijdCoach(goldCoach[rand3][3]);

    cout << getNaamCoach() << " " << getRatingCoach() << " " << getLandCoach() << " " << getLeeftijdCoach() << endl;
}
