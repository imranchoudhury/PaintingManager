#include "Painting.h"
#include <iostream>
using namespace std;

int main()
{
    std::cout << "Hello, world!\n";

    Painting* pm=new Painting();

    pm->ArtistName("Imran");
    std::cout<<pm->ArtistName();

}
