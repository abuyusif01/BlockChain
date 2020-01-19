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
}*east;

struct dracula
{
    public:
        std::string mine;
}*fuck;

void test::hello()
{
    echo("Hello Class");
    test::dog = "Animal";
}

size_t test::dunno()
{
    y = 0;
    return y;
}

int main(int argc, char *argv[])
{
    test dont;
    east -> x = 1;
    echo ((*east).x);
    fuck -> mine = "Fuck";

    return 0;
}
