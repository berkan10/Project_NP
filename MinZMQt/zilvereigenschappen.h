#ifndef ZILVEREIGENSCHAPPEN_H
#define ZILVEREIGENSCHAPPEN_H
#include "spelers.h"
#include "coaches.h"
#include <string>


class zilvereigenschappen: public spelers, public coaches
{
public:
     zilvereigenschappen();
    ~zilvereigenschappen();

        void coach();
        void speler();
};

#endif // ZILVEREIGENSCHAPPEN_H
