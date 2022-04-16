#include <iostream>
using namespace std;

class Anime
{
private:
    double rating;

public:
    string name;
    string genre;
    Anime(string aName, string aGenre, double aRating)
    {
        name = aName;
        genre = aGenre;
        setRating(aRating); // using setter function to set values
    }
    // setter funtion to set the private values
    void setRating(double aRating)
    {
        rating = aRating;
    }
    // getter funtion to get the private values
    double getRating()
    {
        return rating;
    }
};

int main()
{
    Anime anime1("AOT", "ACTION", 9);

    cout << anime1.getRating();

    return 0;
}
