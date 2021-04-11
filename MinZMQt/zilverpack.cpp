#include "zilverpack.h"
#include "spelers.h"
#include "coaches.h"
#include <cstdlib>
#include <iostream>
#include <string>

zilverpack::zilverpack()
{

}

void zilverpack::samenstellen(){  // functie samenstellen gaat de twee functies: speler() en coach() uitvoeren
    speler();
    coach();

}
