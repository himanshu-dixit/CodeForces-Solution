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

cout<<array<<endl;


i++;
  }
  cout<<key;
  return 0;
}
