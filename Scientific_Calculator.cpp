#include<iostream>
#include<cmath>
using namespace std;

//DEFINE
int no;
int symbol;

void intro(){
    cout<<"Welcome to Calculator"<<endl;
    cout<<"*********************"<<"\n"<<endl;
}

void addition(){
    long int store[no];
        for(int i=0; i<no; i++)
        {
            if(i!=0 && i!=1 && i!=2)
            {
                cout<<"Enter "<<(i+1)<<"th number: ";
                cin>>store[i];
            }
            else if(i==1)
            {
                cout<<"Enter 2nd number: ";
                cin>>store[1];
            }
            else if(i==2)
            {
                cout<<"Enter 3rd number: ";
                cin>>store[2];
            }
            else if(i==0)
            {
                cout<<"Enter 1st number: ";
                cin>>store[0];
            }
        }
        long int add=0;
        for(int j=0; j<no;j++)
        {
            add=add+store[j];
        }
        cout<<endl;
        cout<<"Your Result: "<<add<<endl;
        cout<<" "<<endl;
        cout<<"*********************"<<"\n";
}

void subtraction(){
    long int store[no];
    for(int i=0; i<no; i++)
    {
        if(i!=0 && i!=1 && i!=2)
            {
                cout<<"Enter "<<(i+1)<<"th number: ";
                cin>>store[i];
            }
            else if(i==1)
            {
                cout<<"Enter 2nd number: ";
                cin>>store[1];
            }
            else if(i==2)
            {
                cout<<"Enter 3rd number: ";
                cin>>store[2];
            }
            else if(i==0)
            {
                cout<<"Enter 1st number: ";
                cin>>store[0];
            }  
    }
    long int sub=store[0];
    long long subs=0;
    for(int j=1; j<no;j++)
    {
    sub=(sub-store[j]);
    }
    cout<<"\n"<<"Your Result: ";
    for(int i=0; i<no; i++)
    {
        cout<<store[i]<<"-";
    }
    cout<<" = "<<sub<<endl;  
    cout<<" "<<endl;
    cout<<"*********************"<<"\n"; 
}

void division(){
    double num1 = 0, num2 = 0;
    cout<<"Enter 1st Number: ";
    cin>>num1;
    cout<<"Enter 2nd Number: ";
    cin>>num2;
    double div;
    if(num1>num2)
    {
        div=(num1/num2);
    }
    else if(num2>num1)
    {
        div=(num1/num2);
    }
    cout<<endl;
    cout<<"Your Result: "<<num1<<"/"<<num2<<" = "<<div<<endl;
    cout<<" "<<endl;
    cout<<"*********************"<<"\n";
}

void multiplication(){
        long double store[no];
        for(int i=0; i<no; i++)
        {
if(i!=0 && i!=1 && i!=2)
            {
                cout<<"Enter "<<(i+1)<<"th number: ";
                cin>>store[i];
            }
            else if(i==1)
            {
                cout<<"Enter 2nd number: ";
                cin>>store[1];
            }
            else if(i==2)
            {
                cout<<"Enter 3rd number: ";
                cin>>store[2];
            }
            else if(i==0)
            {
                cout<<"Enter 1st number: ";
                cin>>store[0];
            }  
        }
        long int multi=1;
        for(int j=0; j<no;j++)
        {
            multi=multi*store[j];
        }
        cout<<endl;
        cout<<"Your Result: "<<multi<<endl;
        cout<<" "<<endl;
        cout<<"*********************"<<"\n";
}

void power()
{
    double num1 = 0, num2 = 0, sqr;
    cout<<"Enter 1st Number: ";
    cin>>num1;
    cout<<"Enter 2nd Number: ";
    cin>>num2;
    sqr=pow(num1,num2);
    cout<<"\n"<<"Your Result: "<<num1<<"^"<<num2<<" = "<<sqr<<endl;
    cout<<" "<<endl;
    cout<<"*********************"<<"\n";
}

void square()
{
    double num1, sqr;
    cout<<"Enter Number: ";
    cin>>num1;
    sqr=pow(num1,2);
    cout<<"Your Result: "<<sqr<<endl;
    cout<<" "<<endl;
    cout<<"*********************"<<"\n";
}


int main()
{
    intro();    

    int symbol;
    while(1)
    {
        cout<<"What do you want to perform: \n0.EXIT \n1.Addition(+) \n2.Subtraction(-) \n3.Division(/) \n4.Multiply(*) \n5.Power(^) \n6.Square(^2) \n--> ";
        cin>>symbol;
        cout<<"\n";

        switch(symbol)
        {
        case 1:
            cout<<"How many number you want to add: ";
            cin>>no;
            addition();
            break;
        case 2:
            cout<<"How many number you want to subtract: ";
            cin>>no;
            subtraction(); 
            break;
        case 3:
            division();
            break;
        case 4:
            cout<<"How many number you want to multiply: ";
            cin>>no;
            multiplication();
            break;
        case 5:
            power();
            break;
        case 6:
            square();
            break;
        case 0:
            cout<<"\n"<<"*********************"<<"\n";
            cout<<"Thank you"<<endl;
            exit(0);
            
            break;
        default:
            cout << "\n*******Wrong choice, Enter valid choice*******\n\n";
            break;
        }
    }

    cout<<"\n"<<"*********************"<<"\n";
    cout<<"Thank you"<<endl;

    system("pause");
    return 0;
}