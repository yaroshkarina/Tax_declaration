#ifndef TAX_DECLARATION_SYSTEM_HPP
#define TAX_DECLARATION_SYSTEM_HPP

#include <vector>
#include "TaxDeclaration.hpp"
using namespace std;

class TaxDeclarationSystem {
private:
    vector<TaxDeclaration> declarations;

public:
    void submitDeclaration(const TaxDeclaration& declaration);
    void viewDeclarations() const;
    void generateReport() const;
};

#endif
