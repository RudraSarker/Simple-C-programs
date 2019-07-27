//This c++ program is to solve equations that have 3 variables x1,x2,x3 with Gauss Seidel iterative method

#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;


    float arr[3][4];
    float X1=0.0, X2=0.0, X3=0.0;                      //variables


void x_one(){
    //for x1
    if(arr[0][0] >= arr[1][0] && arr[0][0] >= arr[2][0] ){
        X1 = (arr[0][3] - (arr[0][1] * X2) - (arr[0][2] * X3) ) / arr[0][0];
    }
    else if(arr[1][0] > arr[0][0] && arr[1][0] >= arr[2][0] ){
        X1 = (arr[1][3] - (arr[1][1] * X2 ) - (arr[1][2] * X3) ) / arr[1][0];
    }
    else{
        X1 = (arr[2][3] - (arr[2][1] * X2 ) - (arr[2][2] * X3) ) / arr[2][0];
    }
}

void x_two(){
//for x2
    if(arr[0][1] >= arr[1][1] && arr[0][1] >= arr[2][1] ){
        X2 = (arr[0][3] - (arr[0][0] * X1) - (arr[0][2] * X3) ) / arr[0][1];
    }
    else if(arr[1][1] > arr[0][1] && arr[1][1] >= arr[2][1] ){
        X2 = (arr[1][3] - (arr[1][0] * X1) - (arr[1][2] * X3) ) / arr[1][1];
    }
    else{
        X2 = (arr[2][3] - (arr[2][0] * X1) - (arr[2][2] * X3) ) / arr[2][1];
    }

}

void x_three(){
//for x3
    if(arr[0][2] >= arr[1][2] && arr[0][2] >= arr[2][2] ){
        X3 = (arr[0][3] - (arr[0][0] * X1) - (arr[0][1] * X2) ) / arr[0][2];
    }
    else if(arr[1][2] > arr[0][2] && arr[1][2] >= arr[2][2] ){
        X3 = (arr[1][3] - (arr[1][0] * X1) - (arr[1][1] * X2) ) / arr[1][2];
    }
    else{
        X3 = (arr[2][3] - (arr[2][0] * X1) - (arr[2][1] * X2) ) / arr[2][2];
    }

}


int main() {
    
    int total_iter = 4;

//Taking Input--

    cout<<"For equation 1:"<<endl;
    for(int i=0; i<total_iter; i++){
        if(i == 3) cout<<"Equation is equal to = ";
        else
            cout<<"Enter the coefficient of x" << i+1<<": ";
        
        cin>>arr[0][i];
        cout<<endl;
    }

    cout<<"For equation 2:"<<endl;
    for(int i=0; i<total_iter; i++){
        if(i == 3) cout<<"Equation is equal to = ";
        else
            cout<<"Enter the coefficient of x" << i+1<<": ";
        
        cin>>arr[1][i];
        cout<<endl;
    }

    cout<<"For equation 3:"<<endl;
    for(int i=0; i<total_iter; i++){
        if(i == 3) cout<<"Equation is equal to = ";
        else
            cout<<"Enter the coefficient of x" << i+1<<": ";

        cin>>arr[2][i];
        cout<<endl;
    }

//Run iteration--
    int itr;

    cout<<"How many iteration do you want?\n"<<": ";
    cin>>itr;
    cout<<endl;

    for(int i=0; i<itr; i++){
        x_one();
        x_two();
        x_three();
    }
    
    cout<<"Value of:"<<endl;
    cout<<"X1 = "<<::X1<<", "<<"X2 = "<<::X2<<", "<<"X3 = "<<::X3<<endl<<endl;


}