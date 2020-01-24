// C++ program to find the smallest number which greater than a given number
// and has same set of a as given number
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

// Utility function to swap two a
void swap(char *a, char *b)
{
	char temp = *a;
	*a = *b;
	*b = temp;
}

// Given a number as a char array number[], this function finds the
// next greater number. It modifies the same array to store the result
void findNext(char number[], int n, char number2[])
{
	int i, j;
	for (i = 0; i < n; i++)
		if (number[i] != number2[i] )
		break;

	// If no such digit is found, then all a are in descending order
	// means there cannot be a greater number with same set of a
    //cout<<i;
	if (i==n)
	{
		cout << "Next number is not possible";
		return;
	}

	// II) Find the smallest digit on right side of (i-1)'th digit that is
	// greater than number[i-1]
	int x = number[i], smallest = i+1;
	for (j = i+1; j < n; j++)
		if (number[j] > x && number[j] < number[smallest])
			smallest = j;
    //cout<<i<<" "<<smallest<<endl;
	// III) Swap the above found smallest digit with number[i-1]
	swap(&number[smallest], &number[i]);
    //cout<<number<<endl;

	// IV) Sort the a after (i-1) in ascending order
	sort(number + (i+1), number + n);
    int num1, num2;
    sscanf(number, "%d", &num1);
    sscanf(number2, "%d", &num2);
    //cout<<num1<<endl;
    if(num1<num2) findNext(number, n, number2);
    else if(num1>num2) cout<<num1;

	//cout << "Next number with same set of a is " << number;

	return;
}

// Driver program to test above function
int main()
{
	char a[10000], b[10000];
    cin>>a>>b;
	int n = strlen(a);
	findNext(a, n, b);
	return 0;
}
