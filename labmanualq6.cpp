#include <iostream>
using namespace std;

int main() 
{
    int numEmployees;
    float basicSal,bonus,netSalary;

    cout<<"Enter number of employes:";
    cin>>numEmployees;

    for(int i=1;i<=numEmployees;i++)
    {
        cout<<"\nEnter basic salary of employee "<<i<<":";
        cin>>basicSal;

        bonus = basicSal*0.12;   // 12% bonus
        netSalary = basicSal + bonus;

        cout<<"Bonus: "<<bonus<<endl;
        cout<<"Net Salary:"<<netSalary<<endl;
    }
    return 0;

}    
