#include <iostream>

using namespace std;

 void r_print(int n)
{
    if(n > 0)
    {
        cout << n << endl; // n-1 for n-1 to 0, n for n to 1
        r_print(n-1);
    }
}

void r_print_asc(int n)
{
    if(n >0)
    {
        r_print_asc(n-1);
        cout << n << endl;
    }
}

int str_expr()
{
    cout << "StringMatch" << endl;
    char f_name[] = "Siva";
    char *l_name = "S";
    char x[10];
    for (int i=0; i<10; i++)
        x[i] = 'a';
    x[4]='\0';
    cout << x;
    return 0;
}

//this function matches two string based on its pointers
void match(char str1_ptr, char str2_ptr)
{
   cout << "matching strings\n" << str1_ptr << str2_ptr;
}

int main()
{
    cout << "Alter_for_for" << endl;
    //desc order
    cout << "***** desc *****" << endl;
    r_print(25);
    //r_print(0);
    //r_print(-3);
    //r_print(7.8)
    //r_print(-7.9)
    //r_print("helloo")

    //asc order
    cout << "***** asc *****" << endl;
    r_print_asc(5);
    //cout << "Over!" << endl;

    //str match
    char str1[] = "Siva";
    char str2[] = "Si";
    //match(str1, str2);
    return 0;
}
