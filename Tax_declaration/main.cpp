#include <iostream>
#include <string>
#include "TaxDeclarationSystem.hpp"

using namespace std;

int main() {
    TaxDeclarationSystem system;

    int numDeclarations;
    cout << "Enter the number of tax declarations you want to submit: ";
    cin >> numDeclarations;

    for (int i = 0; i < numDeclarations; ++i) {
        string name, id;
        double income, expenses;

        cout << "Enter taxpayer name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter taxpayer ID: ";
        getline(cin, id);

        cout << "Enter income: ";
        cin >> income;

        cout << "Enter expenses: ";
        cin >> expenses;

        TaxDeclaration declaration(name, id, income, expenses);
        system.submitDeclaration(declaration);
    }

    system.viewDeclarations();

    system.generateReport();

    return 0;
}
