#include <iostream>

using namespace std;
//function main where it asks for the inputs and saves them as independent variables(floats)
//price1 and diameter1 is for the first pizza, while price2 and diameter2 is for the second
int main(){
    cout<<"Welcome to the Pizza Consumer"<<endl;
    //asking for input of the first pizza
    float diameter1;
    cout<<"Enter diameter of the first pizza (in inches): "<<endl ;
    cin >>diameter1;
    float price1;
    cout<<"Enter the Price of the first pizza: "<<endl;
    cin >> price1;
    //asking for input of the second pizza
    float diameter2;
    cout<<"Enter diameter of the second pizza (in inches): "<<endl ;
    cin >>diameter2;
    float price2;
    cout<<"Enter the Price of the second pizza: "<<endl;
    cin >> price2;

    //calculating the price of each square inch of both pizza1 and pizza2 to compare it later.
    float unitprice_1;
    unitprice_1=price1/(3.14159*((diameter1/2)*(diameter1/2)));
    float unitprice_2;
    unitprice_2=price2/(3.14159*((diameter2/2)*(diameter2/2)));

    
//using a nested if statement to compare the sizes of the pizza and assigning the large
//pizza to the pizza with the bigger diameter.
    if(diameter1>diameter2){
        cout<<"Small Pizza: "<<endl;
        cout<<"Diameter= "<<diameter2<<" inches"<<endl;
        cout<<"Price= $"<<price2<<" per square inch= $"<<unitprice_2<<endl;
        cout<<"Large Pizza: "<<endl;
        cout<<"Diameter= "<<diameter1<<" inches"<<endl;
        cout<<"Price= $"<<price1<<" per square inch= $"<<unitprice_1<<endl;
        //compares the price of the 2 pizzas to find which is the better buy
        //and outputs the answer with the assignment of large/small according to the diameter
        if(unitprice_2<unitprice_1){
            cout<<"The small one is the better buy.";
        }else if(unitprice_1<unitprice_2){
            cout<<"The large one is the better buy.";
        }


    }else if(diameter2>diameter1){
        cout<<"Small Pizza: "<<endl;
        cout<<"Diameter= "<<diameter1<<" inches"<<endl;
        cout<<"Price= $"<<price1<<" per square inch= $"<<unitprice_1<<endl;
        cout<<"Large Pizza: "<<endl;
        cout<<"Diameter= "<<diameter2<<" inches"<<endl;
        cout<<"Price= $"<<price2<<" per square inch= $"<<unitprice_2<<endl;
        //compares the price of the 2 pizzas to find which is the better buy
        //and outputs the answer with the assignment of large/small according to the diameter
        if(unitprice_2<unitprice_1){
            cout<<"The large one is the better buy.";
        }else if(unitprice_1<unitprice_2){
            cout<<"The small one is the better buy.";
        }

     //in case if both pizzas have the same diameter it would prompt the user to get the cheaper one
    }else if(diameter1=diameter2){
        cout<<"Since they have the same diameter, you should get the cheaper."<<endl;
    }



    return 0;
}
