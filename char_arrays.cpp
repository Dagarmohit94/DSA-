#include <iostream>
using namespace std;

/* bool palindrome(char arr[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        if (arr[s] == arr[e])
        {
            s++;
            e--;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

void reverse(char arr[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

int getlenght(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[20];
    cout << "Enter names : ";
    cin >> name;
    int len = getlenght(name);
    cout << "Length is : " << len << endl;
    cout << "String is : ";
    reverse(name, len);
    for (int i = 0; i < len; i++)
    {
        cout << name[i] << " ";
    }
    cout << endl
/*  << "pelindrome or not :" << palindrome(name, len);
}