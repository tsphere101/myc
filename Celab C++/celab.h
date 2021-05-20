#include <iostream>
#include <string>
#include <fstream>
#include <vector>

class User
{
    std::string status = "Gold";

    public:
        std::string first_name;
        std::string last_name;
        std::string get_status();
};
