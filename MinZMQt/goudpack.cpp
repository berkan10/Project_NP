#include "goudpack.h"
#include "spelers.h"
#include "coaches.h"
#include "stadiums.h"
#include <cstdlib>
#include <iostream>
#include <string>

goudpack::goudpack()
{
  cout << "Hello i am the constructor";
}
void goudpack::samenstellen(){
    speler();
    coach();
    stadium();

}

