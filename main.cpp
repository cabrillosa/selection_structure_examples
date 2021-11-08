#include <iostream>

using namespace std;

void problem1(){
    /*
      Request and store a number and then display a word indicating its sign.
      If the number is positive, display the word "positive".
      If it is negative, display the word "negative".
      If it is zero, display the word "zero".
      After displaying the appropriate word, the program should skip a
      line and display the words "To try another number, run this program again.".
    */
    //initialization
    int number = 0;

    //input
    cout << "Enter a number: ";
    cin >> number;

    //process / output
    if(number > 0)
    {
        cout << "Positive!" << endl;
    } // end of if(number)
    else if(number == 0 )
    {
        cout << "Zero!" << endl;
    } //end of if(number==0)
    else
    {
        cout << "Negative" << endl;
    }//end of else

    cout << "\nTo try another number, run this program again." << endl;


} // end of problem
void problem2(){
    //initialiation
    int first_number = 0;
    int second_number = 0;
    int answer = 0;
    char oper;

    //input
    cout << "Enter first number: ";
    cin >> first_number;

    cout << "Enter second number: ";
    cin >> second_number;

    cout << "What operation would you apply? (+ , -, / , *): ";
    cin >> oper;

    //process
    switch(oper){
        case '+':
            answer = first_number + second_number;
            break;
        case '-':
            answer = first_number - second_number;
            break;
        case '/':
            if(second_number == 0){
                cout << "Divided by 0 error!" << endl;
                exit(0);
            }
            answer = first_number / second_number;
            break;
        case '*':
            answer = first_number * second_number;
            break;
        default:
            cout << "Invalid operator!" <<endl;
    } //end of switch (oper)

    /*
    //process
    if(oper == '+'){
        answer = first_number + second_number;
    } //if +
    else if(oper == '-') {
        answer = first_number - second_number;
    } //if -
    else if(oper == '/') {
        if(second_number == 0){
            cout << "Divided by 0 error!" << endl;
            return -1;
        }
        answer = first_number / second_number;
    } // if /
    else if(oper == '*') {
        answer = first_number * second_number;
    } // if *
    else {
        cout << "invalid operator!" << endl;
    } //else
*/

    //output
    cout << first_number << " " << oper << " " << second_number << " = " << answer;


} //end of problem 2
void problem3(){
    //initialization
    float hours = 0.0;
    float fee = 0.0;

    //input
    cout << "Enter number of hours parked: ";
    cin >> hours;

    //process
    if(hours >=0 && hours <= 3){
        fee = 5;
    } // end of if(hours >=0 && hours <= 3)
    else if(hours > 3 && hours <= 9) {
        fee = 6 * static_cast<int>(hours + 1);
    }
    else if (hours > 9 && hours <= 24){
        fee = 60;
    }

    //output
    cout << "Total parking fee = $" << fee << endl;
} //end of problem 3

int main()
{
    //what program do you want to run?
    // options:
    // 1 - problem1
    // 2 - problem2
    // 3 - problem3
    int opt = 0;
    cout << "What program do you want to run?" << endl;
    cout << "options:"<< endl;
    cout << "Press 1 - run problem1" << endl;
    cout << "Press 2 - run problem2" << endl;
    cout << "Press 3 - run problem3" << endl;
    cin >> opt;

    switch(opt){
        case 1:
            problem1();
            break;
        case 2:
            problem2();
            break;
        case 3:
            problem3();
            break;
        default:
            cout << "Invalid options!" << endl;
            break;
    }
}



