/*  
Leap Year  
public:
        // Your code goes here 
        if(year%400 ==0){
        return true; 
        }  
        else if(year%4==0 && year%100 != 0){ 
            return true;
        }
        else return false;
            }  
};
*/ 
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int year;
    cin >> year;

    if (year % 400 == 0)
    {
        cout << "true";
    }
    else if (year % 4 == 0 && year % 100 != 0)
    {
        cout << "true";
    }
    else
        cout << "false";
    return 0;
}