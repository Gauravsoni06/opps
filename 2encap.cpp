#include <iostream>
using namespace std;
//class 
class Employee{
//private access specifier by default in class everything is private
//these variables in private are encapsulated
//data members
private:
    string Name,Company;
    int Age;
//public access specifier
public:
//getter setter 
    void setName(string name){
        Name=name;
    }
    string getName(){
        return Name;
    } 

    void setAge(int age){
        //validation
        if(age>=18)
            Age=age;
        else
            cout<<"age is less than 18"; 
    }
    int getAge(){
        return Age;
    } 

    void setCompany(string company){
        Company=company;
    }
    string getCompany(){
        return Company;
    } 

//default constructor
    Employee(){

    }
//parameterized constructor
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
    //parameterized constructor user
    Employee emp3("gaurav",24,"self");
    emp3.IntroduceYourself() ;

    Employee emp4("S.n Soni",54,"AVVNL");
    emp4.IntroduceYourself() ;

    //working with getter and setter
    emp3.setName("Gaurav Soni");
    cout<<emp3.getName() <<" is " << emp3.getAge() << " years old"<<endl;
    
    emp3.setAge(15);
    cout<<emp3.getName() <<" is " << emp3.getAge() << " years old";
}