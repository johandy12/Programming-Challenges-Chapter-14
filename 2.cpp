#include<iostream>
#include<string>

using namespace std;

class DayOfYear {
	int day;
	string month[12] = {"January", "February", "March", "April", "May",
						"June", "July", "August", "September", 
						"October", "November", "December"};
	
	int nMonth [12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};					
	
	public:
	DayOfYear (int day) {
		if(day > 0 && day <= 365) {
			this -> day = day;
		}
		
		while (day <= 0 || day > 365) {
			cout << "Enter the number of days: ";
			cin >> day;
		}
	}					
	
	void print() {
		int year = 365;
		int counter;
		
		for(int i = 0; i < 12; i++) {
			if(nMonth[i+1] <= year) {
				cout << month << " " << nMonth << endl;
			}
		}
		
		cout << "Day " << day;
		
		for(int j = 0; j < counter; j++)
		{
			int *ptrDate = &day;
			*ptrDate -= month [j];
		}
		
		cout << " would be " << month[counter] << " " << day;
	}
};

int main() {
	int input;
	
	cout << "Enter the number of days: ";
	cin >> input;
	
	DayOfYear day();
	
	day.print();
	
	return 0;
}
