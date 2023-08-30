#include <bits/stdc++.h>
using namespace std;
int arr (int a){
int g,o,v;
g=a/100;
o=a/10%10;
v=a%10;
return g+o+v;
}
int main(){
int a;
cin>>a;
cout<<arr(a);
}
