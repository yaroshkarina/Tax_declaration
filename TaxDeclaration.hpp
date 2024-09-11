#ifndef TAX_DECLARATION_HPP
#define TAX_DECLARATION_HPP

#include <string>
using namespace std;

class TaxDeclaration {
private:
    string taxpayerName;
    string taxpayerID;
    double income;
    double expenses;

public:
    TaxDeclaration(const string& name, const string& id, double inc, double exp);
    string getTaxpayerName() const;
    string getTaxpayerID() const;
    double getIncome() const;
    double getExpenses() const;
    double getTaxAmount() const;
};

#endif
