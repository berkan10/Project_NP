#ifndef ZILVERPACK_H
#define ZILVERPACK_H
#include "zilvereigenschappen.h"
#include "pakket.h"
#include <string>


class zilverpack: public pakket, public zilvereigenschappen
{
public:
    zilverpack();
    void samenstellen();
};

#endif // ZILVERPACK_H
