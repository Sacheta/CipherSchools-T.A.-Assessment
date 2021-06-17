//*********************************************************************************************************************************
//SOLUTION OF PROBLEM 1
//Creating an array having n elements whose sum is zero
//Sacheta
//*********************************************************************************************************************************

#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

vector<int> createSumZeroArray(int n){
    vector<int> arr(n);
    if(n%2){  //if number of numbers to be added is odd
        int mid=n/2;
        for(int i=0,countn=-mid;i<n;++i,++countn){  //start from -mid till the n numbers ahead, eg: for n=5, mid=5/2=2, arr={-2,-1,0,1,2}
            arr[i]=countn;
        }
    }
    else  //if n is even
    {
        int mid=n/2;
        for(int i=0,countn=-mid;i<n;++i,++countn){  //start from -mid till n elements ahead but skip adding zero, eg: for n=4, mid=4/2=2, arr={-2,-1,1,2}
                if(!countn)   //if countn has become zero, increment it once again as we not adding zero to the vector
                ++countn;
            arr[i]=countn;
        }
    }
    return arr;
}

int main(){
    int n;  //total number of numbers to be added
    cin>>n;
    vector<int> arr(n);  //creating a vector of size n
    arr=createSumZeroArray(n);  //calling the function and assigning the returned vector to arr vector
for(auto a:arr)  //print the vector
    cout<<a<<" ";
cout<<endl;
}
