#include<iostream>
using namespace std;
int main (){
    //f= (9/5)c+32
    //C =(f-32)*5/9
    /*conver a temperature from fahrenheit to celcius*/
    double fahrenheit;
    cout<< "enter temperture of fahrenheit:" ;
    cin>> fahrenheit ;
    double celcius;
    celcius = (fahrenheit -32)*5/9 ; // you can change formula as per your requirement
    cout<< "celcius is : "<< celcius<<endl;
   


    return 0;

}