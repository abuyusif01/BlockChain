#pragma once
using std::string;

class Person
{ 
    private:
        string Name;
        string dateOfBirth;
        string Country;
        string timeStamp;
        string Hash;
        string PrevPersonHash;

    public:
        string getName();
        string getdateOfBirth();
        string getCountry();
        string gettimeStamp();
        string getHash(Person person);
        void setName(string name);
        void setdateOfBirth(string dateOfBirth);
        void setCountry(string count);
        void settimeStamp(string timeStamp);
        void setHash(Person person, string PrevPersonHash);
        void addPerson(Person person, std::vector<Person> &PersonList);
        Person(){};
        Person( string Name, string dateOfBirth,string Country, string timeStamp, string PrevPersonHash);
}person_default;

Person::Person(string Name,  string dateOfBirth,  string Country,  string timeStamp, string PrevPersonHash)
{ 
    this -> Name =  Name;
    this -> dateOfBirth = dateOfBirth;
    this -> Country = Country;
    this -> timeStamp = timeStamp;
    this -> PrevPersonHash = PrevPersonHash;
    this->setHash(person_default, this->PrevPersonHash);
}

// Functions
void Person::setName( string name)
{ 
    this -> Name = name;
}

string Person::getName()
{
    return this->Name;
}

void Person::setCountry(string Country)
{
    this->Country = Country;
}

string Person::getCountry()
{
    return this->Country;
}

void Person::setdateOfBirth(string dateOfBirth)
{
    this->dateOfBirth = dateOfBirth;
}

string Person::getdateOfBirth()
{
    return this->dateOfBirth;
}

void Person::settimeStamp(string timeStamp)
{
    this->timeStamp = timeStamp;
}

string Person::gettimeStamp()
{
    return this->timeStamp;
}
void Person::setHash(Person person, string PrevPersonHash)
{
    std::hash<std::string> Hashed;
    string Hash = this->getName() + this->getdateOfBirth() + this->getCountry() + 
    this->gettimeStamp() + this -> PrevPersonHash;
    size_t final_hash = (Hashed(Hash)>>3);
    this->Hash = std::to_string(final_hash);
}

string Person::getHash(Person person)
{
    return this->Hash;
}

void Person::addPerson(Person person, std::vector<Person> &PersonList)
{
    PersonList.push_back(person);
}