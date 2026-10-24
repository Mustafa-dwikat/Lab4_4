#include <iostream>
using namespace std;
int main() {
    float a, b, c, d , sum ; // a : »”ÿ «·ﬂ”— «·√Ê· , b : „ﬁ«„ «·ﬂ”— «·√Ê· , c : »”ÿ «·ﬂ”— «·À«‰Ì , d : „ﬁ«„ «·ﬂ”— «·À«‰Ì 
    cout << "enter the numerator of first fraction ( «·»”ÿ «·√Ê·) : ";
    cin >> a;
    cout << "enter the denominator of first fraction : ";
    cin >> b;
    cout << "enter the numerator of second fraction : ";
    cin >> c;
    cout << "enter the denominator of second fraction : ";
    cin >> d;
    sum = (a * d + c * b) / (b * d);
    cout << a <<"   "<<c<<"\n";
    cout << "- + -  = " << sum << endl; 
    cout << b <<"   " <<d;

}
