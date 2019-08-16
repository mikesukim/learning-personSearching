//-----------------------------------------------------------
// Purpose: Header file for the Person class.
//          This class is designed to store five pieces of 
//          information describing a famous person.  
//-----------------------------------------------------------
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
   // Constructor methods
   Person();
   Person(const Person & person);
   ~Person();

   // Set methods
   void set(const string fn, const string ln, 
            const int birth, const int death, const string contrib);

   // Get methods
   string get_first_name();
   string get_last_name();
   int get_birth_year();
   int get_death_year();
   string get_contribution();

   // Input output methods
   void print();
   void read(ifstream &din);

private:
   // Debugging flag
   static const bool DEBUG = false;

   // Object attributes
   string first_name;
   string last_name;
   int birth_year;
   int death_year;
   string contribution;
};
