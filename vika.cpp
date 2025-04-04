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
    cout << "как тя звать ";
    cin >> newContact.name;
    cout << "циферки накдиктуй  ";
    cin >> newContact.phone;
    cout << "эмаил дай  ";
    cin >> newContact.email;
    contacts.push_back(newContact);
    cout << "я тебя запомнил " << endl;
}

void deleteContact() {
    string name;
    cout << "ведите имя для БАНА ";
    cin >> name;
    for (auto it = contacts.begin(); it != contacts.end(); ++it) {
        if (it->name == name) {
            contacts.erase(it);
            cout << "ЗАБАНЕН" << endl;
            return;
        }
    }
    cout << "контакт не найден" << endl;
}

// это часть ИльясА Абулхаиров  крч я сделал ввод и удаление