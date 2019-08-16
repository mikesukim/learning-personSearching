//-----------------------------------------------------------
// Purpose: Header file for the Table class.
//          This class is designed to store an array of Person
//          objects that describe a group of famous people.
//          The search methods locate and print information
//          about a specified subset of the famous people.
//-----------------------------------------------------------
#include "person.h"
#include <iostream>
#include <string>
using namespace std;

class Table
{
public:
   // Constructor methods
   Table();
   Table(const Table & table);
   ~Table();

   // Input output methods
   void print();
   void read(string file_name);

   // Searching methods
   void search_first_name(const string first_name);
   void search_last_name(const string last_name);
   void search_year(const int low, const int high);

private:
   // Debugging flag
   static const bool DEBUG = false;  

   // Object attributes
   static const int TABLE_SIZE = 30;
   Person data[TABLE_SIZE];
   int count;
};
