// Online C++ compiler to run C++ program online
//Dharavath Bharath Nai
/*
Dharavath Bharath Naik
IIIT Ranchi
2023 Passout
ph: 9347979784

*/
#include<bits/stdc++.h>
using namespace std;

class Basket {
    public:
    string prod;
    float price;
    float gst;
    int quantity;
    Basket(string str1,float p1,float g1,int q1){
        prod=str1;
        price=p1;
        gst=g1;
        quantity=q1;
        if(price>=500){
            gst-=5;
        }
    }
    
};


int main() {
    Basket b1("Leather Wallet",1100,18,1);
    Basket b2("Umbrella",900,12,4);
    Basket b3("Cigarette",200,28,3);
    Basket b4("Honey",100,0,2);
    vector<Basket>v={b1,b2,b3,b4};
    string max_gst_prod="None";
    int max_gst=INT_MIN;
    for(int i=0;i<v.size();i++){
        if(max_gst<v[i].gst){
            max_gst=v[i].gst;
            max_gst_prod=v[i].prod;
        }
    }
    cout<<"Maximum GST paying among above products: "<<max_gst_prod<<endl;
    
    // amount of total
    
    int amount =0;
    for(int i =0;i<v.size();i++){
        amount+= (v[i].price + (v[i].price *(v[i].gst/100)))*v[i].quantity;
    }
    cout<<"Total Amount to be paid: "<<amount;
    return 0;
}
