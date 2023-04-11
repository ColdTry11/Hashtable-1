#include "Employee.h"
#include <iostream>

using namespace std;

Employee::Employee(string n, int i, int a, string j, int y) {
	name = n;
	id = i;
	age = a;
	job = j;
	year = y;
}

int Employee::getID() {
	return id;
}

//Print everything
void Employee::printState() {
	cout << "FOUND: ID: " << id <<
		", Name: " << name <<
		", Age: " << age <<
		", Job: " << job <<
		", Hired: " << year << endl;
}

string Employee::saveFile() {
	return name
		+ " | " + to_string(id)
		+ " | " + to_string(age)
		+ " | " + job +
		+" | " + to_string(year) + "\n";
}

bool Employee::operator>(const Employee& other) {
	return id > other.id;
}

bool Employee::operator<(const Employee& other) {
	return id < other.id;
}

bool Employee::operator>=(const Employee& other) {
	return id >= other.id;
}
bool Employee::operator<=(const Employee& other) {
	return id <= other.id;
}
bool Employee::operator==(const Employee& other) {
	return id == other.id;
}
bool Employee::operator!=(const Employee& other) {
	return id != other.id;
}