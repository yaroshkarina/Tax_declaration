#include "TaxDeclarationSystem.hpp"
#include <iostream>
#include <fstream>
using namespace std;
void TaxDeclarationSystem::submitDeclaration(const TaxDeclaration& declaration) {
    declarations.push_back(declaration);
}

void TaxDeclarationSystem::viewDeclarations() const {
    cout << "Submitted Declarations:\n";
    for (const auto& decl : declarations) {
        cout << "Name: " << decl.getTaxpayerName()
                  << ", ID: " << decl.getTaxpayerID()
                  << ", Income: " << decl.getIncome()
                  << ", Expenses: " << decl.getExpenses()
                  << ", Tax Amount: " << decl.getTaxAmount() << "\n";
    }
}

void TaxDeclarationSystem::generateReport() const {
    ofstream reportFile("report.txt");
    if (!reportFile.is_open()) {
        cerr << "Error: Could not open file for writing.\n";
        return;
    }

    reportFile << "Tax Declarations Report:\n";
    for (const auto& decl : declarations) {
        reportFile << "Name: " << decl.getTaxpayerName()
                   << ", ID: " << decl.getTaxpayerID()
                   << ", Income: " << decl.getIncome()
                   << ", Expenses: " << decl.getExpenses()
                   << ", Tax Amount: " << decl.getTaxAmount() << "\n";
    }
    reportFile.close();
    cout << "Report generated in report.txt\n";
}
