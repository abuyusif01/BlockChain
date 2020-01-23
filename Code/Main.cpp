#include "iostream"
#include "vector"
#include "Person.h"

std::vector<Person> PersonList;

int main(int argc, const char** argv) 
{
    time_t Current_time;
    //create one person and see
    // Person( string Name, string dateOfBirth,string Country, string timeStamp, size_t PrevPersonHash);
    Person *person_0 = new Person("person_0","August","Nigeria",std::to_string(0),"0");
    Person *person_1 = new Person("person_1", "who knows", "Nigeria", std::to_string(1),person_0->getHash(*person_0));
    Person *person_2 = new Person("person_2", "wHo knows", "Nigeria", std::to_string(5),person_1->getHash(*person_1));
    Person *person_3 = new Person("person_3", "who knows", "Nigeria", std::to_string(3),person_2->getHash(*person_2));
    Person *person_4 = new Person("person_4", "who knows", "Nigeria", std::to_string(4),person_3->getHash(*person_3));

    person_0->addPerson(*person_0,PersonList);
    person_1->addPerson(*person_1,PersonList);
    person_2->addPerson(*person_2,PersonList);
    person_3->addPerson(*person_3,PersonList);
    person_4->addPerson(*person_4,PersonList);

    for (size_t i = 0; i < PersonList.size()-1; i++)
    {
        std::cout << PersonList.at(i).getHash(PersonList.at(i))<<std::endl;
    }
}