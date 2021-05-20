#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "celab.h"
#include <cstdlib>
#include <ctime>

int add_user_if_not_exists(std::vector<User> &users, User user)
{
    for(int i = 0 ; i< users.size() ; i++)
    {
        if(users[i].first_name == user.first_name &&
            users[i].last_name == user.last_name)
        {
            return i;
        }
    }
    users.push_back(user);
    return users.size() - 1;
}

int main()
{
    User A,B;

    A.first_name = "Caleb";
    A.last_name = "Curry";
    
    B.first_name = "Bee";
    B.last_name = "Boston";
    

    std::vector<User> users_arr;

    users_arr.push_back(A);
    users_arr.push_back(B);

    User newUser;
    newUser.first_name = "CalebBB";
    newUser.last_name = "Curry";

    User newUser2;
    newUser2.first_name = "Topfee";
    newUser2.last_name = "Krissada";

    std::cout <<add_user_if_not_exists(users_arr , newUser);
    std::cout << users_arr.size();

    std::cout << std::endl;
    add_user_if_not_exists(users_arr,newUser2);
    std::cout << users_arr.size();   
    return 0;
}