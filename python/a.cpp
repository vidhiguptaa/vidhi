#include<bits/stdc++.h>
using namespace std;
int main()
    

{
    string l={'a','a','c','d'};
    
    int k;
    cin>> k;
    int c = 0;
    int sum = 0;
    for (int i=0;i<l.size();i++)
    {
        if (i=='a')
        {
            c++;
            sum++;
            cout<< c/sum;
        }
    }
    
}
