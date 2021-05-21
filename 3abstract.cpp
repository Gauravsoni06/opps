#include <iostream>
using namespace std;

//abstract class
/*Abstraction using classes: An abstraction can be achieved using classes. A class is used to group all the data members and member functions into a single unit by using the access specifiers. A class has the responsibility to determine which data member is to be visible outside and which is not.

Abstraction in header files: An another type of abstraction is header file. For example, pow() function available is used to calculate the power of a number without actually knowing which algorithm function uses to calculate the power. Thus, we can say that header files hides all the implementation details from the user.*/
class AbstractEmployee{
    //virtual function
    virtual void AskForPromotion()=0;
};

//normal class 
class Employee:AbstractEmployee{
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
    void AskForPromotion(){
        if(Age>30)
        {
            cout<<Name<<" got promoted"<<endl;
        }
        else{
            cout<<Name<<" sorry no promotion for you"<<endl;
        }
    }
};
//main method
int main()
{
    //parameterized constructor user
    Employee emp3("gaurav",24,"self");
    Employee emp4("S.n Soni",54,"AVVNL");
    
    emp3.AskForPromotion();
    emp4.AskForPromotion();

}