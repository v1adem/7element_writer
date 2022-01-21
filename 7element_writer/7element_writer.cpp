#include "symbolLogic.h"
Symbol::Symbol(char symbol) 
{
    createSymbol(symbol);
}

int main()
{
    cout << "Please put your number - ";
    string userNumber;
    cin >> userNumber;
    //Create all of the symbols
    vector<Symbol> Symbols;
    for (int i = 0; i < userNumber.length(); i++)
    {
        Symbol nextSymbol(userNumber[i]);
        Symbols.push_back(nextSymbol);
    }
    sevenElementConstructor(Symbols);
    system("PAUSE");
    return 0;
}