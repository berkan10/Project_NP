#ifndef STADIUMS_H
#define STADIUMS_H
#include <string>

using namespace std;

class stadiums
{
public:
    stadiums();
    virtual void stadium()=0;

    void setNaamStadium(string naam);
    void setCapaciteitStadium(string capaciteit);
    void setLandStadium(string land);
    void setOpeningStadium(string Opening);

    string getNaamStadium();
    string getCapaciteitStadium();
    string getLandStadium();
    string getOpeningStadium();

private:
    string naamStadium;
    string capaciteitStadium;
    string landStadium;
    string openingStadium;


};

#endif // STADIUMS_H
