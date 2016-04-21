#include <string>
using namespace std;

class Painting{

    //instance variables
   private:
    int ID_;

    string Title_;
    string ArtistName_;

    //getters methods
   public:
    int ID();
    string Title();
    string ArtistName();

    //setter methods

   public:
    void ID(int identity);
    void Title(string title);
    void ArtistName(string artistname);
};
