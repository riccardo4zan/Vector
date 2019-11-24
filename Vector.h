namespace Vector{

  class MyVector{
  private:
    int s;
    double* e;
    bool isOutOfBound(int i);

  public:
    class OutOfBound{};

    MyVector();
    MyVector(int size);

    int size() const {return s;}

    double get(int i);
    double safe_get(int i);

    void set(int i, double n);
    void safe_set(int i, double n);
    
    double& operator[](int index);

    ~MyVector(){ delete[] e;}
  };

}
