#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int f;
    double n;
    string str;
    cin>>f;
    cin>>n;
    cin.ignore();
    getline(cin,str);
    int sum=i+f;
    cout<<sum<<"\n";
    printf("%.1f\n", double(d+n));
    cout<<s+str;


    return 0;