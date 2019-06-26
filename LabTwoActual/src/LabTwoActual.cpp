//============================================================================
// Name        : LabTwoActual.cpp
// Author      : Quinlan Kauffman
// Partner     : Humpher Owusu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
using namespace std;


void newProblem(); //Function declaration
void problemOne(); //Function declaration
void problemTwo(int); // Function declaration
int problemThree(); //Function declaration
void problemFour(int *); //Function declaration
void problemFive(int &x); //Function declaration
void problemSix(int *x, int *y); // Function declaration
void problemSeven(char ca1, char &ca2, char *ca3, char& ca4, char *ca5); //Function declaration
bool problemEightA(int &x, int &y); //Function declaration
void problemEightB(); //Function declaration
void problemEightActual(int, int &x);//Function declaration
void problemNine(int); //Function declaration
void problemTen(int, int); //Function declaration
int * problemEleven(); //Function declaration
void problemTwelve(int[], int); //Function declaration
int * problemThirteen(int *size, int *high, int*low); //Function declaration
int * problemFourteen(int length); //Function declaration
void problemFifteen(int *array, int size); //Function declaration
void problemSixteen(double[], int);//Function declaration
int * problemSeventeen(int *arr, int*, int*); //Function declaration
int problemEighteen(int *, int, int); //Function declaration
int * problemNineteen(int[], int[], int, int); //Function declaration
void problemTwenty(int[], int, int, int);//Function declaration
int ** problemTwentyOne(int *row, int *col); //Function declaration


int main() {

	srand (time(NULL)); //Setting the seed

	//Problem 1
	newProblem();
	cout<<"Problem 1"<<endl;
	problemOne();
	cout<<endl;
	newProblem();


	//Problem 2
	newProblem();
	cout << "Problem 2" << endl;
	int x2 = 2;
	problemTwo(x2); //Call by Value
	cout << x2 << endl;
	cout << &x2 << endl;
	//The value of x inside the function for problem 2 and main should be different
	newProblem();



	//Problem 3
	newProblem();
	cout<<"Problem 3"<<endl;
	int x3 = problemThree();
	cout<<"The value of prob3var is:  "<<x3<<endl;
	cout<<"The address of prob3var is:  "<<&x3<<endl;
	newProblem();


	//Problem 4
	newProblem();
	cout << "Problem 4" << endl;
	int x4 = 5;
	cout << x4 << endl;  //Print out value
	cout << &x4 << endl; //Prints out address
	problemFour(&x4);
	//Call by reference
	newProblem();


	//Problem 5
	newProblem();
	cout<<"Problem 5"<<endl;
	int x5 = 5;
	problemFive(x5);
	newProblem();


	//Problem 6, using call by pointer
	newProblem();
	cout << "Problem 6" << endl;
	int a = 10;
	int b = 20;
	problemSix(&a, &b);
	cout << a << endl;
	cout << b << endl;
	newProblem();


	//Problem 7
	newProblem();
	cout<<"Problem 7"<<endl;
	char c1 = 'g', c2 = 'r', c3 = 'e', c4 = 'a', c5 = 't';
	cout<<"The old word is: "<<c1<<c2<<c3<<c4<<c5<<endl;
	problemSeven( c1, c2, &c3,c4, &c5);
	cout<<"The new word is: "<<c2<<c3<<c4<<c5<<endl;
	newProblem();


	//Problem Eight Actual
	newProblem();
	cout << "Problem 8" << endl;
	int x8a = -1;
	problemEightActual(50,x8a);
	cout << x8a << endl;

	int x8b = -1;
	problemEightActual(50,x8b);
	cout << x8b << endl;

	int x8c = -1;
	problemEightActual(50,x8c);
	cout << x8c << endl;
	newProblem();


	//Problem 9
	newProblem();
	cout<<"Problem 9"<<endl;
	int x9a = 5;
	problemNine(x9a);
	cout<<endl;

	int x9b = 6;
	problemNine(x9b);
	cout<<endl;

	int x9c = 12;
	problemNine(x9c);
	cout<<endl;
	newProblem();


	//Problem 10
	newProblem();
	cout << "Problem 10" << endl;
	int length = 10;
	int max10a = 20;
	problemTen(length, max10a);

	int max10b = 25;
	problemTen(length, max10b);

	int max10c = 15;
	problemTen(length, max10c);
	newProblem();


	//Problem 11
	newProblem();
	cout<<"Problem 11"<<endl;
	int *pro11 = problemEleven();
	//cout<<"The address of *proll is "<<pro11<<endl;
	//cout<<"The value of *pro11 is " <<*pro11<<endl;

	/*Fails to print out because the local variable in the function vanishes when the function exits.
	 * Commented out so can will execute remaining problems
	 */
	newProblem();


	//Problem 12b
	newProblem();
	cout << "Problem 12b" << endl;
	int arr12a[25];
	for (int i = 0; i < 25; i++) {
		arr12a[i] = rand() % 10;
	}
	problemTwelve(arr12a, 25);

	int arr12b[25];
	for (int i = 0; i < 25; i++) {
		arr12b[i] = rand() % 10;
	}
	problemTwelve(arr12b, 25);

	int arr12c[25];
	for (int i = 0; i < 25; i++) {
		arr12c[i] = rand() % 10;
	}
	problemTwelve(arr12c, 25);
	newProblem();


	//Problem 13
	newProblem();
	cout<<"Problem 13"<<endl;
	int size = 5;
	int high = 10;
	int low = 15;
	int *x13a = problemThirteen( &size, &high, &low);
	problemTwelve(&x13a[0], size);

	int *x13b = problemThirteen( &size, &high, &low);
	problemTwelve(&x13b[0], size);

	int *x13c = problemThirteen( &size, &high, &low);
	problemTwelve(&x13c[0], size);
	newProblem();


	//Problem 14
	newProblem();
	cout << "Problem 14" << endl;
	int *x14 = problemFourteen(25);
	//problemTwelve(&x14[0], 25); //Commented out so can do remaining problems

	/*Doesn't work because the array was created on the stack and therefore
	the scope of the array is only the function for problem 14.  Once the function for
	problem 14 is done being called, the array created in the function is removed from
	the stack and therefore the array is no longer available
	*/
	newProblem();


	//Problem 15
	newProblem();
	cout<<"Problem 15"<<endl;
	int arr15a[] = {1,2,3,4};
	problemFifteen(arr15a,4);

	int arr15b[] = {1,2,3,4,8};
	problemFifteen(arr15b,5);

	int arr15c[] = {1,2,3,4,8,12};
	problemFifteen(arr15c,6);
	newProblem();


	//Problem 16
	newProblem();
	cout << "Problem 16" << endl;
	cout << "New array" << endl;
	double arr16a[] = {0.1, 0.2, 0.3,0.4,0.5};
	problemSixteen(arr16a,5);
	cout << "New array" << endl;
	double arr16b[] = {0.4, 0.8,1.2,1.6};
	problemSixteen(arr16b,4);
	cout << "New array" << endl;
	double arr16c[] = {0.5, 0.25,0.125};
	problemSixteen(arr16c,3);
	newProblem();


	//Problem 17
	newProblem();
	cout<<"Problem 17"<<endl;
	int arr17a [] = {5,4,4,3,6,6,6,8,9,5,1,3,8,8,1,8,9,9,3,2,2,2,6,1,2};
	int size17a = 25;
	int newSize = 0;
	int *x17a = problemSeventeen(&arr17a[0], &size17a, &newSize);
	problemTwelve(&x17a[0], newSize); //Expect {5,4,3,6,8,9,5,1,3,8,1,8,9,3,2,6,1,2}

	int arr17b [] = {5,1,1,1,1,1,1,1,1,1,1,8,8};
	int size17b = 13;
	int newSizeb = 0;
	int *x17b = problemSeventeen(&arr17b[0], &size17b, &newSizeb);
	problemTwelve(&x17b[0], newSizeb); //Expect {5,1,8}


	int arr17c [] = {0,0,0,0,0,0,0};
	int size17c = 7;
	int newSizec = 0;
	int *x17c = problemSeventeen(&arr17c[0], &size17c, &newSizec);
	problemTwelve(&x17c[0], newSizec); //Expect {0}
	newProblem();


	//Problem 18
	newProblem();
	cout << "Problem 18" << endl;
	int arr18 [] = {3,8,2,5,1,4,6,0,2};
	int z = problemEighteen(&arr18[0],9,5);
	cout << z << endl; //Expect 4
	z = problemEighteen(&arr18[3],9,5);
	cout << z << endl; //Expect 3
	z = problemEighteen(&arr18[4],9,5);
	cout << z << endl; //Expect 3
	newProblem();


	//Problem 19
	newProblem();
	cout << "Problem 19" << endl;
	int origArr19a [] = {3,8,2,5,1,4,6,0,2};
	int filteredArr19a [] = {0,0,0,0,0,0,0,0,0};
	int *x19a = problemNineteen(origArr19a, filteredArr19a, 9,5);
	problemTwelve(&x19a[0], 9); //Expect {0,0,4,3,3,3,3,0,0}

	int origArr19b [] = {3,7,2,5,1,4,6,0,2};
	int filteredArr19b [] = {0,0,0,0,0,0,0,0,0};
	int *x19b = problemNineteen(origArr19b, filteredArr19b, 9,5);
	problemTwelve(&x19b[0], 9); //Expect {0,0,0,3,3,3,3,0,0}

	int origArr19c [] = {3,8,2,5,1};
	int filteredArr19c [] = {0,0,0,0,0};
	int *x19c = problemNineteen(origArr19c, filteredArr19c, 5,3);
	problemTwelve(&x19c[0], 5); //Expect {0,5,4,3,0}
	newProblem();


	//Problem 20
	newProblem();
	cout << "Problem 20" << endl;
	int arr20a [] = {6,-2,-4,5,-3,-4,-3,-1,5,2,-2,0,-7,2,-3,-4,-3,-1,-5,-3,1,7,3,-7,-7,3,-8,1,-5,-4,-2,-5,-8,0,-4};
	problemTwenty(arr20a,35,-8,7);
	cout << endl;

	int arr20b [] = {6,-2,-4,5,-3,-4,-3,4};
	problemTwenty(arr20b,8,-4,6);
	cout << endl;

	int arr20c [] = {0,-7,2,-3,-4,-3,-1,-5,-3,1,7,3};
	problemTwenty(arr20c,12,-7,7);
	newProblem();


	//Problem 21
	newProblem();
	cout << "Problem 21" << endl;
	int x21a = 5;
	int y21a = 5;
	int **arr21a = problemTwentyOne(&x21a,&y21a);
	for (int i = 0; i < x21a; i++) {
		problemTwelve(&arr21a[i][0], y21a);
	}
	cout << endl;

	int x21b = 5;
	int y21b = 5;
	int **arr21b = problemTwentyOne(&x21b,&y21b);
	for (int i = 0; i < x21b; i++) {
		problemTwelve(&arr21b[i][0], y21b);
	}
	cout << endl;

	int x21c = 5;
	int y21c = 5;
	int **arr21c = problemTwentyOne(&x21c,&y21c);
	for (int i = 0; i < x21c; i++) {
		problemTwelve(&arr21c[i][0], y21c);
	}
	newProblem();


	return 0;
}



void newProblem() {
	cout << "******************************************************" << endl;
}

void problemOne(){
	//Problem 1

	int x = 100;
	cout<<"The value of x:  "<<x<<endl;
	cout<<"The address of x:   "<<&x<<endl;
}

void problemTwo (int x) {
	//Problem 2

	x = x + 4;
	cout << x << endl;
	cout << &x << endl;
}


int problemThree(){
	//Problem 3

	int locX = rand() % 50 ;
	cout<<"The value of this variable is :  "<<locX<<endl;
	cout<<"The address of this variable is: "<<&locX<<endl;

	return locX;
}

void problemFour(int *x) {
	//Problem 4

	int temp = *x;
	*x = temp^3;

	cout << x << endl;
	cout << &x << endl;

	//Print out the value at the address, the address in the parameter
	//and the address of the parameter ???

}


void problemFive(int &x){
	//ProblemFive
	int pro5 = rand() & 10;

	 x += pro5;

	cout<<"The random number is:  "<<pro5<<endl;
	cout<<"The new value is:  "<<x<<endl;
	cout<<"The address of the input parameter is:  "<<&x<<endl;

}


void problemSix(int *x1, int *x2){
	//Problem 6
	*x1 = 32;
	*x2 = 42;
}

void problemSeven(char ca1, char &ca2, char *ca3, char& ca4, char *ca5){
	//Problem 7

	ca1 = 'h';
	ca2 = 'b';
	*ca3 = 'e';
	ca4 = 's';
	*ca5 = 't';
}

bool problemEightA(int &x, int &y) {
	//Problem 8a

	if ( x > y) {
		int temp;
		temp = y;
		y = x;
		x = temp;
		return true;
	}

	return false;
}


void problemEightB() {
	//Problem 8b

	int x1;
	int x2;
	bool wereSwapped;
	for (int i = 0; i < 20; i++) {
		x1 = rand() % 25;
		x2 = rand() % 25;
		cout << x1 << endl;
		cout << x2 << endl;
		wereSwapped = problemEightA(x1, x2); //Call by reference (because easier)
		cout << "Swapped: " << wereSwapped << endl;
	}
}

void problemEightActual(int length, int &x) {
	//Problem 8

	int arr[length];
	int smallest = 50;
	for (int i = 0; i < length; i++) {
		arr[i] = rand()%50; //Between 1 and 50 (exclusive)
		cout << arr[i] << ',' ;
		if (arr[i] < smallest) {
			smallest = arr[i];
		}
	}
	cout << endl;

	x = smallest;
}

void problemNine(int pr9){
	//Problem 9

	int arrFirst = 0;
	int arrLast = pr9-1;
	int i;
	int *arr = new int[pr9];
	cout<<"The first array is: ";
	for(i = 0; i<pr9; i++){
		arr[i] = rand() % 50;
	   cout<<arr[i]<<",";
	}
	cout<<endl;

	cout<<"The reversed array is: ";
	for(int j = arrLast; j>=arrFirst; j-- ){
		cout<<arr[j]<<",";
	}

}

void problemTen(int length, int max) {
	//Problem 10

	cout << "Length of array: " << length << endl;
	int arr[length];
	int index;
	int smallest;

	for (int i = 0; i < length; i++) {
		arr[i] = rand() % max;
	}


	for (int i = 0 ; i < length ; i ++) {
		smallest = max;
		index = 0;
		for (int j =0 ; j < length; j++) {
			if (arr[j] < smallest) {
				smallest = arr[j];
				index = j; //Index of the smallest number in array
			}
		}
		cout << smallest << endl;
		arr[index] = max+1;
	}

}

int *problemEleven(){
	//Problem 11

	int stackvar = 3;
	cout<<"The value of stackvar is "<<stackvar<<endl;
	cout<<"The address of stackvar within this function is: "<<&stackvar<<endl;

	return &stackvar;

}

void problemTwelve(int arr[], int length) {
	//Problem 12
	//just prints out an array, with each value separated by commas

	cout << arr[0];
	for(int i=1;i<length;i++){
		cout << "," << arr[i];
	}
	cout << endl;
}

int *problemThirteen(int *size, int *high, int*low){
	//Problem 13

	int x = rand() % 25 + 25;

	int *pro13array;

	pro13array = new int[x];

	*high = rand() % 5 + 5;
	*low = rand() % 5 + (-10);
	cout << "High: " << *high << endl;
	cout << "Low: " << *low << endl;


	for(int i = 0; i<x; i++){
		 pro13array[i] = rand() % (*high - *low) + *low;
	}

	*size = x;
	return pro13array;

}

int* problemFourteen(int length) {
	//Problem 14

	int arr[length];
	for (int i=0;i<length;i++) {
		arr[i] = rand() % 25 + 25;
	}

	return &arr[0];
}

void problemFifteen(int *array, int size){
	//Problem 15

	cout<<"The addresses of the arrays are: "<<endl;

	for(int i = 0; i<size; i++){

		cout<<i<<":"<<&array[i]<<" , ";
	}
	cout<<endl;
}

void problemSixteen(double arr[], int length) {
	//Problem 16

	//Prints out address of each double in an array
	//And addresses should be in sequential order

	for(int i=0;i<length;i++) {
		cout << &arr[i] << endl;
	}
}

int *problemSeventeen(int *arr, int *size, int *newSize){

	int *locArray = new int[*size];
	int counter = 0; //Keep track of what to add
	int checkIndex;
	bool checkNext = false;
	int i = 0;
	while (i < *size) {
		 checkNext = true;
		 checkIndex = 1;
		 while (checkNext) {
			 if (arr[i] == arr[i+checkIndex]) {
				 checkIndex++;
			 }
			 else
			 {
				 checkNext = false;
			 }
		 }

		 locArray[counter] = arr[i];
		 counter++;
		 i += checkIndex;
	}

	int *copiedLocArray = new int[counter+1];
	for (int j = 0; j< counter + 1;j++) {
		copiedLocArray[j] = locArray[j];

	}

	*newSize = counter;

	return &copiedLocArray[0];
}

int problemEighteen(int *arr, int length, int window) {
	//Problem 18
	//Hanning Window
	//Use Call by Pointer for the address
	int sum = 0;
	int hanVal = 0;
	int multiplier = 0;
	int halfWin = window/2;
	int divisor = 0;
	for (int i = 0; i<window;i++) {
		if (i < halfWin) {
			multiplier = i+1;
			divisor += multiplier;
		}
		else {
			multiplier = window - i;
			divisor += multiplier;
		}

		hanVal = arr[i]*multiplier;
		sum = sum + hanVal;
	}

	return floor(sum/divisor);
}


int * problemNineteen(int origArr[], int filteredArr[], int length, int window) {
	int start = floor(window/2);
	for (int i =start ; i < length - start; i++) {
		filteredArr[i] = problemEighteen(&origArr[i-start], length, window);
	}

	return &filteredArr[0];
}

void problemTwenty(int arr[], int length, int min, int max) {
	for (int j = max; j>=min;j--) {
		cout<<j<< ":";
		for (int i=0; i < length; i++) {
			if (arr[i] == j) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}
}


int ** problemTwentyOne(int *row, int *col){

    int  x = rand() % 5 + 5;
    int  y = rand() % 4 + 4;

    cout<<"The column is: "<<y<<endl;
    cout<<"The row is: "<<x<<endl;

    *row = x;
    *col = y;

    int **d2 = new int *[*row];

    for(int i = 0; i< x; i++){

		d2[i] = new int[*col];

		for(int j=0; j< y; j++){
			d2[i][j] = 0;

		}
    }

    int counter = 0;
    while (counter < 5) {
    	x = rand() % *row;
    	y = rand() % *col;

    	if (d2[x][y] != 1) {
    		d2[x][y] = 1;
    		counter++;
    	}
    }

    return d2;

}
