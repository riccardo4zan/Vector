#include "Vector.h"

namespace Vector{

  MyVector::MyVector(int size) : s{size},e{new double[size]}{
    for(int i=0;i<size;i++) e[i] = 0;
  }

  MyVector::MyVector(){
    MyVector(0);
  }

  double MyVector::get(int i){
    return e[i];
  }

  void MyVector::set(int i, double n){
    e[i]=n;
  }

  double MyVector::safe_get(int i) {
      if(isOutOfBound(i)) throw OutOfBound();
      return e[i];
  }

  void MyVector::safe_set(int i, double n) {
      if(isOutOfBound(i)) throw OutOfBound();
      e[i] = n;
  }

  bool MyVector::isOutOfBound(int i) {
      return (i>=s || i<0);
  }

  double& MyVector::operator[](int i) {
      if(isOutOfBound(i)) throw OutOfBound();
      return e[i];
  }

}
