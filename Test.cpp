#include <iostream>
#include "Vector.h"

using namespace Vector;

int main(){

  int tmp = 10;

  MyVector v = MyVector(tmp);
  for(int i=0;i<v.size();i++){
    v.set(i,i);
  }

  for(int i=0;i<v.size();i++){
    std::cout << v.get(i) << " ";
  }
  v.set(10,10);

  int i=0;
  while(i>=0){
    std::cout << v.get(i++) << " ";
  }

  v.safe_set(10,10);
  v.safe_get(10);

  return 0;
}
