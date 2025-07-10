#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {
    srand(time(0));
    int secret, userInput, count = 0;

    secret = rand() % 100 + 1;

    cout << "Guess a number between 1 to 100:" << endl;

    do {
        cout << "Enter your guess: ";
        cin >> userInput;
        count++;

        if (userInput > secret) {
            cout << "Too High!" << endl;
        } else if (userInput < secret) {
            cout << "Too Low!" << endl;
        } else {
            cout << "You got it in " << count << " attempts. Great job!" << endl;
        }

    } while (userInput != secret);

    return 0;
}