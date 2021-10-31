#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<" Enter the three sides of the triangle to check wheather it is a scalene, isoscles or equilateral triangle\n";
    cin>>a>>b>>c;
    if(a==b){
        if(b==c){
            cout<<"It is a equilateral triangle\n";
        }
        else{
            cout<<"It is a isoscles triangle\n";
        }
        }
        else{
            if(a!=b){
                if(b==c)
                {cout<<"It is a isoscles triangle\n";
            }
            else{
                cout<<" It is a scalene triangle\n";
            }
        }
    }
    return 0;
}
