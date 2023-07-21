#include <iostream>
using namespace std;

//************Variables************//
double balance = 1000;
int deposit = 0;
int withdraw = 0;
int password = 1234;
int choice = 0;
int error_count = 0;


// Show is a func to display menu
void show()
{
    cout<<"***************Menu***************"<<endl;
    cout<<"1:balance"<<endl;
    cout<<"2:withdraw"<<endl;
    cout<<"3:deposit"<<endl;
    cout<<"4:Exit"<<endl;
    cout<<"***********************************"<<endl;
}


void Process()
{

    cout<<"Enter the password : ";
    cin>>password;
       
         do{
            if(password == 1234)
            {
                cout<<"Enter your choice : ";
                cin>>choice;
                switch (choice)
            {
                case 1:
                    cout<<"Your Balance is : "<<balance<<endl;
                     break;
                case 2:
                    cout<<"Your balance is "<<balance<<endl;
                    cout<<"Enter your amount : ";
                    cin>>withdraw;
                    if(withdraw > balance)
                    {
                        cout<<"Sorry Error Not enough"<<endl;
                    }
                    else
                    {
                        balance = balance - withdraw;
                        cout<<"Now Your balance is : "<<balance<<endl;
                    }
                    break;
                case 3:
                    cout<<"Your current balance is : "<<balance<<endl;
                    cout<<"Note : The maximum daily limit to deposit is 5000"<<endl;
                    cout<<"Enter deposit amount : ";
                    cin>>deposit;
                    if(deposit > 5000)
                    {
                        cout<<"Sorry the amount is bigger than the maximum limit"<<endl;
                    }
                    else
                    {
                        balance = balance + deposit;
                        cout<<"Now Your balance is : "<<balance<<endl;
                    }
                case 4:
                    cout<<"Thank You"<<endl;
                    break;
            }
            }
            else
            {
                error_count++;
                if(error_count == 3)
                {
                    cout<<"Sorry you exceded the login atempts"<<endl;
                    choice = 4;    
                }
                else
                {
                    cout<<"Wrong password please enter again"<<endl;
                    cin>>password;
                }
            }
         
            
       

            }while(choice < 4);
            
}




int main()
{

show();
Process();

}