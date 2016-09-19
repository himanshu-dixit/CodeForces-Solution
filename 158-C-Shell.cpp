#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int GetNthIndex(string s, char t, int n)
{
    int count = 0;
    int lent = s.length();
    for (int i = lent; i > 0; i--)
    {
        if (s[i] == t)
        {
            count++;
            if (count == n)
            {
                return i;
            }
        }
    }
    return -1;
}

int start_index(string s, char t, int n)
{
    int count = 0;
    int lent = s.length();
    for (int i = 0; i <lent; i++)
    {
        if (s[i] == t)
        {
            count++;
            if (count == n)
            {
                return i;
            }
        }
    }
    return -1;
}


int main(){

  string command,pos = "/",last,temp,intial;
  int next_slash,length,last_second,last_cond;

  int no=0;
cin>>no;

  while(no!=0){

    cin>>intial;
    if(intial=="cd"){
    cin>>command;
    }

    if(intial=="pwd"){
      cout<<pos<<endl;
    }
    else{
        length = command.length();
        if(start_index(command,'/',1)==0){
        pos="/";
        length = command.length();
        command = command.substr(1,length-1);
        }
      char back =*command.rbegin();
      if(back=='/'){
        command = command.substr(0,length-1);
      }
        if(start_index(command,'/',1)==0){
        length = command.length();
        command = command.substr(1,length-1);
        }
        while(start_index(command,'/',1)!=-1){

        next_slash = start_index(command,'/',1);

        temp = command.substr(0,next_slash);
        length = command.length();

        if(temp==".."){
        last_second=GetNthIndex(pos,'/',2);
        pos = pos.substr(0,last_second+1);
        }
        else{
         pos=pos+temp+'/';
        }
        command = command.substr(next_slash+1,length-next_slash);
        }
        if(command==".."){
         last_second=GetNthIndex(pos,'/',2);
        pos = pos.substr(0,last_second+1);

        }
        else{
        if(command!=""){
        pos=pos+command+'/';
        }
        }
      if(start_index(pos,'/',1)!=0){
       pos="/"+pos;
        }
    }
    no--;
  }
  return 0;

}
