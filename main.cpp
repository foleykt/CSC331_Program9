#include <iostream>

using namespace std;

/*
 * Author: Kyle Foley
 * Professor: Dr. Cook
 * Program 9
 *
 * Ignoring OO, so this uses no classes or methods.
 * Takes in X amount of students and stores grades in an integer
 * array, finds the low, high, mean. Prints what students have the
 * same grades. Then prints what letter grades each student earned.
 */

int main() {
    int size;

    cout << "Hello, World!" << endl;

    cout << "Please enter the number of students: ";
    cin >> size; cout << endl;

    int grades [size];

    int i;
    int total = 0;

    //building gradebook into an array
    for (i = 0; i < size; i++){
        int adding;
        cout << "Please enter grade for student " << i + 1 << ": ";
        cin >> adding; cout << endl;
        grades[i] = adding;
        total = total + adding;
    }//end for

    //debug:
   // int d;
    //for (d = 0; d < size; d++){
        //cout << "index: " << d << " value: " << grades[d] << endl;
    //}//end debug for


    //getting lowest and highest grades
    int j;
    int lowest = grades[0]; //starting with first grade
    int highest = grades[0]; //starting with first grade
    for (j = 1; j < size; j++){

        //if a grade is lower than what is stored in lowest,
        //replace with the lower number till end of array
        if (grades[j] < lowest){
            lowest = grades[j];
        }//end if

        //if a grade is higher than what is stored in greatest,
        //replace with higher number till end of array
        if (grades[j] > highest){
            highest = grades[j];
        }//end if
    }//end for

    //printing lowest, highest, and mean
    //debug:
   // cout << "total is: " << total << endl;
    cout << lowest << " is the low." << endl;
    cout << highest << " is the high." << endl;
    cout << (total/size) << " is the mean." << endl;

    //printing out if students have the same grade
    int k;
    for (k = 0; k < size; k++){
        int comparing = grades[k]; //starting with first grade
        //loop through array comparing each value in the array
        int l;
        for (l = k+1; l <= size; l++){
            if (comparing == grades[l]){
                cout << "Students " << k +1<< " and " <<
                        l +1<< " have the same grade" << endl;
            }//end if
        }//end for
    }//end for

    //printing out letter grades for each student
    int p;

    for (p = 0; p < size; p++){
        int grade = grades[p];
        int answer = grade / 10;

        //debug:
        //cout << "answer is: " << answer << endl;

        switch (answer){//using integer division to convert grade
                        //to single int value to determine letter grade.

            case 6: { //if integer division = 6, resulting grade is a D
                cout << "Student " << p +1<< " gets a D." << endl;
                break;
            }//end case 6
            case 7: { //if integer division = 7, resulting grade is a C
                cout << "Student " << p +1<< " gets a C." << endl;
                break;
            }//end case 7
            case 8: { // if integer division = 8, resulting grade is a B
                cout << "Student " << p +1<< " gets a B." << endl;
                break;
            }//end case 8
            case 9: case 10: { //if integer division = 9 or 10,
                                //resulting grade is an A
                cout << "Student " << p +1<< " gets an A." << endl;
                break;
            }//end case 9 and 10
            default: {//if none of these are true, resulting grade is an F
                cout << "Student " << p +1 << " gets an F." << endl;
                break;
            }//end default case

        }//end switch

    }//end for




    return 0;


}