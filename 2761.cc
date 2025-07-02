#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int a;
    float b;
    char c;
    string d;

    std::cin >> a >> b >> c; 
    cin.ignore();
    getline(cin,d); 
    
    cout << fixed << setprecision(6);
    std::cout << a << b << c << d << "\n"; 
    std::cout << a << "\t" << b << "\t" << c << "\t" << d << "\n"; 
    std::cout << setw(10) << a << setw(10) << b << setw(10) << c << setw (10) << d << "\n";
    
    return 0;
}
