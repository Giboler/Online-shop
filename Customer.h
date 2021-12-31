#pragma once
#include <iostream>
using namespace std;
#include <fstream>
#include <string>
class Customer
{
public:
	string line;
	string userName;
	string name;
	string address;
	string phone;
	string email;
	string confirmPass;
	int customerID;
	string password;
	string tempUser;
	string tempPass;
	void setData();
	void setID();
	void pack();
	void unpack();
	void registerCustomer();
	bool searchUser(string n);
	bool searchPass();
	bool login();
	bool custStart();
};

