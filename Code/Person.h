#include <iostream>
#include <vector>
#pragma once
using std::string;

class Person
{ 
    private:
        string Name;
        string Gender;
        string Hash;
        string PrevHash;

    public:
        //getters
        string getName();
        string getGender();
        string getHash();
        string getPrevHash();

        //setters
        void setHash();
        void update();
        void setName(string Name);
        void setGender(string Gender);
        void addPerson(Person person, std::vector<Person> &PersonList);

        //Constructors
        Person();
        Person(Person PrevPerson, string Name, string Gender);
}person_default;