#include "table.h"

Table::Table()
{   
    data[TABLE_SIZE-1];
}

Table::Table(const Table& table)
{  
   for(int i = 0; i < TABLE_SIZE; i++) 
    data[i] = table.data[i];
}

Table::~Table()
{
}

void Table::print()
{
       
    for(int i = 0; i < TABLE_SIZE; i++) 
    {            
        if(data[i].get_birth_year() == 0)
            break;       
        
        data[i].print();       
    } 
}

void Table::read(string file_name)
{
    ifstream din;
    din.open(file_name.c_str());
    
    if(din.fail())
    {
        cout << "FAIL TO READ" << endl;
    
    }
    
    cout << "-------   Read the file 'person.txt' successfully.  ------- " << endl;
    int i = 0;

    while(!din.eof())
    {
        data[i].read(din);
        i++;
    }
    
    din.close();
}

void Table::search_first_name(const string first_name)
{
    count = 0;
    bool match = false;
    
    for(int i = 0; i < TABLE_SIZE; i++)
    {
        if(first_name == data[i].get_first_name())
        {
            match = true;
            count++;
            data[i].print();          
        }             
    }
    
    if(match)
        cout << " " << count << " '"<< first_name<<"' "<< "was found above." <<endl;
        
    if(!match)
        cout << " Could not find." << endl;
}

void Table::search_last_name(const string last_name)
{
    count = 0;
    bool match = false;
    
    for(int i = 0; i < TABLE_SIZE; i++)
    {
        if(last_name == data[i].get_last_name())
        {
            match = true;
            count++;
            data[i].print();          
        }             
    }
    
    if(match)
        cout << " " << count << " '"<< last_name<<"' "<< "was found above." <<endl;
        
    if(!match)
        cout << " Could not find." << endl;
}
void Table::search_year(const int low, const int high)
{
    count = 0;
    bool match = false;
    
    for(int i = 0; i < TABLE_SIZE; i++)
    {
        if( low <= data[i].get_birth_year() && high >= data[i].get_birth_year())
        {
            match = true;
            count++;
            data[i].print();          
        }             
    }
    
    if(match)
        cout << " " << count << " results were found above between " << " '"<< low <<"' "<< "to" << " '" << high << ".' " <<endl;
        
    if(!match)
        cout << " Could not find." << endl;
}


