#include <iostream>
using namespace std;

int main(){
	
	int choice, tuition, totalAmount, current_Time, hours, minutes, seconds;
	char choice2;
	
	cout << "Midterm Exam" << endl;
	cout << "Mark Jason T. Galang" << endl;
	cout << "MENU" << endl << endl;
	
	cout << "1. PROBLEM 1" << endl;
	cout << "2. PROBLEM 2" << endl;
	
	cout << "Enter your choice: ";
	cin >> choice;
	cout << endl;
	
	if(choice == 1){
		cout << "Assessment of Tuition Fee" << endl;
		
		cout << "Enter Tuition Fee: ";
		cin >> tuition;
		cout << endl;
		
		cout << "Mode of Payments: " << endl;
		cout << "Cash (A)- 10% Discount" << endl;
		cout << "Two-Installment (B)- 5% Interest" << endl;
		cout << "Three-Installment (C)- 10% Interest" << endl << endl;
		cout << "Choose mode of payment: ";
		cin >> choice2;
		
		switch(choice2){
			case 'A': case 'a':
				cout << "Cash Method Active" << endl;
				totalAmount = tuition * 0.10;
				totalAmount = tuition -= totalAmount;
				cout << "Total Amount: " << totalAmount;
				break;
			case 'B': case 'b':
				cout << "Two-Installment Method Active" << endl;
				totalAmount = tuition * 0.05;
				totalAmount = tuition += totalAmount;
				cout << "Total Amount: " << totalAmount;
				break;
			case 'C': case 'c':
				cout << "Three-Installment Method Active" << endl;
				totalAmount = tuition * 0.10;
				totalAmount = tuition += totalAmount;
				cout << "Total Amount: " << totalAmount;
				break;
			default: 
				cout << "Invalid Data. Please Try Again.";
		}
		
	} else if(choice == 2){
		cout << "Program that adds 1 second" << endl;
		cout << "Enter current time: ";
		
		cin >> hours >> minutes >> seconds;
		hours++;
		minutes++;
		seconds++;
		
		if(minutes >= 59 && seconds >= 59){
			if(hours > 12){
				hours = 1;
				if(minutes >= 59 && seconds >= 59){
					minutes = seconds = 0;
					cout << "The current time now would be: " << hours << " " << minutes << " " << seconds;	
				}
			} else{
				minutes = seconds = 0;
				cout << "The current time now would be: " << hours << " " << minutes << " " << seconds;	
			}
		} else if(hours <= 0){
			cout << "Invalid Data";
		} else if(minutes >= 59 || seconds >= 59){
			cout << "Invalid Time Entry";
		} else{
			hours--;
			cout << "The time now would be: " << hours << " " << " " << minutes << " " << seconds;
		}
		
	} else{
		cout << "Invalid Data. Please Try Again.";
	}
	
	return 0;
	
}
