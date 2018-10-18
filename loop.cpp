#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    int n1=1;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for(int i=0;i<10;i++)
    {
      cout << n << " x "<< n1 <<" = "<< n*n1 <<endl;
      n1++;
    } 
       return 0;
}
