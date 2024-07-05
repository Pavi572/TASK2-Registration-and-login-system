#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void registerUser(const string& username, const string& password) {
    ofstream database("database.txt", ios::app); // Open file for appending

    if (database.is_open()) {
        database << username << ":" << password << endl;
        database.close();
        cout << "Registration successful!" << endl;
    } else {
        cout << "Unable to open database file." << endl;
    }
}

int main() {
    string username, password;

    cout << "=== User Registration ===" << endl;
    cout << "Enter username: ";
    getline(cin, username);
    cout << "Enter password: ";
    getline(cin, password);
    registerUser(username, password);
	return 0;
}
