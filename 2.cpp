#include <iostream>
#include<string>

using namespace std ; 

int 10_char (strign str ) {
	
	int pos 
	int length = str.length() ; 
	
	for (int i = 0 ; i < length ; i++  ) 
	{
		if (str[i] != " ")
		{
			counter++ ; 
		}else {
			counter2++
		}
	}
}
int main ()
{ 
    int pos ; // for function find 
    int postwo ; 
    int count = 0 ; // temp value 
    int temp ; 
    string names = " alireza amirali aliali noroz "; 
    names.append(" alireza mahdibi hichkas tohi "); 
    names.append("pone azarnosh abphatehi msadeghi ") ;
    cout << "data for name is :" << names << endl; 
    cout << names.find(' ') << endl; 

    postwo = names.length() ; 
    cout << "length names :" << postwo << endl; 

    while (pos!=-1) 
        {
            cout << "pos:" << pos + count << endl;
            pos = names.find(' ') ; 
            names.erase(pos,1);  
            cout << "pos:" << pos + count << endl; 
        }
    
    cout << "this line " << endl; 
    
    return 0 ; 
}
