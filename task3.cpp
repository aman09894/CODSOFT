#include<iostream>
using namespace std;

char grid[3][3];

void init() {
    char c = '1';
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            grid[i][j] = c++;
}

void show() {
    cout << "\n";
    for (int i = 0; i < 3; i++) {
        cout << " ";
        for (int j = 0; j < 3; j++) {
            cout << grid[i][j];
            if (j < 2) cout << " | ";
        }
        if (i < 2) cout << "\n---|---|---\n";
    }
    cout << "\n";
}

bool mark(char pos, char sym) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (grid[i][j] == pos) {
                grid[i][j] = sym;
                return true;
            }
    return false;
}

bool win(char sym) {
    for (int i = 0; i < 3; i++)
        if ((grid[i][0] == sym && grid[i][1] == sym && grid[i][2] == sym) ||
            (grid[0][i] == sym && grid[1][i] == sym && grid[2][i] == sym))
            return true;

    if ((grid[0][0] == sym && grid[1][1] == sym && grid[2][2] == sym) ||
        (grid[0][2] == sym && grid[1][1] == sym && grid[2][0] == sym))
        return true;

    return false;
}

bool full() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (grid[i][j] != 'X' && grid[i][j] != 'O')
                return false;
    return true;
}

int main() {
    init();
    char p = 'X';
    char inp;

    while (true) {
        show();
        cout << "Player " << p << " move: ";
        cin >> inp;

        if (!mark(inp, p)) {
            cout << "Invalid move, try again.\n";
            continue;
        }

        if (win(p)) {
            show();
            cout << "Player " << p << " wins!\n";
            break;
        }

        if (full()) {
            show();
            cout << "It's a draw!\n";
            break;
        }

        p = (p == 'X') ? 'O' : 'X';
    }

    return 0;
}