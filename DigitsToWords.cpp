#include<bits/stdc++.h>

using namespace std;

string digitWord(int n)
{
    switch(n)
    {
        case 1:
        return "one";
    case 2:
        return "two";
    case 3:
        return "three";
    case 4:
        return "four";
    case 5:
        return "five";
    case 6 :
        return "six";
    case 7:
        return "seven";
    case 8:
        return "eight";
    case 9:
        return "nine";
    case 0:
        return "zero";
    }

}

void digitsToWords(int n)
{
    if(n == 0)
        return;

    int k = n % 10;
    digitsToWords(n/10);
    cout<<digitWord(k)<<" ";
}

int main()
{
    int n;
    cout<<"Enter a number \n";
    cin>>n;
    digitsToWords(n);
}
