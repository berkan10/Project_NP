#include "bronseigenschappen.h"
#include "spelers.h"
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <string>

bronseigenschappen::bronseigenschappen()
{

}
void bronseigenschappen::speler(){ //invullen van de speler() functie met de bronsspeler variabelen
    string bronsSpeler[5][4] =
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

            setNaamSpeler(bronsSpeler[rand1][0]);
            setRatingSpeler(bronsSpeler[rand1][1]);
            setLandSpeler(bronsSpeler[rand1][2]);
            setLeeftijdSpeler(bronsSpeler[rand1][3]);

            cout << getNaamspeler() << "" << getRatingSpeler() << "" << getLandSpeler() << "" << getLeeftijdSpeler() << endl;

             setNaamSpeler(bronsSpeler[rand2][0]);
             setRatingSpeler(bronsSpeler[rand2][1]);
             setLandSpeler(bronsSpeler[rand2][2]);
             setLeeftijdSpeler(bronsSpeler[rand2][3]);

            cout << getNaamspeler() << "" << getRatingSpeler() << "" << getLandSpeler() << "" << getLeeftijdSpeler() << endl;

              setNaamSpeler(bronsSpeler[rand3][0]);
              setRatingSpeler(bronsSpeler[rand3][1]);
              setLandSpeler(bronsSpeler[rand3][2]);
              setLeeftijdSpeler(bronsSpeler[rand3][3]);

            cout << getNaamspeler() << "" << getRatingSpeler() << "" << getLandSpeler() << "" << getLeeftijdSpeler() << endl;


}
