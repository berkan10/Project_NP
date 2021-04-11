#ifndef SPELERS_H
#define SPELERS_H
#include <string>

using namespace std;

class spelers
{
public:
    spelers();
    virtual void speler()=0;

    void setNaamSpeler(string naam);
    void setRatingSpeler(string rating);
    void setLandSpeler(string land);
    void setLeeftijdSpeler(string leeftijd);

    string getNaamspeler();
    string getRatingSpeler();
    string getLandSpeler();
    string getLeeftijdSpeler();

private:
    string naamSpeler;
    string ratingSpeler;
    string landSpeler;
    string leeftijdSpeler;



};

#endif // SPELERS_H
