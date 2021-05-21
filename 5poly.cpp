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
    string Name;
    int Age;
protected:
    string Company;
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
    void Work(){
        cout<<Name<<" is checking email "<<endl;
    }
};

//child class
class Developer:public Employee{
public:
    string FavProgrammingLanguage;
    Developer(string name,int age,string company,string favprogramminglanguage):Employee(name,age,company)
        {
            FavProgrammingLanguage=favprogramminglanguage;
        }
    void FixBug(){
        //as you can see we can access protected company variable here in child class without getter but cannot access the private members
        cout<<getName()<<" bug fixxed using "<< FavProgrammingLanguage<<" of company "<<Company<<endl;
    }
    //same method as of parent class
    void Work(){
        cout<<getName()<<" is writing  "<<FavProgrammingLanguage<<" code "<<endl;
     }
    
};

class Teacher:public Employee{
public:
    string Subject;
    Teacher(string name,int age,string company,string subject):Employee(name,age,company)
    {
        Subject=subject;
    }
    void PrepareLesson(){
        cout<<getName()<<" is preparing " << Subject << " lesson "<< endl;
    }
    void Work(){
        cout<<getName()<<" is teaching  "<<Subject<<" code "<<endl;
    }
};

//main method
int main()
{
//child class object
    Developer d1("gs",42,"info","c++");
    Teacher t("cs",56,"tcs","computer science");
    d1.Work();
    t.Work();
    Employee *e1=&d1; 
    Employee *e2=&t; 

    e1->Work();
    e2->Work();
}