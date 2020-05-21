#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;


void simpcalc() {
    char yesno;
    char calcop;
    double num1;
    double num2;
    cout << "\n\n";
    string calc_operations = "Type in the beginning letter of the operation of your choice (i.e. 'a' for addition) : ";
    int calc_operationsx = 0;
    while ( calc_operations[calc_operationsx] != '\0') {
        cout << calc_operations[calc_operationsx];
        Sleep(70);
        calc_operationsx++;
    }
    cin >> calcop;
    cout << "\n";
    string first_number = "Enter first number: ";
    int first_numberx = 0;
    while ( first_number[first_numberx] != '\0') {
        cout << first_number[first_numberx];
        Sleep(70);
        first_numberx++;
    }
    cin >> num1;
    string second_number = "Enter second number:  ";
    int second_numberx = 0;
    while ( second_number[second_numberx] != '\0') {
        cout << second_number[second_numberx];
        Sleep(70);
        second_numberx++;
    }
    cin >> num2;
    if(calcop == 'a') {
        cout << "\n" << num1 << " + " << num2 << " = " << num1 + num2;
        cout << "\n\n";
        string restart = "Would you like to run another calculation? (y/n) ";
        int restartx = 0;
        while ( restart[restartx] != '\0') {
            cout << restart[restartx];
            Sleep(70);
            restartx++;
        }
        cin >> yesno;
        if(yesno == 'y') {
            simpcalc();
        }
        else {
            cout << "\n\n";
            string terminating = "Program terminating. ";
            int terminatingx = 0;
            while ( terminating[terminatingx] != '\0') {
                cout << terminating[terminatingx];
                Sleep(70);
                terminatingx++;
            }
            cout << "\n";
            string dot = ".....";
            int dotx = 0;
            while ( dot[dotx] != '\0') {
                cout << dot[dotx];
                Sleep(1000);
                dotx++;
            }
            terminate();
        }
    }
    else if(calcop == 's') {
        cout << "\n" << num1 << " - " << num2 << " = " << num1 - num2;
        cout << "\n\n";
        string restart = "Would you like to run another calculation? (y/n) ";
        int restartx = 0;
        while ( restart[restartx] != '\0') {
            cout << restart[restartx];
            Sleep(70);
            restartx++;
        }
        cin >> yesno;
        if(yesno == 'y') {
            simpcalc();
        }
        else {
            cout << "\n\n";
            string terminating = "Program terminating. ";
            int terminatingx = 0;
            while ( terminating[terminatingx] != '\0') {
                cout << terminating[terminatingx];
                Sleep(70);
                terminatingx++;
            }
            cout << "\n";
            string dot = ".....";
            int dotx = 0;
            while ( dot[dotx] != '\0') {
                cout << dot[dotx];
                Sleep(1000);
                dotx++;
            }
            terminate();
        }
    }
    else if(calcop == 'm') {
        cout << "\n" << num1 << " * " << num2 << " = " << num1 * num2;
        cout << "\n\n";
        string restart = "Would you like to run another calculation? (y/n) ";
        int restartx = 0;
        while ( restart[restartx] != '\0') {
            cout << restart[restartx];
            Sleep(70);
            restartx++;
        }
        cin >> yesno;
        if(yesno == 'y') {
            simpcalc();
        }
        else {
            cout << "\n\n";
            string terminating = "Program terminating. ";
            int terminatingx = 0;
            while ( terminating[terminatingx] != '\0') {
                cout << terminating[terminatingx];
                Sleep(70);
                terminatingx++;
            }
            cout << "\n";
            string dot = ".....";
            int dotx = 0;
            while ( dot[dotx] != '\0') {
                cout << dot[dotx];
                Sleep(1000);
                dotx++;
            }
            terminate();
        }
    }
    else if(calcop == 'd') {
        cout << "\n" << num1 << " / " << num2 << " = " << num1 / num2;
        cout << "\n\n";
        string restart = "Would you like to run another calculation? (y/n) ";
        int restartx = 0;
        while ( restart[restartx] != '\0') {
            cout << restart[restartx];
            Sleep(70);
            restartx++;
        }
        cin >> yesno;
        if(yesno == 'y') {
            simpcalc();
        }
        else {
            cout << "\n\n";
            string terminating = "Program terminating. ";
            int terminatingx = 0;
            while ( terminating[terminatingx] != '\0') {
                cout << terminating[terminatingx];
                Sleep(70);
                terminatingx++;
            }
            cout << "\n";
            string dot = ".....";
            int dotx = 0;
            while ( dot[dotx] != '\0') {
                cout << dot[dotx];
                Sleep(1000);
                dotx++;
            }
            terminate();
        }
    }
    else {
        cout << "\n";
        string invalid_input = "Invalid Input. Restarting.  ";
        int invalid_inputx = 0;
        while ( invalid_input[invalid_inputx] != '\0') {
            cout << invalid_input[invalid_inputx];
            Sleep(70);
            invalid_inputx++;
        }
        cout << "\n";
        string dot = ".....";
        int dotx = 0;
        while ( dot[dotx] != '\0') {
            cout << dot[dotx];
            Sleep(1000);
            dotx++;
        }
        simpcalc();
    }
}
void exponentcalc() {
    char yesnoexpo;
    int base;
    int exponent;
    cout << "\n\n";
    string intonly = "--Integers only!--";
    int intonlyx = 0;
    while ( intonly[intonlyx] != '\0') {
        cout << intonly[intonlyx];
        Sleep(70);
        intonlyx++;
    }
    cout << "\n";
    string enter_base = "Enter your query's base: ";
    int enter_basex = 0;
    while ( enter_base[enter_basex] != '\0') {
        cout << enter_base[enter_basex];
        Sleep(70);
        enter_basex++;
    }
    cin >> base;
    string enter_exponent = "Enter your query's exponent: ";
    int enter_exponentx = 0;
    while ( enter_exponent[enter_exponentx] != '\0') {
        cout << enter_exponent[enter_exponentx];
        Sleep(70);
        enter_exponentx++;
    }
    cin >> exponent;
    cout << "\n" << base;
    string power_of = " to the power of ";
    int power_ofx = 0;
    while ( power_of[power_ofx] != '\0') {
        cout << power_of[power_ofx];
        Sleep(70);
        power_ofx++;
    }
    Sleep(70);
    cout << exponent;
    Sleep(70);
    string is = " is ";
    int isx = 0;
    while ( is[isx] != '\0') {
        cout << is[isx];
        Sleep(70);
        isx++;
    }
    Sleep(70);
    cout << pow(base, exponent);
    cout << "\n\n";
    string restartexpo = "Would you like to run another calculation? (y/n) ";
    int restartexpox = 0;
    while ( restartexpo[restartexpox] != '\0') {
        cout << restartexpo[restartexpox];
        Sleep(70);
        restartexpox++;
    }
    cin >> yesnoexpo;
    if(yesnoexpo == 'y') {
        exponentcalc();
    }
    else {
        cout << "\n\n";
        string terminating = "Program terminating. ";
        int terminatingx = 0;
        while ( terminating[terminatingx] != '\0') {
            cout << terminating[terminatingx];
            Sleep(70);
            terminatingx++;
        }
        cout << "\n";
        string dot = ".....";
        int dotx = 0;
        while ( dot[dotx] != '\0') {
            cout << dot[dotx];
            Sleep(1000);
            dotx++;
        }
        terminate();
    }
}
void primecalc() {
    char yesnoprime;
    int i;
    int input;
    bool isPrime = true;
// Enter a positive integer:
    cout << "\n\n";
    string enter_pos = "Enter a positive integer: ";
    int enter_posx = 0;
    while ( enter_pos[enter_posx] != '\0') {
        cout << enter_pos[enter_posx];
        Sleep(70);
        enter_posx++;
    }
    cin >> input;
    cout << "\n";
    for(i = 2; i <= input / 2; i++)
    {
        if(input % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime) {
        string yesprime = "This is a prime number.";
        int yesprimex = 0;
        while ( yesprime[yesprimex] != '\0') {
            cout << yesprime[yesprimex];
            Sleep(70);
            yesprimex++;
        }
    }
    else {
        string noprime = "This is not a prime number.";
        int noprimex = 0;
        while ( noprime[noprimex] != '\0') {
            cout << noprime[noprimex];
            Sleep(70);
            noprimex++;
        }
    }
    cout << "\n\n";
    string restartprime = "Would you like to run another calculation? (y/n) ";
    int restartprimex = 0;
    while ( restartprime[restartprimex] != '\0') {
        cout << restartprime[restartprimex];
        Sleep(70);
        restartprimex++;
    }
    cin >> yesnoprime;
    if(yesnoprime == 'y') {
        primecalc();
    }
    else {
        cout << "\n\n";
        string terminating = "Program terminating. ";
        int terminatingx = 0;
        while ( terminating[terminatingx] != '\0') {
            cout << terminating[terminatingx];
            Sleep(70);
            terminatingx++;
        }
        cout << "\n";
        string dot = ".....";
        int dotx = 0;
        while ( dot[dotx] != '\0') {
            cout << dot[dotx];
            Sleep(1000);
            dotx++;
        }
        terminate();
    }
}
int main() {
        cout << "\n\n";
        string welcome = "Welcome. ";
        int welcomex = 0;
        while ( welcome[welcomex] != '\0') {
            cout << welcome[welcomex];
            Sleep(70);
            welcomex++;
        }
        Sleep(1500);
        string directory = "This is a directory for some math tools. ";
        int directoryx = 0;
        while ( directory[directoryx] != '\0') {
            cout << directory[directoryx];
            Sleep(70);
            directoryx++;
        }
        Sleep(1500);
        string option = "Please select an option: ";
        int optionx = 0;
        while ( option[optionx] != '\0') {
            cout << option[optionx];
            Sleep(70);
            optionx++;
        }
        cout << "\n";

        //Choice select screen
        string choice_one = "1. Numeric Calculator";
        int choice_onex = 0;
        while ( choice_one[choice_onex] != '\0') {
            cout << choice_one[choice_onex];
            Sleep(50);
            choice_onex++;
        }
        cout << "\n";
        Sleep(500);
        string choice_two = "2. Exponent Calculator";
        int choice_twox = 0;
        while ( choice_two[choice_twox] != '\0') {
            cout << choice_two[choice_twox];
            Sleep(50);
            choice_twox++;
        }
        cout << "\n";
        Sleep(500);
        string choice_three = "3. Primes Calculator";
        int choice_threex = 0;
        while ( choice_three[choice_threex] != '\0') {
            cout << choice_three[choice_threex];
            Sleep(50);
            choice_threex++;
        }
        cout << "\n\n";
        Sleep(500);
        string selection = "Please make your selection: ";
        int selectionx = 0;
        while ( selection[selectionx] != '\0') {
            cout << selection[selectionx];
            Sleep(50);
            selectionx++;
        }
        int choice;
        cin >> choice;
        if(choice == 1) {
            string accepted = "Accepted. ";
            int acceptedx = 0;
            while ( accepted[acceptedx] != '\0') {
                cout << accepted[acceptedx];
                Sleep(70);
                acceptedx++;
            }
            cout << "\n";
            string dot = ".....";
            int dotx = 0;
            while ( dot[dotx] != '\0') {
                cout << dot[dotx];
                Sleep(1000);
                dotx++;
            }
            simpcalc();
        }
        else if(choice == 2) {
            string accepted = "Accepted. ";
            int acceptedx = 0;
            while ( accepted[acceptedx] != '\0') {
                cout << accepted[acceptedx];
                Sleep(70);
                acceptedx++;
            }
            cout << "\n";
            string dot = ".....";
            int dotx = 0;
            while ( dot[dotx] != '\0') {
                cout << dot[dotx];
                Sleep(1000);
                dotx++;
            }
            exponentcalc();
        }
        else if(choice == 3) {
            string accepted = "Accepted. ";
            int acceptedx = 0;
            while ( accepted[acceptedx] != '\0') {
                cout << accepted[acceptedx];
                Sleep(70);
                acceptedx++;
            }
            cout << "\n";
            string dot = ".....";
            int dotx = 0;
            while ( dot[dotx] != '\0') {
                cout << dot[dotx];
                Sleep(1000);
                dotx++;
            }
            primecalc();
        }
        else {
            string error = "Error. Returning to Menu. ";
            int errorx = 0;
            while ( error[errorx] != '\0') {
                cout << error[errorx];
                Sleep(50);
                errorx++;
            }
            cout << "\n";
            string dot = ".....";
            int dotx = 0;
            while ( dot[dotx] != '\0') {
                cout << dot[dotx];
                Sleep(1000);
                dotx++;
            }
            main();

    }


}