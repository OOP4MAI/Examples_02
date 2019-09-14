#include <cstdlib>

struct MyClass {
    static int static_value;
    int value{};
    mutable int mutable_value{};

    const int foo(const int a) const{
        static_value = a;
        //value = a;
        mutable_value = a;
        return a;
    }
};

int MyClass::static_value{};

int main(int argc, char** argv) {
    int a = 100;
    int b = 222;

    int *const P2 = &a; // constant pointer
    //*P2 = 987; //changing value
    //P2 = &b; //changing pointer - error
    
    const int *P1 = &a; //pointer to constant
    //*P1 = 110; //changing value - not allowed
    //P1 = &b; //changing pointer - allowed
    const int *const P3 = &a; //constant pointer to constant
    //*P3 = 155; //changing value - not allowed
    //P3 = &b; //changing pointer - not allowed

    const int c= MyClass().foo(1);

    return 0;
}