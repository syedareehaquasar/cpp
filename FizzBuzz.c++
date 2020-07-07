#include <iostream>
#include <vector>
#include <string>

string next(int n)
{
    if (n % 15 == 0)
        return "FIZZBUZZ";
    else if (n % 3 == 0)
        return "FIZZ";
    else if (n % 5 == 0)
        return "BUZZ";
    return to_string(n);
}

// int main()