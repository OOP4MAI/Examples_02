#include <cstdlib>
#include <iostream>

#define UNUSED(value) (void)value

class Life
{
public:
    Life() { std::cout << "default constructor" << std::endl;}
    Life(const char* val) {
        std::cout << "constructor:" << val << std::endl;
        name=val; 
        }
    Life(const Life& other) { 
        std::cout << "copy constructor:" << other.name << std::endl;
        name=other.name; 
        }
    Life& operator=(const Life& other){
        std::cout << "copy:" << other.name << std::endl;
        name = other.name;
        return *this;
    }
    ~Life() {
        std::cout << "destructor" << std::endl;;
    }
private:
    std::string name;
};

void foo(Life &val){
    UNUSED(val);
}

Life foo2(){
    return Life("Fedor");
}

int main(int argc, char** argv) {
    
    Life a("Ivan");

    std::cout << "foo:";
    foo(a);

    std::cout << "foo2:";
    Life c = foo2();

    std::cout << "end:";

    UNUSED(argc);
    UNUSED(argv);

    return 0;
}