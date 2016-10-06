//
//  Theater.hpp
//  CS 172 Exam 1
//
//  Created by Eric Klicker on 10/6/16.
//  Copyright © 2016 Eric Klicker. All rights reserved.
//

#ifndef Theater_hpp
#define Theater_hpp

#include <stdio.h>
#include <iostream>
#include "Movie.hpp"
using namespace std;

class Theater
{
    
private:
    
    
    
public:
    Theater ();
    Theater(string Name, string Phone);                 //The name for this theater
    void AddMovie(Movie& Movie);                        //Add a movie at a specific time
    string GetMovieForHour(int Hour);                   //Return the movie shown at or after the given hour
                                                        // Return "" if none are upcoming
    int GetShowTimeForGenre(string Genre);              //When will the movie of the given genre be shown?
                                                        // Return -1 if none exist
    int GetPopcornPrice();                              //Make up a cost in dollars for popcorn
    int GetCokePrice();                                 //Make up a cost on Coke
    
    
    
};




#endif /* Theater_hpp */
