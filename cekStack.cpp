#include <bits/stdc++.h>
using namespace std;

int main()
{
    int stack1[5], stack2[5], i = 0, input;
    cout << "Masukkan 5 nilai ke dalam data stack 1 (pisahkan setiap nilai dengan enter)" << endl;
    while (i < 5)
    {
        cin >> input;
        stack1[i] = input;
        i++;
    }
    i = 0;
    cout << "Masukkan nilai ke dalam data stack 2 (pisahkan setiap nilai dengan enter)" << endl;
    while (i < 5)
    {
        cin >> input;
        stack2[i] = input;
        i++;
    }
    cout << "Stack 1: ";
    for (i = 0; i < 5; i++)
    {
        cout << stack1[i] << " ";
    }
    cout << endl;
    cout << "Stack 2: ";
    for (i = 0; i < 5; i++)
    {
        cout << stack2[i] << " ";
    }
    cout << endl;
    for(i = 0; i < 5; i++) {
    	if(stack1[i] != stack2[i]) {
    		cout << "Kedua stack tidak sama!" << endl;
    		break;
		}
		if(i == 4) {
			cout << "Kedua stack sama!" << endl;
		}
	}
    return 0;
}