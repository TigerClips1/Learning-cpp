#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string color, pluralNoun, verb;
    
    cout << "Enter a Color: ";
    getline(cin, color);
    cout << "Enter a PluralNoun: ";
    getline(cin, pluralNoun);
    cout << "Enter a verb: ";
    getline(cin, verb);
    cout << "Roses are " << color << endl;
    cout << "Violets are " << pluralNoun << endl;
    cout << "I love " << verb << endl;
    
    
    return 0;
}