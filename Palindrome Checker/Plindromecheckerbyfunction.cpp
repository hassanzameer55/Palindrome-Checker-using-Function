// Implement a function to check if a given string is a palindrome (reads the same backward as forward).

#include<iostream>
using namespace std;

bool isPalindrome(int num) // Function Defination 
{
	int reverse=0,ori; 
	ori = num;
	
	while (num > 0)
	{
		reverse = reverse * 10 + num % 10; 
		num = num / 10;
	}
		if (reverse == ori)
		{
			return true;
		}
		else
		{
			return false;
		}
	
}
int main()
{
	int num;
	cout << "Enter number to check whether number is Palindrome or not : ";
	cin >> num;

	int palindrome = isPalindrome(num); // Function calling
	if (palindrome)
	{
		cout << "Yes the given number " << num << " is a Palindrome !";
	}
	else
	{
		cout << "No the given number " << num << " is not a Palindrome !";
	}
}
