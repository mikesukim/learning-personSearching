#include "person.h"

Person::Person()
{
    first_name = "Constructor";
    last_name = "Constructor";
    birth_year = 0;
    death_year = 0;
    contribution = "Constructor";      
}

Person::Person(const Person & person)
{     
    first_name = person.first_name;
    last_name = person.last_name;
    birth_year = person.birth_year;
    death_year = person.death_year;
    contribution = person.contribution;   
}

Person::~Person()
{
}

void Person::set(const string fn, const string ln, const int birth, const int death, const string contrib)
{
    first_name = fn;
    last_name = ln;
    birth_year = birth;
    death_year = death;
    contribution = contrib;
}

void Person::print()
{   
    cout << first_name << endl;
    cout << last_name << endl;
    cout << birth_year << endl;
    cout << death_year << endl;
    cout << contribution << endl;      
}

void Person::read(ifstream &din)
{     
            din >> first_name >> last_name >> birth_year >> death_year;
            getline(din,contribution);        
    
}
string Person::get_first_name()
{
    return first_name;
}
string Person::get_last_name()
{
    return last_name;
}
int Person::get_birth_year()
{
    return birth_year;
}
int Person::get_death_year()
{
    return death_year;       
}
string Person::get_contribution()
{
    return contribution;
}


