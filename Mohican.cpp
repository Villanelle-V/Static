#include "Mohican.h"

Mohican::Mohican() {
	count += 1;
	this->id = count;

	list.push_back(this);
	last = list.back();
}

Mohican::~Mohican() {
	list.pop_back();
	last = list.back();
}

int Mohican::getId() {
	return this->id;
}

Mohican& Mohican::getLast() {
	return *last;
}

int Mohican::count = 0;
Mohican* Mohican::last = nullptr;
std::list<Mohican*>Mohican::list = std::list<Mohican*>();
