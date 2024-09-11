#include "TaxDeclaration.hpp"
using namespace std;

TaxDeclaration::TaxDeclaration(const string& name, const string& id, double inc, double exp)
    : taxpayerName(name), taxpayerID(id), income(inc), expenses(exp) {}

string TaxDeclaration::getTaxpayerName() const {
    return taxpayerName;
}

string TaxDeclaration::getTaxpayerID() const {
    return taxpayerID;
}

double TaxDeclaration::getIncome() const {
    return income;
}

double TaxDeclaration::getExpenses() const {
    return expenses;
}

double TaxDeclaration::getTaxAmount() const {
    return (income - expenses) * 0.2;
}
