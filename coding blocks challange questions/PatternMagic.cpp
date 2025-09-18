#include <iostream>
using namespace std;

int main() {
    int N;
    cin>>N;
  // Top half (including middle row)
    for (int i = 0; i < N; i++) {
        int stars = N - i;               
        int spaces = 2 * i - 1;     
        int rightStars = N - i; 
        for (int j = 0; j < stars; j++) cout << '*';
        for (int j = 0; j < spaces; j++) cout << ' ';
        for (int j = 0; j < rightStars; j++) cout << '*';

        cout << '\n';
    }

    // Bottom half (mirror of top)
    for (int i = N - 2; i >= 0; i--) {
        int stars = N - i;
        int spaces = 2 * i - 1;
        int rightStars = N-i;

        for (int j = 0; j < stars; j++) cout << '*';
        for (int j = 0; j < spaces; j++) cout << ' ';
        for (int j = 0; j < rightStars; j++) cout << '*';
        cout << '\n';
    }

    return 0;
}
