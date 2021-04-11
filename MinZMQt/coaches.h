#ifndef COACHES_H
#define COACHES_H
#include <string>

using namespace std;



class coaches
{
public:
    coaches();
    virtual void coach()=0;

    void setNaamCoach(string naam);
    void setRatingCoach(string rating);
    void setLandCoach(string land);
    void setLeeftijdCoach(string leeftijd);

    string getNaamCoach();
    string getRatingCoach();
    string getLandCoach();
    string getLeeftijdCoach();

private:
    string naamCoach;
    string ratingCoach;
    string landCoach;
    string leeftijdCoach;

};

#endif // COACHES_H
