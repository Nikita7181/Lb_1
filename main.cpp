#include <iostream>
#include <cmath>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
int main() {
    cout <<"Hello" << endl;
    cout << "Enter varibles" << endl;
    int b,t;
    bool n,l,m,k;
    int x;
    unsigned int a;
    unsigned short int c,d,e,f;
    cout << "x=";
    cin >> x;
    cout << "a=";
    cin >> a;
    cout << "n=";
    cin >> n;
    cout << "l=";
    cin >> l;
    cout << "m=";
    cin >> m;
    cout << "b=";
    cin >> b;
    cout << "c=";
    cin >> c;
    cout << "d=";
    cin >> d;
    cout << "f=";
    cin >> f;
    cout << "e=";
    cin >> e;
    t=(std::pow(2, b));
    
    cout << std::setprecision(3) << (2*std::pow(x, 6)-5*std::pow(x, 5)-1) << endl;
    cout << std::setprecision(3) << (abs(float(6-a))+4*std::sqrt(a)) << endl;
    cout << std::boolalpha  << (!(n&&l)||(m!=(!k))) << endl;
    cout << std::setprecision(3)<<std::pow(2, b) << endl;
    cout << std::setprecision(10)<<std::oct << t << endl;
    cout << std::setw(6) << std::showbase << std::setfill('0') << std::hex << ((f&c)^(d|(~e))) << std::internal << endl;
}