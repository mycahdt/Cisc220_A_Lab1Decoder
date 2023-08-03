//============================================================================
// Name        : Lab1DecoderLab.cpp
// Author      : Mycah Detorres
// Partner     : Karl Antonio
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;


/* Function Declarations */
void func1(string s, int ct);
void func2(string s, int len);
void func3(string s, int len);
int func4(int arr[], int len);
int func5(int arr[], int val, int len);
void func6(int arr[], int ind, int len);
void func7(string s, int arr[], int len, int i1, int i2,bool do_pr);
void func8(string s, int len, int arr[], int len2);
void func9(string s9,int arr1[],int arr2[], int len1,int len2);
void func10(string str10,int arr[],int len);
void func11(string s7,int len,int msize);
void func12(string s,int len,int msize);
void func13(string s,int len,int msize);


/**********************  MAIN START    **************************/
int main() {
	string alpha= "abcdefghijklmnopqrstuvwxyz";
	cout << "Hello World!" << endl;
	/*****************************************************/

	/* for func1 */
	string str0 = "let it snow! ";
	int x = 4;
	func1(str0,x);


	/*****************************************************/
    /* for func2 */
	string string1 = "kceacruanmpedle sluastethev"; // 28 characters total
	func2(string1,28);


	/*****************************************************/
    /* for func3 */
    string string2 = "speliknuweorrubs tergudeunfe cestmanlbowctoshac";
	func3(string2,47);


	/*****************************************************/
    /* for func4 */
	int f4arr1[6] = {17, 10, 5, 20, 18, 2};
	int f4arr2[8] = {7, 21, 9, 6, 2, 39, 3, 25};
	int f4arr3[4] = {-2,1,7,2};
	int f4arr4[5] = {5, 8, 2, 13, 7};
	int f4arr5[7] = {12, -4, -2, 3, -7, -5, -3};
	cout << alpha[func4(f4arr1,6)]<<alpha[func4(f4arr2,8)]<<alpha[func4(f4arr3,4)]<<alpha[func4(f4arr4,5)]<<alpha[func4(f4arr5,7)]<<endl;


	/*****************************************************/
    /* for func5 */
	string string5 = "vapkfslifbhnoueweoihsakbix";
	int f5arr1[14] = {57,16, 46, 41,75,31,64,21,18,13,66,68,81,10};
	int f5arr2[20] = {22,66,67,85,90,92,70,81,42,79,32,27,99,25,49,74,68,12,55,94};
	int f5arr3[17] = {96,64,10,73,4,14,71,37,77,52,54,93,19,26,89,84,47};
	int f5arr4[13] = {28,49,44,19,37,42,26,78,12,88,67,51,66};
	int f5arr5[29] = {11,32,82,90,97,84,30,77,46,6,69,41,79,48,17,65,25,53,33,16,5,7,21,94,38,27,95,100,92};
	int f5arr6[15] = {84,30,77,46,6,69,1,79,48,17,65,25,53,33,16};
	cout << string5[func5(f5arr1,48,14)] << string5[ func5(f5arr2,24,20) ]<<string5[func5(f5arr3,80,17) ] << string5 [func5(f5arr4,39,13) ] << string5 [func5(f5arr5,36,29) ] << string5 [func5(f5arr6,27,15) ]<< endl;


	/*****************************************************/
    /* for func6 */
	string string6= "leztiwrqekrktfmwrbfhyljmuekpvonitapsxp";
	int f6arr1[10] = {17,4,32,12,8,6,14,24,21,11};
	int f6arr2[7] = {21,33,13,18,5,8,35};
	int f6arr3[4] = {15,19,32,4};
	int f6arr4[5] ={35,20,27,24,6};
	/**/
	func6(f6arr1,7,10);
	for (int i = 0; i < 10; i++) {
		cout << string6[f6arr1[i]];
	}
	cout << " ";
	func6(f6arr2,0,7);
	for (int i = 0; i < 7; i++) {
		cout << string6[f6arr2[i]];
	}
	cout << " ";
	func6(f6arr3,1,4);
	for (int i = 0; i < 4; i++) {
		cout << string6[f6arr3[i]];
	}
	cout << " ";
	func6(f6arr4,2,5);
	for (int i = 0; i < 5; i++) {
		cout << string6[f6arr4[i]];
	}
	cout << endl;


	/*****************************************************/
	/* for func7 */
	string s7 = "skldhbeoieldoodwac hkq cocu iaoe crhpogusyiahhifcet";
	int f7arr[27] = {25,45,48,12,10,16,50,9,32,17,19,36,27,33,30,24,20,28,7,6,18,14,37,39,38,42,44};

	//int f7arr[27] = {25,45,7,48,12,10,16,50,9,32,17,19,36,27,33,30,24,20,28,6,18,14,37,39,38,42,44};
	func7(s7, f7arr, 27, 18,2,false);  /*  won't decode */


	func7(s7,f7arr,27,12,25,true);  /* will decode */


	/*****************************************************/
	/* for func8 */
	string s6 = "xezuhnbl_uiplypdhqlb";
	int len = 20;
	int f8arr[] = {2351,92837,482,65,1039,233,23095,1,2037,693842,283};
	int len2 = 11;
	func8(s6,len,f8arr,len2);


  	/*****************************************************/
    /* for func9 */
  	string s9 = "slckfoiold,eryt coteidkfzlvkaljwoeihy dnivgphweugaltzsdxls,gfxnbcm wakrm qblanuaksdhzlkjets, anuakd shojqhwtis uzcdoalbicsoiabasboihs";
    int f9arr1[30] = {2,7,9,10,15,24,36,37,42, 44,51,57,66,68,70,74,76,80,88, 89,92,94,98,101,102,113, 115, 120, 122, 124};
	int f9len1 = 30;
	int f9arr2[17] = {8,16,17,39,40,58,67,71,72,75,77,90,91,93, 99,107,110};
	int f9len2 = 17;
	func9(s9,f9arr1,f9arr2,f9len1,f9len2);

	/*****************************************************/
	/* for func10 */
	string str10 = "alettioe twhaaabosi hkcxl";
	int f10arr[23] = {22,11,13,22,5,13,8,3,3,11,7,14,3,19,11,5,1,3,12,9,4,2,22};
	func10(str10,f10arr,23);

	/*****************************************************/
	/* for func11 */
	string s11 = "mboehdkuxkwpmnfzicosyfmeuqlaitcvwdgn";
	len = 36;
	func11(s11,len,6);

	/*****************************************************/
	/* for func12 */
	string str12 = "gboehdpixkwpangzicjsygmeaqlaltmvwdgeabndckswoshbk";
	len = 49;
	func12(str12,len,7);


	/*****************************************************/
	/* for func13 */
	string s13 ="w_orp_eshmueryasaa_nootetkdtbueteei_ars!vsfib_t!e_fslg_!rye_yra_";
	len = 64;
	func13(s13,len,8);


	return 0;
}
/*******************************END MAIN *****************************************/





/* Function Definitions*/


/*****************************************************
func1:(2 pts)
   * Write a function that takes as input:
   *     the string string0
   *     and an integer
   * The function returns:
   *     nothing
   * The functions should loop such that it prints that string the integer number
 * of times.  So if the string was "glub" and the int was 5, the
 * function would print out
 * >>glubglubglubglubglub (or, alternatively,
 * >>glub
 * glub
 * glub
 * glub
 * glub
 *
 *  Point: to make sure you're comfortable with a basic loop
 *
 * (See note above on how to make things print on the same line below)
   * NOTE 2:  All function definition go BELOW the main function
 */
/*****************************************************/
void func1(string s, int ct) {
	for(int i=0; i<ct; i++){
		cout << s << endl;
	}
}


/*****************************************************
  func2: (2 pts)
   * Write a function that takes as input:
   *     the string below (string 1) and
 *    the length of the string.
    * The function returns:
    *     nothing
    * This function should use a while loop to print out every other
    * character, starting at 1

 * Point: I want to make sure you can loop through a string and that you
 * know how to use a while loop
   */
void func2(string s, int len) {
	int i = 1;
	while(i < len){
		cout << s[i];
		i+=2;
	}
	cout << endl;
}


/*****************************************************
func3: (2 pts)
   * write a function that takes as input:
   *    a string and
   *    the length of the string.
   * The function returns:
   *    nothing
 * Using a for loop, print out every other character in the string, starting
 * at the last index in the string and working back to the first character
 *
 * Point: I want to make sure you know how to use a for loop.
 */
void func3(string s, int len) {
	for(int i = len-1; i > 0; i-=2){
		cout << s[i];
	}
	cout << endl;
}


/*****************************************************
func4: (2 pts)
   * write a function that takes as input:
   *    an array of ints, and
   *    the length of an array.
 * It returns:
   *    an int.
 * The function returns the average of the array values.
 *
 * Point: I want to make sure you know how to traverse an array, and sum
 * numbers in an array, and return a value.
 */
int func4(int arr[], int len) {
	int sum = 0;
	for(int i = 0; i<len; i++){
		sum += arr[i];
	}
	int avg = sum/len;
	return avg;
}


/*****************************************************
func5: (3 pts)
 * write a function that takes as input:
 *     an array of ints,
 *     the length of an array,
 *     and an integer
* It returns:
 *     an int.
* The function should find the value in the array closest to the integer, and
 * return the index of that integer
*
* Point: To make sure you understand how to update values in a loop
*/
int func5(int arr[], int val, int len) {
	int closest = arr[0];
	int closestInd = 0;
	for(int i = 0; i<len; i++){
		if(arr[i] - val < closest && arr[i]-val >= 0) {
			closest = arr[i] - val;
			closestInd = i;
		} else if (val - arr[i] < closest && val-arr[i] >= 0){
			closest = val - arr[i];
			closestInd = i;
		}
	}
	return closestInd;
}


/*****************************************************
	func6: (3 pts)
       * write a function that takes as input:
       *     an array of ints,
       *     the length of an array, and
       *     an integer (which acts as an index into the array).
       * It returns:
       *     nothing.
       * The function should find the smallest value in the array, and swap
       * that value with the value at the index integer.
       * For instance, if you've got the following array:
	 * [8,3,5,1,2,7,6,9,4]
	 * and the index sent in was 7:
	 * the smallest value in the array is 1, at index 3.
       * The value at index 7 is 9.  So 1 and
	 * 9 would be swapped in the array, resulting in:
	 * [8,3,5,9,2,7,6,1,4]
	 *
	 * Point: To make sure you can find (and update) the smallest value, and
        * can swap
	 */
void func6(int arr[], int ind, int len) {
	int myVal = arr[ind];
	int min = arr[0];
	int indMin = 0;

	for(int i = 0; i<len; i++){
		if(arr[i]  < min) {
			min = arr[i];
			indMin = i;
		}
	}

	arr[indMin] = myVal;
	arr[ind] = min;
}


/*****************************************************
func7:  (4 pts)
   * write a function that takes as input:
 *     string, an array of ints,
 *     the length of an array,
 *     2 ints that will act as indices into the array of ints
 *     and a boolean value that is set true if the function should print out
 *     the values in the string (as described below) or false if the function
 *     should not print.
 * The function returns:
 *   nothing
 *
 * The function shifts all values to the right between the first and second index parameters,
 * and replaces the value at the first index with the value at the last index.
 * So, for instance, if the array was:
 * [1,2,3,4,5,6,7,8,9]
 * * The function should then use the array numbers as indices into the string
	 * parameter and should print out those characters.
	 * an integer (which acts as an index into the array).
	 *
	 * Point: To emphasize the number of steps needed in inserting values into an array...
	 */
void func7(string s, int arr[], int len, int i1, int i2,bool do_pr){

	if(i2 > i1){
		int temp = arr[i2];
		for(int i = i2; i > i1; i--){
			arr[i] = arr[i-1];
		}
		arr[i1] = temp;

	} else if (i1 > i2) {
		int temp2 = arr[i1];
		for(int i = i1; i > i2; i--){
			arr[i] = arr[i-1];
		}
		arr[i2] = temp2;
	}

	if(do_pr){
		for(int i = 0; i<len; i++){
			cout << s[arr[i]];
		}
	}
	cout << endl;
}


/***************************************************
         func8: (5 pts)
      * write a function that takes as input:
      *     a string,
      *     the length of the string,
      *     an array of integers,
      *     and the length of the array of numbers.
      * The function  returns:
      *     nothing
	 * For each of the numbers in the array of numbers, the function adds up the
	 * digits in the number.  It then calculates an index into the string(s6, below) by
	 * finding the remainder when dividing by the string size.
	 * So if the string is:
	 * "grandma"
	 * the length of the string is 7.
	 * Say the number in the array of numbers is 5497
	 * Adding the digits results in 25.
	 * If we divide by 7, the remainder is 3.
	 * So the resulting character would be 'n' (which is at index 3 in the string)
	 * The function should print out the letter in the string at that index.
	 * Point: number manipulation
	 */
void func8(string s, int len, int arr[], int len2) {

	int remainder = 0;
	for(int i = 0; i < len2; i++){
		int sum = 0;
		while(arr[i] > 0){
			remainder = arr[i]%10;
			sum = sum + remainder;
			arr[i] = arr[i] / 10;
		}

		int rem = sum % len;
		cout << s[rem];

	}
	cout << endl;

}


/***************************************************
	  func9: (8 pts)
      * write a function that takes as input:
	 *    a string,
	 *    2 arrays of ints,
	 *    2 ints (the lengths of both of those arrays)
	 * The function returns:
	 *    nothing
	 * Note: BOTH of the input int arrays are in order, from smallest integer to
	 * largest integer!
	 * The functions creates a new array whose length is the length of the first
	 * array plus the length of the second array.  The function then combines the
	 * first array and the second array into the newly created array such that all
	 * the values are in order.

	 * In other words, if the two arrays are:
	 * [2,4,6,7,8,8,14,15] and [1,2,3,5,6]
	 * the resulting new array would be:
	 * [1,2,2,3,4,5,6,6,7,8,8,14,15]
	 *
	 * The function then uses the integers in the array to print out the
	 * corresponding character in the input string,
	 * e.g.,
	 * If the input string was "saligatorihaboiwhbwoihbw"
	 * the char at index1 is a, the char at index2 is s, etc. so the output would be:
	 * alligattorriw (yeah, not a word, but  you get the idea...)
	 */
void func9(string s9,int arr1[],int arr2[], int len1,int len2){

	int arr3[len1+len2];
	for(int i = 0; i<len1+len2; i++){
		if(i < len2) {
			arr3[i] = arr2[i];
		} else {
			arr3[i] = arr1[i-len2];
		}
	}

	sort(arr3, arr3 + len1+len2);

	for(int i = 0; i<len1+len2; i++){
		cout << s9[arr3[i]];
	}

	cout << endl;

}



/***************************************************
  func10: (9 pts)
    * write a function that takes as input:
 *    a string,
 *    an array of integers
 *    an integer that indicates the length of the array
 * The function returns:
 *    nothing
 *
 * The functions takes the array of integers, and removes all duplicates
 * (there is more one way to do this).
 *
 * In other words, if you've got:
 * 8,3,6,7,8,1,4,3,6,2,3
 * the resulting array (aka sub-array) would be:
 * 8,3,6,7,1,4,2
 *
 * The function then uses the remaining integers to print out the
 * corresponding character in the input string,
   *  Point:  array manipulation, fun challenge!
 */
void func10(string str10,int arr[],int len) {

	for(int i = 0; i<len; i++){
		for(int j = i+1; j<len; j++){
			if(arr[i] == arr[j]){
				for(int k = j; k<len; k++){
					arr[k] = arr[k+1];
				}
				j--;
				len--;
			}
		}
	}


	for(int i = 0; i<len; i++){
		cout << str10[arr[i]];
	}
	cout << endl;

}




/***************************************************
	  func11: (5 pts)
       * write a function that takes as input:
	 *      a string
	 *      the length of the string,
	 *      and a square matrix dimension size.
	 * The function returns:
	 *      nothing
	 * The function creates a matrix of size by size and fills in the characters
	 * such that the first size characters are in the first row, the second size
	 * characters are in the second row, etc.
	 * Then the function should print out the diagonal characters (0,0 to size,size).
	 * Point: creating and accessing a matrix
	 *
	 * */
void func11(string s7,int len,int msize) {
	string matrix[msize][msize];

	int q = 0;
	for(int i = 0; i<msize; i++ ){
		for(int j = 0; j<msize; j++){
			matrix[i][j] = s7[q];
			q++;
		}
	}


	for(int i = 0; i<msize; i++){
		cout << matrix[i][i];
	}
	cout << endl;
}


/***************************************************
func12: (5 pts)
*  write a function that takes as input:
*    a string
 *    the length of the string,
*    and a square matrix dimension size.
* The function returns:
*    nothing
* The function creates a matrix of size by size and fills in the characters
* such that the first size characters are in the first row, the second size
* characters are in the second row, etc.(so far just like the function above)
* Then the function should print out the reverse diagonal characters
* Top right corner to bottom left corner
* Point: creating and accessing a matrix
*/
void func12(string s,int len,int msize){
	string matrix[msize][msize];

	int q = 0;
	for(int i = 0; i<msize; i++ ){
		for(int j = 0; j<msize; j++){
			matrix[i][j] = s[q];
			q++;
		}
	}

	int w = msize;

	for(int i = 0; i<msize; i++){
		w = w-1;
		cout << matrix[i][w];
	}
	cout << endl;
}



/***************************************************
	 func13: (6 pts)
       * write a function that takes as input:
	 *     a string,
	 *     the length of the string,
	 *     and a matrix dimension size.
	 * The function returns:
	 *     nothing
	 * THe function creates a matrix of size by size and fills in the characters
	 * such that the first size characters are in the first row, the second size
	 * characters are in the second row, etc.(so far just like the functions above)
	 * (Then the function should print out the reverse diagonal characters
	 * Then the function should print the columns from top to bottom.  So, for
	 * instance, if the string was,
	 * "abcdefghi" and the matrix size was 3, the resulting matrix would be:
	 * abc
	 * def
	 * ghi
	 * and what would be printed out would be:
	 * adgbehcfi
	 */
void func13(string s,int len,int msize) {
	string matrix[msize][msize];

	int q = 0;
	for(int i = 0; i<msize; i++ ){
		for(int j = 0; j<msize; j++){
			matrix[i][j] = s[q];
			q++;
		}
	}


	for(int i = 0; i<msize; i++){
		for(int j = 0; j<msize; j++){
			cout << matrix[j][i];
		}
	}
	cout << endl;
}










































