#include<iostream>
using namespace std;
//class 
class Employee{
//public access specifier
public:
//data members
    string Name,Company;
    int Age;
//default constructor
    Employee(){}
//parameterized constructor assigining values to data members
    Employee(string name,int age,string company){
        Name=name;
        Company=company;
        Age=age;
    }
//member functions
    void IntroduceYourself(){
        cout<<"Name - "<<Name <<endl;
        cout<<"Age - "<<Age <<endl;
        cout<<"Company - "<<Company <<endl;
    }
    
};
//main method
int main()
{
    /*default constructor user
    object emp1 of type Employee*/
    Employee emp1;
    emp1.Name="gaurav";
    emp1.Age=23;
    emp1.Company="christ";
    emp1.IntroduceYourself();

    Employee emp2;
    emp2.Name="gs";
    emp2.Age=22;
    emp2.Company="christ";
    emp2.IntroduceYourself();

    //parameterized constructor user
    Employee emp3("Gaurav Soni",24,"self");
    emp3.IntroduceYourself() ;

    Employee emp4("S.n Soni",54,"AVVNL");
    emp4.IntroduceYourself() ;

}