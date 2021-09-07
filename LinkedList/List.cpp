#include <cstdlib>
#include <iostream>
#include "List.h"

List::List() {
	this->head = NULL;	
	this->curr = NULL;
	this->temp = NULL;
}

void List::AddNode(int addData) {
	nodePtr n = new node;
	n->next = NULL;
	n->data = addData;

	if (head != NULL) {
		this->curr = head;
		while (curr->next != NULL) {
			this->curr = curr->next;
		}
		this->curr->next = n;

	}
	else {
		// If we dont have anything in the list
		this->head = n;		
	}
}
void List::DeleteNode(int delData) {
	nodePtr delPtr = NULL;
	this->temp = head;
	this->curr = head; 
	while (curr != NULL && this->curr->data != delData) {
		this->temp = this->curr;
		this->curr = this->curr->next;
	}
	if (curr == NULL) {
		std::cout <<delData <<"was not in the list\n" ;	
	}
	else {
		delPtr = this->curr;
		this->curr = curr->next;
		this->temp = this->curr; // Patch the list
		delete delPtr;
		std::cout << "The value " << delData << " was deleted\n";
	}
}

void List::PrintList() {
	this->curr = this->head;
	while(this->curr != NULL)
	{
		std::cout << curr -> data << "\n";
		this->curr = this->curr->next;
	}
}



