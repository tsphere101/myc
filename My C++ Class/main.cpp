#include <iostream>
#include "fns.hpp"
int main()

{

Song melbourne("Melbourne", "Morvasu", 300);

std::cout << melbourne.get_title() << "\n"
	<< melbourne.get_artist() << "\n"
	<< melbourne.get_duration() << "\n";

return 0;
}
