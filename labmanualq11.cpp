#include <iostream>
using namespace std;

int main() {
    int qty;
    float price, total,new_total;
    cout<<"Enter number of items: ";
    cin>>qty;

    cout<<"Enter price of your item: ";
    cin>>price;
    total=qty*price;

    if (qty>1000) 
    {
        cout<<"Discount applied of 10%"<<endl;
        new_total=total-(0.10 * total);
    } 
    else {
        cout<<"No discount applied"<<endl;
        new_total=total;
    }
    cout<<"Total cost before discount: "<<total<<endl;
    cout<<"Final cost after discount: "<<new_total<<endl;
    return 0;
}
