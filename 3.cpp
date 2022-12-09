#include <iostream>
#include <string.h>
using namespace std ; 

int main () 
{
    string str_name ; 
    string str_alphebet ; 
    str_alphebet = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
    int counter = 0 ; 
    cout << "sort by alphebet!" << endl; 
    cout << "Enter your name : " << endl ; 
    getline(cin,str_name); 
    
    int l1 = str_name.length() ; 
    int l2 = str_alphebet.length() ; 
    for (int i = 0 ; i < l2 ; i++ ) 
    { 
        for (int j = 0 ; j < l1 ; j++ ) 
        { 
            if (str_alphebet[i] == str_name[j] )
            {
                counter++ ; 
            }
        }
        if (counter > 0) 
        {
            cout <<"number of " << str_alphebet[i] ;
            cout << " is :" << counter << endl;
        }

        counter = 0 ; 
    }
    return 0 ; 
}