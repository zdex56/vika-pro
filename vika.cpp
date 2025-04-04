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



void editContact() {
    string name;
    cout << "Vvedite name dlia redaktirovania ";
    cin >> name;
    for (auto& contact : contacts) {
        if (contact.name == name) {
            cout << "vvedite new name: ";
            cin >> contact.name;
            cout << "Vvedite new namber: ";
            cin >> contact.phone;
            cout << "Vvedite new pochtu: ";
            cin >> contact.email;
            cout << "GOTOVO" << endl;
            return;
        }
    }
    cout << "nichego ne naydeno" << endl;
}




void Menu() {
    cout << "Menu:\n ";
    cout << "1. Dobavit kontakt, ";
    cout << "2. Delete kontakt, ";
    cout << "4. izmenit kontakt, ";
    cout << "5. Exit ";
    cout << "Vibrat deystvia: ";
}


int main() {
    int choice;
    do {
        Menu();
        cin >> choice;
        switch (choice) {
        case 1:
            addContact();
            break;
        case 2:
            deleteContact();
            break;

        case 3:
            editContact();
            break;

        case 4:
            cout << "Exit" << endl;
            break;
        default:
            cout << "ti chtoto putaesh" << endl;
        }
    } while (choice != 4);
}

//Это часть Матовой Вики