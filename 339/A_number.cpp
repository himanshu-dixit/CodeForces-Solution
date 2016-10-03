#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
int n,i;
string s1;
cin>>s1;
n = (s1.size()/2)+1;
int array[n];
int p,q;
char sep = '+';
i=0;
for(size_t p=0, q=0; p!=s1.npos; p=q)
    array[i++]= stoi(s1.substr(p+(p!=0), (q=s1.find(sep, p+1))-p-(p!=0)));
sort(array,array+n);
i=0;
  while(i<n){
    if(i==0){
    }
    else{
    cout<<"+";
    }
  cout<<array[i++];
  }
return 0;
}
