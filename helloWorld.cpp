#include<iostream> 

int main1(){
    std::cout<<"Hello world" <<std::endl; 
    std::cout<<"I like pizza!" << '\n';
    std::cout<<'\n';

    std::cout<< "------------------" <<std::endl;
    std::cout<<'\n';

    int x; //declaration;
    x = 5; //assignment
    int y = 6;
    int sum = x + y;

    std::cout << x << std::endl;
    std::cout<< y << std::endl;
    std::cout<<  sum << std::endl;
    
    std::cout<<'\n';
    std::cout<< "------------------" <<std::endl;
    std::cout<<'\n';

    int days = 7.5;
    std::cout<< days << std::endl;

    //double datatype
    double price = 0.99;
    double gpa = 3.7;
    std::cout<< price <<'\n';

    //char(single character)
    char grade = 'A';

    //boolean state
    bool isStudent = true;
    bool power = false;
    bool forSale = false;

    //String(objects that represents squence of text)
    std::string name = "Bro";

    std::cout<< "Hello " <<  name <<'\n';

    return 0;
}