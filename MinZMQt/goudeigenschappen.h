#ifndef GOUDEIGENSCHAPPEN_H
#define GOUDEIGENSCHAPPEN_H
#include "spelers.h"
#include "coaches.h"
#include "stadiums.h"
#include <string>


class goudeigenschappen: public spelers, public coaches, public stadiums
{
public:
    goudeigenschappen();  //constructor
    ~goudeigenschappen(); //destructor

    void speler();
    void stadium();
    void coach();
};

#endif // GOUDEIGENSCHAPPEN_H
