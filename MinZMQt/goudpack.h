#ifndef GOUDPACK_H
#define GOUDPACK_H
#include "goudeigenschappen.h"
#include "pakket.h"
#include <string>


class goudpack: public pakket, public goudeigenschappen
{
public:
    goudpack();
    void samenstellen();
};

#endif // GOUDPACK_H
