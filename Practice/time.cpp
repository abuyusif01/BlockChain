#include <iostream>
#include <ctime>
#include <vector>
#include <sqlite3.h>
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
    sqlite3 *db;
    test m;
    sqlite3_open("Dracula.db",&db);
    std::cout<<db<<"\t";
    std::cout<<&db<<"\t";
    if (0)
    {
        std::cout<<"Cannot: "<<sqlite3_errmsg(db);
        return(0);
    }
    sqlite3_close(db);
    return 0;
}
