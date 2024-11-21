#include <iostream>
using namespace std;

int main() {
    // Print numbers from 1 to 10
    cout << "Numbers from 1 to 10:\n";
    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
    }
    cout << "\n\n";

    // Calculate the sum of numbers from 1 to n
    cout << "Enter a number to calculate the sum up to it: ";
    int n,sum = 0;
    cin >>n;
    int i=1;
    while(i<=n) {
        sum+= i;
        i++;
    }
    cout<<"Sum:"<<sum<<"\n\n";

    // Ensure the user enters a positive number
    int number;
    do {
        cout<<"Enter a positive number: ";
        cin>> number;
    } while(number < 0);
    cout<<"You entered:"<<number << "\n\n";

    // Show a multiplication table (5x5)
    cout << "Multiplication table (5x5):\n";
    for (int row = 1; row<=5; row++) {
        for (int col=1;col<= 5; col++) {
            cout<<row*col<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;

    // Skip 5 and stop at 8 in a loop
    cout<<"Loop skipping 5 and breaking at 8:\n";
    for (int i=1;i<=10;i++) {
        if (i==5) continue;
        if (i==8) break;
        cout<<i<< " ";
    }
    cout<< "\n\n";

    // Reverse a number
    cout << "Enter a number to reverse: ";
    int original, reversed = 0;
    cin >> original;
    int temp = original;
    while (temp !=0) {
        reversed =reversed * 10 +temp % 10;
        temp /= 10;
    }
    cout<<"Reversed number:"<<reversed<<"\n\n";

    // Print a pyramid pattern
    cout << "Enter the number of rows for a pyramid: ";
    int rows;
    cin >> rows;
    for (int i=1;1 <= rows; i++) {
        for (int j=1;j<=rows-i; j++) cout << " ";
        for (int k=1;k<=2*i - 1; k++) cout << "*";
        cout << endl;
    }

    return 0;
}
