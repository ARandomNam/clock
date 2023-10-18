#include <iostream>

bool sec(int &s);
bool min(int &m);
bool hr(int &h);
int main();

int main(){
  int s{}; int m{}; int h{};
  int n{}; int t{};
  std::cin >> t;
  for(int i{}; i<t; i++){
    if(sec(s)){
      if(min(m)){
        if(hr(h)){
          if(n==0){
            n=1;
          }else{
            n=0;
          }
        }
      }
    }
  }
  if(h<10){
    std::cout<<"0";
  }
  std::cout<<h<<":";
  if(m<10){
    std::cout<<"0";
  }
  std::cout<<m<<":";
  if(s<10){
    std::cout<<"0";
  }
  std::cout<<s;
  if(n==0){
    std::cout<<"AM";
  }else{
    std::cout<<"PM";
  }
}

bool sec(int &s){
  s++;
  if(s==60){
    s=0;
    return true;
  }else{
    return false;
  }
}
bool min(int &m){
  m++;
  if(m==60){
    m=0;
    return true;
  }else{
    return false;
  }
}
bool hr(int &h){
  h++;
  if(h==13){
    h=1;
  }
  if(h==12){
    return true;
  }else{
    return false;
  }
}

