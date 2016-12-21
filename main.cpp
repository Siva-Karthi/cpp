#include <iostream>
//#include <string.h>
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

/**
  * cpp string brush up
  */
/*
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
   */

/**
  * this function matches two string based on its pointers
  */
int str_cmp(char *s1, char *s2){
    while(*s1 == *s2){
        if(*s1 == '\0')
           return 0;
        s1++;
        s2++;
    }
    return 1;
}

/**
  * this function matches two string based on given strings
  */
/*
int match_str(char str1[], char str2[])
{
   cout << "matching strings " << str1 << " " << str2 << endl;
   int str1_len = strlen(str1);
   int str2_len = strlen(str2);
   if (str1_len == str2_len)
   {
       for (int i = 0; i< str1_len; i++)
       {
           if (str1[i] != str2[i])
           {
               return 1;
           }
       }
   }
   else
   {
   return 1;
   }
   return 0;
}
*/

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
    cout << "***** String Match *****" << endl;
    char str1[100]; //since its going to be user input restrict length and R&D why not it could be char str1[100];
    char str2[100];
    cout << "Enter first string to compare" << endl;
    cin >> str1;
    cout << "Enter second string to compare" << endl;
    cin >> str2;
    cout << "str = " << str1 <<endl;
    cout << "str = " << str2 <<endl;

    /**
      * normal way using input strings directly
      */
    // int is_matched = match_str(str1, str2);

      // its utilizing strlen function from the library string.h
      // but string.h uses pointer internally, then why not to use a pointer Directly
      // less LOC
      // complex

    /**
      * string comparision using pointer way
      */
    int is_matched = str_cmp(str1,str2);
    // higher readability, less complexity
    // No library used

    if (is_matched == 0)
    {
        cout << "MATCH";
    }
    else
    {
        cout << "NOT MATCH";
    }
    return 0;
}
