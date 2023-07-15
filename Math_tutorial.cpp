
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

// prototype
int displayMenu();
bool isValid(int num, int min, int max); // the 3 parameters for storage in te datatype if te user input incorrectly
void addition();
void subtraction();
void multiplication();
void division();

int main ()
{
    string name;
    int seed = time(0);
    srand(seed);
    
    int choice;
    
    cout << "What's your name? \n";
    getline(cin, name);
    cout << "Welcome to Math Tutor "<< name << endl;
    
    do
    {
        choice = displayMenu();
        switch (choice)
        {
            case 1: // add
                addition();
                break;
            case 2: // sub
                subtraction();
                break;
            case 3: // mult
                multiplication();
                break;
            case 4: // div
                division();
                break;
            case 5:
                cout << endl << "you will now be exiting the program \n";
                break;
                
            default:
                cout << "An Error has occured. Invalid input \n\n";
        }
    }while (choice !=5);
    {
        cout << "Thank you for using the math tutor \n\n";
    }
    return 0;
}

// to display menu items
int displayMenu()
{
    int c; // c = choice
    
    cout << "Choose a selection " << endl
        << "------------------------------------------------\n"
        << "1. Addition\n"
        << "2. Subtraction\n"
        << "3. Multiplication\n"
        <<"4. Division\n"
        << "5. Quit\n";
    cin >> c;
    
    // error catcher
    while (!isValid(c, 1, 5))
    {
        cin >> c;
    }
    return c;
}

bool isValid(int num, int min, int max)// for validating menu
{
    if (num < min || num > max)
    {
        cout << "Invlaid\n\n";
        cout << "Please choose a selection\n"
             << "-------------------------------------------\n"
             << "1. Addition\n"
             << "2. Subtraction\n"
             << "3. Multiplication\n"
             <<"4. Division\n"
             << "5. Quit\n";
        return false;
    }
    else
    {
        return true;
    }
}

void addition()
{
    // declaring the variables
    int num1, num2, min, max, answer, result, attempts;
    
    // how many atempts the user is allowed
    attempts = 3;
    
    min = 2, max = 500,
      num1 = min + (rand() % (max - min + 1));
    min = 1, max = 99;
      num2 = min + (rand() % (max - min + 1));
    
    // error catcher
    while (num2 >= num1)
    {
        num2 = min + (rand() % (max - min + 1));
    }
    result = num1 + num2;
    cout << "Addition:  you have 3 attempts\n";
    cout << setw(5) << num1 << endl
         << "+   "<< num2 << endl
         << "_______\n";
    cin >> answer;
    attempts --;
    while (answer != result && attempts > 0) // this is to calculate how many attempts they have left
    {
        cout << "Sorry that's incorrect. \n";
        cout << attempts << " attempts remaining. \n";
        cout << setw(5) << num1 << endl
            << "+   " << num2 << endl
            << "________\n";
        cin >> answer;
        
        attempts--; // we used minus because we are not adding 1, we are trying to take away 1 from each time they get the answer incorrect
    }
    if (answer == result)
        cout << "Congratulations!\n";
    else
        cout << "Sorry, the answer is "<< result << endl;
}
void subtraction()
{
    // declaring the variables
    int num1, num2, min, max, answer, result, attempts;
    
    // how many atempts the user is allowed
    attempts = 3;
    
    min = 2, max = 500,
      num1 = min + rand() % (max - min + 1);
    min = 1, max = 500;
      num2 = min + rand() % (max - min + 1);
    
    // error catcher
    while (num2 >= num1)
    {
        num2 = min + rand() % (max - min + 1);
    }
    
    // when the user uses all his attempts the result will display the answer
    result = num1 - num2;
    
    cout << "Subtraction:  you have 3 attempts\n";
    cout << setw(5) << num1 << endl
         << "-   "<< num2 << endl
         << "_______\n";
    cin >> answer;
    attempts --;
    // while answer is incorrect and all attempts were used then display the following
    while (answer != result && attempts > 0) // this is to calculate how many attempts they have left
    {
        cout << "Sorry that's incorrect. \n";
        cout << attempts << " attempts remaining. \n";
        cout << setw(3) << num1 << endl
             << "-   " << num2 << endl
             << "________\n";
        cin >> answer;
        
        attempts--; // we used minus because we are not adding 1, we are trying to take away 1 from each time they get the answer incorrect
    }
    if (answer == result)
        cout << "Congratulations!\n";
    else
        cout << "Sorry, the answer is "<< result << endl;
}
void multiplication()
{
    // declaring the variables
    int num1, num2, min, max, answer, result, attempts;
    
    // how many atempts the user is allowed
    attempts = 3;
    
    min = 2, max = 500,
      num1 = min + rand() % (max - min + 1);
    min = 1, max = 500;
      num2 = min + rand() % (max - min + 1);
    
    // error catcher
    while (num2 >= num1)
    {
        num2 = min + rand() % (max - min + 1);
    }
    
    // when the user uses all his attempts the result will display the answer
    result = num1 * num2;
    
    cout << "Subtraction:  you have 3 attempts\n";
    cout << setw(5) << num1 << endl
         << "*   "<< num2 << endl
         << "_______\n";
    cin >> answer;
    attempts --;
    // while answer is incorrect and all attempts were used then display the following
    while (answer != result && attempts > 0) // this is to calculate how many attempts they have left
    {
        cout << "Sorry that's incorrect. \n";
        cout << attempts << " attempts remaining. \n";
        cout << setw(3) << num1 << endl
             << "*   " << num2 << endl
             << "________\n";
        cin >> answer;
        
        attempts--; // we used minus because we are not adding 1, we are trying to take away 1 from each time they get the answer incorrect
    }
    if (answer == result)
        cout << "Congratulations!\n";
    else
        cout << "Sorry, the answer is "<< result << endl;
}

/// fix dividsion to only take integers
void division()
{
    // declaring the variables
    int num1, num2, min, max, answer, result, attempts;
    
    // how many atempts the user is allowed
    attempts = 3;
    
    min = 2, max = 99,
      num1 = min + rand() % (max - min + 1);
    min = 1, max = 10;
      num2 = min + rand() % (max - min + 1);
    
    // error catcher
    while (num2 >= num1)
    {
        num2 = min + rand() % (max - min + 1);
    }
    
    // when the user uses all his attempts the result will display the answer
    result = num1 / num2;
    
    cout << "Subtraction:  you have 3 attempts\n";
    cout << setw(5) << num1 << endl
         << "/   "<< num2 << endl
         << "_______\n";
    cin >> answer;
    attempts --;
    // while answer is incorrect and all attempts were used then display the following
    while (answer != result && attempts > 0) // this is to calculate how many attempts they have left
    {
        cout << "Sorry that's incorrect. \n";
        cout << attempts << " attempts remaining. \n";
        cout << setw(3) << num1 << endl
             << "/   " << num2 << endl
             << "________\n";
        cin >> answer;
        
        attempts--; // we used minus because we are not adding 1, we are trying to take away 1 from each time they get the answer incorrect
    }
    if (answer == result)
        cout << "Congratulations!\n";
    else
        cout << "Sorry, the answer is "<< result << endl;
}
