#pragma once
#include <iostream>
#include <string>
using namespace std;

class Journal {
	string name;
	string description;
	string tell;
	string email;
	int year;
public:
	Journal();
	Journal(string n, string d, string t, string e, int y);
	void Input();
	void Print();

	//1 base lvl
	//2 base lvl static metods
	void SetName(string n);
	void SetDescription(string d);
	void SetTell(string t);
	void SetEmail(string e);
	void SetYear(int y);
	
	string GetName();
	string GetDescription();
	string GetTell();
	string GetEmail();
	int GetYear();
	
	static int count;
	static void gettCount();

};

Journal::Journal() {
	year = 0;
}

Journal::Journal(string n, string d, string t, string e, int y) {
	name = n;
	description = d;
	tell = t;
	email = e;
	year = y;
	count++;
}

void Journal::Input() {
	cout << "Input name: ";
	getline(cin, name);
	cout << "Input description: ";
	getline(cin, description);
	cout << "Input tell: ";
	getline(cin, tell);
	cout << "Input email: ";
	getline(cin, email);
	cout << "Input year: ";
	cin >> year;
	count++;
}

void Journal::Print() {
	cout << "Name: " << name << endl;
	cout << "Description: " << description << endl;
	cout << "Tell: " << tell << endl;
	cout << "Email: " << email << endl;
	cout << "Year: " << year << endl;
}

void Journal::SetName(string n) {
	name = n;
}
void Journal::SetDescription(string d) {
	description = d;
}
void Journal::SetTell(string t) {
	tell = t;
}
void Journal::SetEmail(string e) {
	email = e;
}
void Journal::SetYear(int y) {
	year = y;
}

string Journal::GetName() {
	return name;
}

string Journal::GetDescription() {
	return description;
}

string Journal::GetTell() {
	return tell;
}

string Journal::GetEmail() {
	return email;
}

int Journal::GetYear() {
	return year;
}

int Journal::count = 0;
void Journal::gettCount() {
	cout << "Static: " << count << endl;
}
