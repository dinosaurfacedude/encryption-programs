#include <iostream>
//This is my double transposition cipher. It rearranges the collumns and rows to encrypt the message, then it
using namespace std;

int encrypt(){

   char plaintext[3][4];
    char ciphertext[3][4];
    char ciphertext2[3][4];
    char letters;
    int level = 0;
    int row = 0;
    for(int i = 0; i < 3; i++){

        for(int k = 0; k < 4; k++){
        cout << "please enter a letter for position ";
        cout << "[" << i << "]" << "[" << k << "]" << "\n";
        cin >> letters;

        plaintext[i][k] = letters;

        }
    }
    cout << "This is the plaintext: \n";
    for(int i = 0; i < 3; i++){

        for(int k = 0; k < 4; k++){
        cout << plaintext[i][k];
        if (k == 3){
        cout << "\n";
        }

        }
        }
    for(int i = 0; i < 3; i++){

    //This block of code rearranges the rows to user specs.
    cout << "what do you want to change row " << i << " to? Type number 1-3.\n";
    cin >> level;
        for(int k = 0; k < 4; k++){
        ciphertext[level - 1][k] = plaintext[i][k];
        }

    }

    //Outputs result for user for demonstration purposes.
    cout << "This is the cipher with the levels mixed up:\n";
    for(int i = 0; i < 3; i++){
        for(int k = 0; k < 4; k++){
        cout << ciphertext[i][k];
        if(k == 3){
            cout <<"\n";
        }
        }

    }

    //This part rearranges the collumns to user specs.
    for(int k = 0; k < 4; k++){
    cout << "what collumn do you want to change collumn " << k << " to? Choose for 1 - 4.\n";
        cin >> row;
        for(int i = 0; i < 3; i++){
        ciphertext2[i][row - 1] = ciphertext[i][k];
        }
}

    //Outputs fully transposed cipher to user.
    cout << "Here is the fully encrypted message: \n";
    for(int i = 0; i < 3; i++){
        for(int k = 0; k < 4; k++){

            cout << ciphertext2[i][k];
            if(k == 3){
            cout << "\n";
            }

        }

    }

return 0;
}

int decrypt(){
cout << "under construction.";

return 0;
}

//Main function. Gives user a menu to choose encryption or decryption.
int main()
{
    int choice;
    cout << "Do You wish to encrypt or decrypt a message? 1 for encrypt and 0 for decrypt.\n";
    cin >> choice;

    if (choice == 1){
    encrypt();
    }
    else if (choice == 0){
    decrypt();
    }

    return 0;
}


