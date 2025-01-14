#include <iostream>
#include <string>
using namespace std;
                    // ATM-app Project..


 // Function to withdraw Money..
 void withdrawl(double &balance){
        double amount ;
           cout << "\nEnter the withdrawl amount : " <<endl;
          cin >> amount; 
       if(amount < balance){
          balance -= amount;
          cout << "\n Withdrawl is successful !\n" << endl;
         }
       else if(amount > balance){
              cout << "\n Insufficient Balance !\n" <<endl;
         }
  }

 // Function to Deposit Money..
 void deposit(double &balance){
        double amount;
        cout << "\nEnter the amount : \n";
        cin >> amount;
        balance += amount;
        cout << "\nDeposit is successful !\n" << endl;
  }
 // Function to check Balance 
 void check_balance(double &balance){
       cout << "\n Available balance is : " << balance <<endl ;
       if(balance == 0){
              cout << "\n No balance available !\n" << endl;
         }
  }

  // Funcdtion to Transfer Money..
  void transfer(double &balance, double &another_account){
       double amount;
        cout << "Enter the transferable amount to A/c....0676 : \n";
        cin >> amount;
     if(amount > balance){
       cout << "\nInsufficient Balance ! \n" <<endl;
     }
     else{
       balance -= amount;
       another_account += amount;
       cout << "\n Transfer Successful !\n" << endl;
       cout << "A/c....0676 Balance is : " << another_account << endl << endl;
     }
  }

  // Function to Change the PIN..
  void change_PIN(string &user_PIN){
       string current_PIN ;
       cout << "\nEnter the current PIN : \n";
       cin >> current_PIN;
     if (current_PIN == user_PIN){
       string new_PIN;
       cout << "Enter the New PIN: \n";
       cin >> new_PIN;
        user_PIN = new_PIN;            // new pin updated
       
       cout << "\n PIN changed Successfully !\n";
       cout << "Your New PIN is: " << user_PIN << endl;
     }
     else {
       cout << "\n Wrong PIN Entered !\n  PIN change Failed ! \n" << endl;
     }
  }

  // Function to Verify the PIN..
  bool verify_PIN(string &user_PIN){
       string PIN;
       cout << "\nWelcome to ATM-Machine-System \n";
       cout << "Enter the PIN: \n" ;
       cin >> PIN;
       if(PIN == user_PIN){
              cout << "\n User Verified ! \n";
              return true;
       }
       else{
            cout <<"\n Incorrect PIN !! \n " <<endl;
            return false;
       }
  }

  // Function to Display the Main Manu..
  void display_main_manu(){
       cout << " \n ATM-Machine-System \n";
       cout << "1. Withdraw Money." << endl;
       cout << "2. Deposit Money." << endl;
       cout << "3. Check Balance." << endl;
       cout << "4. Transfer Money." << endl;
       cout << "5. Change PIN.    " << endl;
       cout << "6. Exit." <<endl;
       cout << "\n Enter the Choice\n";
  }


int main (){
 
 double balance = 0 ;
 double another_account = 0;
 string user_PIN = "123" ;                                     
 if(!verify_PIN(user_PIN)){                                   // It will verify the user pin;
       cout << "Please enter correct PIN ! \n";              // if -> true then it will not run ;
       return 0;                                            // if -> false then it will run and it will return 0;
 }

     int choice;
     while (true) {            // conndition is true becoz i want to run it infinite times..
     display_main_manu();
       cin >> choice;
     switch (choice){
         case 1:
           withdrawl(balance);
           break;
         case 2:
           deposit(balance);
           break;
         case 3:
           check_balance(balance);
           break;
         case 4:
           transfer(balance , another_account);
           break;
         case 5:
           change_PIN(user_PIN);
           break;
         case 6:
          cout << "\n Exiting the app, Thankyou !!! \n" << endl;
          return 0;
         default:
           cout << "\n Invalid choice! \n  Please..Choose correct option \n";
     }
     } 
     return 0;
}