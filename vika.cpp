#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Contact {
    string name;
    string phone;
    string email;
};

vector<Contact> contacts;

void addContact() {
    Contact newContact;
    cout << "name tvoi ";
    cin >> newContact.name;
    cout << "nomer telefona ";
    cin >> newContact.phone;
    cout << "email  ";
    cin >> newContact.email;
    contacts.push_back(newContact);
    cout << "ya teba sapomnil " << endl;
}

void deleteContact() {
    string name;
    cout << "name dai dla bana";
    cin >> name;
    for (auto it = contacts.begin(); it != contacts.end(); ++it) {
        if (it->name == name) {
            contacts.erase(it);
            cout << "USER GET BAN EZ LOL " << endl;
            return;
        }
    }
    cout << "ne naiden " << endl;
}

// это часть ИльясА Абулхаиров  крч я сделал ввод и удаление