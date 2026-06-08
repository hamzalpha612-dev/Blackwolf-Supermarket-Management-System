#include <iostream>
#include "color.h"
using namespace std;

int main() {
    int choice;
    int kemmeya_choice;
    int product_number;

    int juice_stock = 5; 
    int rice_stock = 10;

    int juice_price = 10;
    int rice_price = 30;

    int total_price = 0;
    int total_sales = 0;
    cout << "\n";
    cout<<blue<<"                                             |==============================|\n"<<RESET;
    cout <<blue<<"                                             | WELCOME IN BLACK WOLF SYSTEM |\n"<<RESET;
    cout << blue<<"                                             |==============================|\n"<<RESET;
    while (true) {
        cout<< CYAN << " 1. View Products\n"<<RESET;
        cout<< CYAN << " 2. Buy Product\n"<<RESET;
        cout<< CYAN << " 3. Check Stock\n"<<RESET;
        cout << CYAN <<  " 4. Check Sales\n" << RESET;
        cout<< CYAN << " 5. Exit\n"<<RESET;
        cout << " Enter your choice: ";
        cin >> choice;

        
        if (choice == 5) {
            cout<<green << " Thank you for using Black wolf System! Goodbye.\n"<<RESET;
            break; 
        }

        
        if (choice == 1) {
            cout << " 1. Juice.\n";
            cout << " 2. Rice.\n";

        }
        else if (choice == 2) {
            cout << " Please Enter A Product Number:\n";
            cin >> product_number;
            if (product_number>2)
            {
                cout << RED << " Invalid choice! Please try again.\n" << RESET;
            }
            else
            {
                if (product_number == 1)
                {
                    cout << " Please Enter A Product amount:\n";
                    cin >> kemmeya_choice;
                    if (kemmeya_choice > juice_stock)
                    {
                        cout << RED << " Out Of The Stock or Not Enough!\n" << RESET;
                    }
                    else if (kemmeya_choice <= juice_stock)
                    {
                        juice_stock -= kemmeya_choice;
                        total_price = kemmeya_choice *= juice_price;
                        total_sales += total_price;

                    }
                    //cout << juice_stock;
                }
                else if (product_number == 2)
                {
                    cout << " Please Enter A Product amount:\n";
                    cin >> kemmeya_choice;
                    if (kemmeya_choice > rice_stock)
                    {
                        cout << RED << " Out Of The Stock or Not Enough!\n" << RESET;
                    }
                    else if (kemmeya_choice <= rice_stock)
                    {
                        rice_stock -= kemmeya_choice;
                        total_price = kemmeya_choice *= rice_price;
                        total_sales += total_price;

                    }
                   
                    
                    //cout << rice_stock;
                }
                cout<<green << " Total Price:  " << total_price << "LE"<<RESET;
            }

        }
        else if (choice == 3) {
            cout << " Remaining Quantity Is:  " << "Juice: " << juice_stock << "/" <<"Rice: " << rice_stock;
        }

        else if (choice==4){
            cout<<green << "Mr. Manager, today we sold for a value of: " << total_sales<<RESET;
        }
        else {
            cout << RED << "Invalid choice! Please try again.\n" << RESET;
        }

        cout << "\n----------------------------------\n"; 
    }

    return 0;
}