#include <iostream>

using namespace std;
int main(){
  int count,key=0;
  cin>>count;
  char *array = (char *)malloc(sizeof(char)*count);
  int i=0,temp,m;
  while(i<count){
    cin>>array[i];
    i++;
  }
 i=0;
  while(i<count){
  m=0;
    if(i==0){

    }
    else{
      //function on all elements other than 0
      if(array[i+1]==array[i]&&array[i+1]!=array[i+2]&&i<count){

        temp = array[i+2];
        array[i+2]=array[i+2];
        array[i+1]=temp;
        key++;
      }
      else if(array[i]==array[i-1]&&array[i]==array[i+1]){
        if(array[i]=='b'){
          array[i]=='r';
        }
        else{
          array[i]=='b';
        }
        key++;
      }
    }
 while(m<count){
    cout<<array[m];
    m++;
  }
  cout<<i<<"\n";
i++;
  }
  cout<<key;
  return 0;
}
