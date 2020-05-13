#include <iostream>
#include "stuff.h"
using namespace std;


int main(int argc, char const *argv[])
{
   Bunnies bunny;
   bunny.size = 2;
   bunny.kids = 200;
   cout << "Size: " << bunny.size << "\nKids: "
        << bunny.kids << endl;
   return 0;
}  