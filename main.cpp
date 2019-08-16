
#include <cstdlib>
#include "table.h"

using namespace std;



int main() {

    
    
    Table table1;
     
    string filename = "people.txt";      
    
    cout << "-------   WELCOME TO CSCE2014 HW1!   -------" << endl;
    table1.read(filename);
    cout << "---- Here are lists from person.txt. Please review. ----"<< endl;
    table1.print();
    
    
    string searching_first_name;
    
    cout << "-----    Please type first name you want to search. Capital letters matter.  -----" << endl;
    cin >> searching_first_name;
    table1.search_first_name(searching_first_name);
    
    string searching_last_name;
    cout << "-----    Please type last name you want to search. Capital letters matter. -----" << endl;
    cin >> searching_last_name;
    table1.search_last_name(searching_last_name);


    int low,high;
    cout << "----- Please type the range of birth years(low to high) you want to search.  -----" << endl;
    cin >> low >> high;
    table1.search_year(low,high);
    
    
    return 0;
}


