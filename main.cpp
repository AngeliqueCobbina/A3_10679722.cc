//ID Number: 10679722

#include <iostream>


using namespace std;

int main()
{

    int marks;
    cout<<"Enter your marks "<< endl;
    cin>>marks;


   if(marks>=80){
        cout<<"you had an A "<<endl;
   }
   else if(marks>=75){
        cout<<"you had a B+ "<<endl;
   }
   else if(marks>=70){
        cout<<"you had a B "<<endl;
   }
    else if (marks>=65){
        cout<<"you had a C+ "<<endl;
   }
    else if (marks>=60){
        cout<<"you had a C "<<endl;
   }
    else if (marks>=55){
        cout<<"you had a D+ "<<endl;
   }
    else if (marks>=50){
        cout<<"you had a D "<<endl;
   }
    else if (marks>=45){
        cout<<"you had an E "<<endl;
   }
    else if(marks<=45){
        cout<<"you had a F "<<endl;
   }




    return 0;
}
