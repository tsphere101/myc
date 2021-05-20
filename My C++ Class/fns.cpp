#include "fns.hpp"

//define constructor
Song::Song(std::string new_title, std::string new_artist, double new_duration)
{
title = new_title;
artist = new_artist;
duration = new_duration;
}

std::string Song::get_title()
{
return title;
}

std::string Song::get_artist()
{
return artist;
}

double Song::get_duration()
{
return duration;
}