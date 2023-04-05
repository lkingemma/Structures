// Emma King
// This program stores and processes data related to movies using structures and
// functions.
#include <iostream>
#include <string>
using namespace std;

// Define the Movie structure
struct Movie {
  string title;
  string whereToWatch;
  double cost;
};

// Function prototypes
void getMovieInfo(Movie &movie);
void displayFreeMovies(const Movie &movie1, const Movie &movie2,
                       const Movie &movie3);

int main() {
  // Create 3 Movie variables
  Movie movie1, movie2, movie3;

  // Get the movie information from the user
  getMovieInfo(movie1);
  getMovieInfo(movie2);
  getMovieInfo(movie3);

  // Display the free movies
  displayFreeMovies(movie1, movie2, movie3);

  return 0;
}

// Function to prompt the user to enter the information for one movie
void getMovieInfo(Movie &movie) {
  // Prompt for title
  cout << "Enter the title of the movie: ";
  getline(cin, movie.title);

  // Prompt for where to watch
  cout << "Enter where to watch the movie: ";
  getline(cin, movie.whereToWatch);

  // Prompt for cost
  cout << "Enter the cost of the movie (enter 0.0 for free): ";
  cin >> movie.cost;

  // Consume the newline character left by cin
  cin.ignore();

  // Add a space after the movie cost
  cout << endl;
}

// Function to display the free movies
void displayFreeMovies(const Movie &movie1, const Movie &movie2,
                       const Movie &movie3) 
{
  bool freeMovieExists = false;
  cout << "Listing of Free Movies:" << endl << endl;
  if (movie1.cost == 0.0)
  {
    cout << movie1.title << " playing on " << movie1.whereToWatch << endl;
    freeMovieExists = true;
  }

  if (movie2.cost == 0.0)
  {
    cout << movie2.title << " playing on " << movie2.whereToWatch << endl;
    freeMovieExists = true;
  }
  if (movie3.cost == 0.0)
  {
    cout << movie3.title << " playing on " << movie3.whereToWatch << endl;
    freeMovieExists = true;
  }
  if (!freeMovieExists)
  {
    cout << "There are no free movies at this time." << endl;
  }
}