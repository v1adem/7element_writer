#include <iostream>
#include <vector>
using namespace std;

class Symbol
{
public:
    Symbol(char symbol);
    ~Symbol() {};
    //Lines of future symbol
    string a, b, c, d, e, f, g;
private:
    //Types of possible lines
    string type1 = "      ";
    string type2 = "##### ";
    string type3 = "#   # ";
    string type4 = "#     ";
    string type5 = "    # ";
    string type6 = "   ## ";
    string type7 = "  # # ";
    string type8 = " #  # ";

    void createSymbol(char symbol) // Predeterminated that we have only (-,0,1,2,3,4,5,6,7,8,9)
    {
        switch (symbol)
        {
        case '1':
            a = type5;
            b = type6;
            c = type7;
            d = type8;
            e = type5;
            f = type5;
            g = type5;
            break;
        case '2':
            a = type2;
            b = type5;
            c = type5;
            d = type2;
            e = type4;
            f = type4;
            g = type2;
            break;
        case '3':
            a = type2;
            b = type5;
            c = type5;
            d = type2;
            e = type5;
            f = type5;
            g = type2;
            break;
        case '4':
            a = type3;
            b = type3;
            c = type3;
            d = type2;
            e = type5;
            f = type5;
            g = type5;
            break;
        case '5':
            a = type2;
            b = type4;
            c = type4;
            d = type2;
            e = type5;
            f = type5;
            g = type2;
            break;
        case '6':
            a = type2;
            b = type4;
            c = type4;
            d = type2;
            e = type3;
            f = type3;
            g = type2;
            break;
        case '7':
            a = type2;
            b = type5;
            c = type5;
            d = type5;
            e = type5;
            f = type5;
            g = type5;
            break;
        case '8':
            a = type2;
            b = type3;
            c = type3;
            d = type2;
            e = type3;
            f = type3;
            g = type2;
            break;
        case '9':
            a = type2;
            b = type3;
            c = type3;
            d = type2;
            e = type5;
            f = type5;
            g = type2;
            break;
        case '0':
            a = type2;
            b = type3;
            c = type3;
            d = type3;
            e = type3;
            f = type3;
            g = type2;
            break;
        case '-':
            a = type1;
            b = type1;
            c = type1;
            d = type2;
            e = type1;
            f = type1;
            g = type1;
            break;
        default:
            a = type1;
            b = type1;
            c = type1;
            d = type1;
            e = type1;
            f = type1;
            g = type1;
            break;
        }
    }
};

void sevenElementConstructor(vector<Symbol> Symbols)
{
    //Building of lines
    for (int i = 0; i < 7; i++)
    {
        int stringNumber = 0;
        switch (i)
        {
        case 0:
            for (int x = 0; x < Symbols.size(); x++)
            {
                cout << Symbols[stringNumber].a;
                stringNumber++;
            }
            cout << endl;
            break;
        case 1:
            for (int x = 0; x < Symbols.size(); x++)
            {
                cout << Symbols[stringNumber].b;
                stringNumber++;
            }
            cout << endl;
            break;
        case 2:
            for (int x = 0; x < Symbols.size(); x++)
            {
                cout << Symbols[stringNumber].c;
                stringNumber++;
            }
            cout << endl;
            break;
        case 3:
            for (int x = 0; x < Symbols.size(); x++)
            {
                cout << Symbols[stringNumber].d;
                stringNumber++;
            }
            cout << endl;
            break;
        case 4:
            for (int x = 0; x < Symbols.size(); x++)
            {
                cout << Symbols[stringNumber].e;
                stringNumber++;
            }
            cout << endl;
            break;
        case 5:
            for (int x = 0; x < Symbols.size(); x++)
            {
                cout << Symbols[stringNumber].f;
                stringNumber++;
            }
            cout << endl;
            break;
        case 6:
            for (int x = 0; x < Symbols.size(); x++)
            {
                cout << Symbols[stringNumber].g;
                stringNumber++;
            }
            cout << endl;
            break;
        }
    }
}