#include<iostream>
using namespace std;
int main (){
    cout << "enter sales valu: " ;
    double sales ;
    cin >> sales;
    cout<<"sales: $" << sales <<endl;

   const double country_texrate = .04;
         double countytex = sales * country_texrate;
        cout <<"county Tax : $" <<  countytex << endl;


    return 0;

}