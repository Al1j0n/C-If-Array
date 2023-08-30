#include <bits/stdc++.h>
using namespace std;
float arr(float a,float b){

float a1,b1,c;
a1=a*a;
b1=b*b;
return sqrt((a1+b1));
}
int main(){
int a,b;
cin>>a>>b;
cout<<arr(a,b);
}
