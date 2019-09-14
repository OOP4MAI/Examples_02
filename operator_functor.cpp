#include <cstdlib>
#include <iostream>

#define UNUSED(value) (void)value

class Functor{
    private:
        std::string _buffer{};
    public:
        Functor& operator()(){
            std::cout << _buffer << std::endl;
            return *this;
        }

        Functor& operator()(const char* msg){
            _buffer.append(msg);
            return *this;
        }

};

int main(int argc, char** argv) {

    Functor()("Hello ")("World")("!")();
    
    UNUSED(argc);
    UNUSED(argv);
    return 0;
}