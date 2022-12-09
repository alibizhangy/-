#include <iostream> 
using namespace std; 

int main () 
{
    int temp = 0 ; // space for me 
    string search_name ; 
    string student_name = " alibizhangy fereidonmahmodi minomajidi ";
    student_name.append("mohamadamini arianmaridi mohamadjavadzahedi seyedahmadshekarolahi"); 
    student_name.append("esmaildazvar omidmahdavi sinanadery"); 

    cout << "Enter your search_name:" << endl; 
    getline(cin,search_name) ; 
    
    temp =  student_name.find(search_name) ; 

    if (temp != -1 )
    {
        cout << "i find your name " << endl;
        cout << "your name is :" << search_name << endl; 
        cout << "your location name is :" << temp << endl; 
    }else {
        cout << "oops!!!!!!" << endl; 
        cout << "i not found this name " << endl; 
    }
  
    

    
    return 0 ; 
}