#include <iostream>
#include <string.h>
#include <string>
using namespace std ; 
int findmin (int arr[] , int n ) 
{
    int min = arr[0]; 
    for (int i = 0 ; i < n ; i++) 
    {
        for (int j = i ; j < n ; j++) 
        {
            if (min > arr[j])
            {
                min = arr[i] ; 
            }
        }
    }

    return min ; 
}
int main () 
{
    int min ; 

    string str_name[11] = {"alibizhangy", "amirhoseinchaghari" , "nimaposhtiban" , "seyedmostafahoseini",
    "ali", "amirhosein" , "alireza" , "mohamadreza" , "molavi" , "shokat" , "nulllllllllllllllllllllllllllllllllllllll"} ; 
    //or 
    // for (int i = 0 ; i < 10 ; i++) 
    // {
    //     getline(cin,str_name[i]); 
    // }
    string str_shortname ; 
    string temp ; 
    int lenght[11] ; 
    // save length all string frome length 
    for (int i = 0 ; i < 11 ; i++ ) {

        temp = str_name[i] ; 
        lenght[i] = temp.length() ; 
    }
    // find the small number 
    min = findmin(lenght , 11 ) ; 
    cout << "minimum string is :" << min<< " length" ;
    cout << endl ;
    for (int i = 0 ; i < 11 ; i++ ) {

        temp = str_name[i] ; 
        
        if ( 3 == temp.length() ) 
            cout << "short name is :" << str_name[i] ;  
    }
    
    

    return 0 ; 
}