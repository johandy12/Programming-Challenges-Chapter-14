#include <iostream>
#include <string>
using namespace std;

class Number 
{
	
	int input ;
	
	public :
		
	Number()
	{
		input = input;
	}
	
	int setInput(int num)
	{
		input=num ;
	}
	
	int getInput()
	{
		return input ;
	}
		
	int fourDigitArr[10] = {1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000};
	string twoDigitsNoTens[20] = {"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
	int twoDigitsNoTensNum[10] = {20, 30, 40, 50, 60, 70, 80, 90};
	int hundreds[10] = {100, 200, 300, 400, 500, 600, 700, 800, 900};
	string stringTens[30] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", 
								"Seven", "Eight", "Nine", "Ten", "Eleven", 
								"Twelve", "Thirteen", "Fourteen", 
								"Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
		
	void printThousands(int input)
	{
		for(int i = 0; i < 10; i++)
		{
			if(input - fourDigitArr[i] < 1000 && input - fourDigitArr[i] > 0)
			{
				cout << stringTens[i+1] << " thousand " << " ";
				input = input-fourDigitArr[i];
			}
		}	
	}
	
	void printHundreds (int input)
	{
		for(int i = 0; i < 9; i++)
		{
			if(input-hundreds[i] < 100 && input-hundreds[i] > 0)
			{
				cout << stringTens[i+1] << " hundred " << " ";
				input= input-hundreds[i];
			}
		}
	}
	
	void printTens(int input)
	{
		for(int i = 0; i < 8; i++)
		{
			if(input-twoDigitsNoTensNum[i] < 10 && input-twoDigitsNoTensNum[i] > 0)
			{
				cout << twoDigitsNoTens[i] << " ";
				input = input - twoDigitsNoTensNum[i];
			}
		}
	}
	
	void printLastNum(int input)
	{
		if(input > 0)
		{
			cout << stringTens[input];
		}
	}
	
	
};


int main()
{
	int num;
	Number info ;
	
	
	cout<<"input value between 1-9999 = ";
	cin>>num ;
	
	info.setInput(num);
	
	if(num>999 && num<10000)
	{
		info.printThousands(info.getInput());
		
	}	
	
	if(num >99 && num < 1000)
	{
		info.printHundreds(info.getInput());
	}
	
	if(num>19 && num<100)
	{
		info.printTens(info.getInput());
	}
	
	if(num<20)
	{
		info.printLastNum(info.getInput());
	}
	
	return 0;
}
