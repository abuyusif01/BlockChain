#include "Person.h"

Person::Person() { update(); }

Person::Person(Person PrevPerson, string Name, string Gender)
{
    this->Name = Name;
    this->Gender = Gender;
    this->PrevHash = PrevPerson.Hash;
    this->setHash();
}

// Functions
void Person::setName(string Name)
{
    this->Name = Name;
    update();
}

string Person::getName() { return this->Name; }

void Person::setGender(string Gender)
{
    this->Gender = Gender;
    update();
}

string Person::getGender() { return this->Gender; }

void Person::setHash()
{
    std::hash<std::string> Hashed;
    this->Hash = this->Name + this->Gender + this->PrevHash;
    size_t Parcial = Hashed(Hash);
    this->Hash = std::to_string(Parcial);
}

string Person::getHash() { return this->Hash; }

string Person::getPrevHash() { return this->PrevHash; }
void Person::update() { this->setHash(); }
