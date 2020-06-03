#include <iostream>
#include<sstream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

void swap(string s){
    int a=0,b=0;
    stringstream g(s);
    g >> a;
    reverse(s.begin(),s.end());
    stringstream g1(s);
    g1 >> b;
    if(a>=b)
        cout<<"Given number is the largest of two swaps";
    else
        cout<<"Given number is not the largest of two swaps";
}

int main()
{
    string a;
    cout<<"Enter a number : ";
    getline(cin,a);
    swap(a);
    return 0;
}
