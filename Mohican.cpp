//#include "Mohican.h"
//
//Mohican::Mohican() {
//	count += 1;
//	this->id = count;
//
//	next = nullptr;
//	prev = last;
//	last = this;
//
//	list.push_back(this);
//}
//
//Mohican::~Mohican() {
//	prev = this;
//	last = nullptr;
//
//	//list.erase(this);
//}
//
//int Mohican::getId() {
//	return this->id;
//}
//
////const Mohican& Mohican::getLast() {
////	return *this;
////}
//
//void Mohican::getLast() {
//	std::cout << list.back();
//}
//
//int Mohican::count = 0;
//Mohican* Mohican::last = nullptr;
//
////std::ostream& operator<<(std::ostream& out, const Mohican& mohican) {
////	out << "Last Mohican is " << mohican.getId();
////	return out;
////}