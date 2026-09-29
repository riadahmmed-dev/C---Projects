#include <iostream>
using namespace std;

class Movie
{
public:
    string title;
    int year;
    float rating;

    void showMovie()
    {
        cout << "Title: " << title << endl;
        cout << "Year: " << year << endl;
        cout << "Rating: " << rating << endl;
    }
};

int main()
{
    Movie movies[4];

    // Store movie details
    movies[0].title = "Inception";
    movies[0].year = 2010;
    movies[0].rating = 8.8;

    movies[1].title = "Interstellar";
    movies[1].year = 2014;
    movies[1].rating = 8.7;

    movies[2].title = "The Dark Knight";
    movies[2].year = 2008;
    movies[2].rating = 9.0;

    movies[3].title = "Avatar";
    movies[3].year = 2009;
    movies[3].rating = 7.8;

    cout << "All Movies:" << endl;

    for (int g = 0; g < 4; g++)
    {
        cout << "\nMovie " << g + 1 << ":" << endl;
        movies[g].showMovie();
    }
    int highest = 0;

    for (int f = 1; f < 4; f++)
    {
        if (movies[f].rating > movies[highest].rating)
        {
            highest = f;
        }
    }

    // Display highest-rated movie
    cout << "\nHighest Rated Movie:" << endl;
    movies[highest].showMovie();

    return 0;
}