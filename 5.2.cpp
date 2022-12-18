// تابعی تعریف کنید که کلمات را از رشته ها جدا کند 
// و انها را در خروجی چاپ کند 

#include <iostream>
#include <string>
using namespace std ; 

string  find_name (string str )
{
    int pos ,pos1 , pos2 ,length ;
    int j ; 
    int counter = 0 ; 
    // this loop show you how much have word 
    // and save the length on the counter 
    for (int i = 0 ; i < str.length() ; i++) {
        if (str[i] == ' ' ) 
        {
            counter++ ; 
        }
    }
    // and definitio array with lenght counter 
    counter++ ; 
    string  str_arr[counter] ;


    cout << "this string have " << ++counter << "name " << endl; 

    // this loop find the word and save to one arr string 
    for (int i = 0 ; i < str.length() ; i++) 
    {
        pos1 = pos2 ; 
        if (str[i] == ' ')
        {
            pos2 = i ; 
            str.erase(pos2,1) ;
        }
        if (pos1 && pos2 )
        {
            pos = pos2 - pos1 ; 
            str_arr[j].append(pos2,pos) ; 
            j++ ;  
        }


    }
    return str_arr; // this line cannot work 
}
int main () 
{
    string end ; 
    string name ; 
    string find_name ;
    name.append(" ");
    while (end != "end") {
        getline(cin,name);
    }
     std::copy(std::begin(name), std::end(name), std::begin(find_name(name)));
    

    return 0 ; 
}
