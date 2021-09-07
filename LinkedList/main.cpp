#include <cstdlib>
#include "List.h"

int main() {

	List list = List();
	list.AddNode(3);
	list.AddNode(5);
	list.AddNode(7);
	list.PrintList();

	return 0;
}
