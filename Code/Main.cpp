#include "iostream"
#include "vector"
#include "Person.cpp"
#include "sha256.cpp"
#define line std::cout << std::endl
#define echo(x) std::cout << x << std::endl

void addPerson(Person person, std::vector<Person> &personVector)
{
    personVector.push_back(person);
}

bool isChainValid(Person &person, std::vector<Person> &personVector)
{
        for (size_t i = 0; i < personVector.size() - 1; i ++)
        {
            if (personVector.at(i).getHash() == personVector.at(i).getPrevHash())
            {
                return true;
            }
        }
    return false;
}

int main(int argc, const char** argv)
{
    std::vector<Person> personVector;

    Person Genesis;
    Genesis.setName("Genesis");
    Genesis.setGender("Genesi");
    Genesis.setHash();

    Person First0 = Person(Genesis,"dracula","male");
    Person First1 = Person(First0,"dunno","dunno");

    addPerson(Genesis, personVector);
    addPerson(First0, personVector);
    addPerson(First1, personVector);
    addPerson(First1, personVector);
    addPerson(First1, personVector);
    static size_t valid = 0;
    for (int i = 1; i < personVector.size() - 1; i++)
    {
        if (personVector.at(i).getHash() == personVector.at(i+1).getPrevHash())
        {
            valid++;
        }
    }
}