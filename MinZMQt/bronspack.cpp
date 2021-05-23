#include "bronspack.h"
#include "spelers.h"
#include <cstdlib>
#include <iostream>
#include <string>

bronspack::bronspack()
{
    string bronsSpeler[5][4] =
        {
                {"-Cristiano Ronaldo","94","Portugal","33"},
                {"-Lionel Messi","92","Argentinie","31"},
                {"-Neymar da Silva","88","Brazilie","26"},
                {"-Luis Suarez","90","Uruguay","31"},
                {"-Manuel Neuer","89","Duitsland","32"}
        };


    unsigned char rand1 = rand()%5;



            setNaamSpeler(bronsSpeler[rand1][0]);
            setRatingSpeler(bronsSpeler[rand1][1]);
            setLandSpeler(bronsSpeler[rand1][2]);
            setLeeftijdSpeler(bronsSpeler[rand1][3]);

}




void bronspack::samenstellen(){
    speler();
}

