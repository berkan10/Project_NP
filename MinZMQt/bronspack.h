#ifndef BRONSPACK_H
#define BRONSPACK_H
#include "bronseigenschappen.h"
#include "pakket.h"
#include <string>


class bronspack: public pakket, public bronseigenschappen
{
public:
    bronspack();
    void samenstellen();


    string getPlayer();




};

#endif // BRONSPACK_H
