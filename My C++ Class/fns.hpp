#include <string>

class Song
{
std::string title;
std::string artist;
double duration;

public:
Song(std::string new_title, std::string new_artist, double new_duration);
std::string get_title();
std::string get_artist();
double get_duration();


};