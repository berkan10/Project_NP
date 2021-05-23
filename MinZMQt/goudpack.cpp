#include "goudpack.h"
#include "spelers.h"
#include "coaches.h"
#include "stadiums.h"
#include <cstdlib>
#include <iostream>
#include <string>

goudpack::goudpack()
{



  string goldSpelers[5][4] =
      {
              {"-Cristiano Ronaldo","94","Portugal","33"},
              {"-Lionel Messi","92","Argentinie","31"},
              {"-Neymar da Silva","88","Brazilie","26"},
              {"-Luis Suarez","90","Uruguay","31"},
              {"-Manuel Neuer","89","Duitsland","32"}
      };
  string goldStadium[5][4] =
  {
          {"-Estadio do Maracana","78.838","Brazilië","1950"},
          {"-Giuseppe Meazza","81.277","Italie","1926"},
          {"-Anfield","45.276","Engeland","1884"},
          {"-Old Trafford","75.731","Engeland","1910"},
          {"-Camp Nou","99.354","Spanje","1957"}
  };
  string goldCoach[5][4] =
               {
                      {"-Jose Mourinho","82","Portugal","55"},
                      {"-Pep Guardiola","89","Spanje","47"},
                      {"-Jürgen Klopp","87","Duitsland","51"},
                      {"-Zinedine Zidane","90","Frankrijk","46"},
                      {"-Carlo Ancelotti","86","Italie","59"}
                };

        unsigned char rand1 = rand()%5;



        setNaamSpeler(goldSpelers[rand1][0]);
        setRatingSpeler(goldSpelers[rand1][1]);
        setLandSpeler(goldSpelers[rand1][2]);
        setLeeftijdSpeler(goldSpelers[rand1][3]);


        setNaamStadium(goldStadium[rand1][0]);
        setCapaciteitStadium(goldStadium[rand1][1]);
        setLandStadium(goldStadium[rand1][2]);
        setOpeningStadium(goldStadium[rand1][3]);



        setNaamCoach(goldCoach[rand1][0]);
        setRatingCoach(goldCoach[rand1][1]);
        setLandCoach(goldCoach[rand1][2]);
        setLeeftijdCoach(goldCoach[rand1][3]);



}

void goudpack::samenstellen(){
    speler();
    coach();
    stadium();

}


