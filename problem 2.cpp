//*********************************************************************************************************************************
//SOLUTION OF PROBLEM 2
//Correcting the robot
//Sacheta
//*********************************************************************************************************************************


#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

string checkRobot(vector<int> &prices, int n, int moneyHave, int k){

    int countTotal=0;  //to count the total number of gadgets of same type a customer can buy with given money
    for(int i=0;i<n;++i){
        if(((float)moneyHave/(float)prices[i])==(moneyHave/prices[i])){  // since, if a customer can buy ith gadget, then moneyHave= j*prices[i], where j has to be integer
            ++countTotal;}  //incrementing the countTotal if j(in upper explanation) is an integer
    }

    if(countTotal==k)  //if countTotal calculated by us is equal to robot's answer, then robot's right
        return "Right";
    else  //else wrong it is
        return "Wrong";
}

int main(){
    int n;  //number of gadgets robot has
    cin>>n;
    vector<int> prices(n);  //vector of prices of different gadgets
    for(int i=0;i<n;++i)
        cin>>prices[i];
    int moneyHave;  //money the customer have
    cin>>moneyHave;
    int k;  //answer the robot gives
    cin>>k;

    cout<<checkRobot(prices,n,moneyHave,k)<<endl;  //calling the function


}
