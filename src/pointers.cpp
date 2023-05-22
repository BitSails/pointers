#include <iostream>

using namespace std;

void myswap(int** ptr1, int** ptr2)//pointers to pointers must be passed to the function
{
	int *temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}


int main()
{
	int a = 25, b = 11;
	int* pa = &a, * pb = &b;//initialize the pointers with which we will work

	cout << "Now i'm doing everything right :) \n\n";

	cout << "a = " << *pa << ", b = " << *pb << endl;

	myswap(&pa, &pb); // now we pass the addresses of the pointers with which we work to the function

	cout << "a = " << *pa << ", b = " << *pb << endl;
}
