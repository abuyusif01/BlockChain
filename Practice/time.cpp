#include <iostream>
#include <ctime>
#define echo(x)std::cout<<x<<std::endl

class test
{
    public:
        int x;
        void hello();
        size_t dunno();

    private:
        int y;
        std::string dog;
};

struct dracula
{
    public:
        std::string mine;

};

void test::hello()
{
    echo("Hello Class");
    test::dog = "Animal";
}

size_t test::dunno()
{
    return y;
}

int main(int argc, char *argv[])
{
    test dont;
    return 0;
}
