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
    cout << "��� �� ����� ";
    cin >> newContact.name;
    cout << "������� ���������  ";
    cin >> newContact.phone;
    cout << "����� ���  ";
    cin >> newContact.email;
    contacts.push_back(newContact);
    cout << "� ���� �������� " << endl;
}

void deleteContact() {
    string name;
    cout << "������ ��� ��� ���� ";
    cin >> name;
    for (auto it = contacts.begin(); it != contacts.end(); ++it) {
        if (it->name == name) {
            contacts.erase(it);
            cout << "�������" << endl;
            return;
        }
    }
    cout << "������� �� ������" << endl;
}

// ��� ����� ������ ����������  ��� � ������ ���� � ��������