// Author: Muhuliseni Mbau
#include <iostream>
#include <cstring>

int main()
{
    using namespace std;
    char string1[11];
    strcpy(string1, "My name ");
    char string2[10] = "My name ";
    int index = 0;
    int SIZE = strlen(string1);
    cout << string1 << endl;

    if (strcmp(string1, string2))
    {
        cout << "The strings are not the same.";
    }

    cout << strcat(string1, string2);
    while ((string1[index] != '\0') && (index < SIZE))
    {
        string1[index] = 'm';
        index++;
    }

    cout<<string1;
    char a[50];
    cout << "Enter some input:\n";
    cin.getline(a, 50);
    cout<<a<<endl;

    int x = atoi("123");
    cout << x;

    int y = atoi("#123#");
    cout << y;

}
