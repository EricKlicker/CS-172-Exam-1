//
//  Movie.hpp
//  CS 172 Exam 1
//
//  Created by Eric Klicker on 10/6/16.
//  Copyright © 2016 Eric Klicker. All rights reserved.
//

#ifndef Movie_hpp
#define Movie_hpp

#include <stdio.h>
#include <iostream>
using namespace std;


class Movie
{
private:
    string Title;
    string Genre;
    int ShowTime;
    
public:
    Movie();
    
    string getTitle();
    string getGenre();
    int getShowtime();
    
    
    
};



#endif /* Movie_hpp */
