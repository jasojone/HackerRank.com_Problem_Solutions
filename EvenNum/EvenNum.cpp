#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'checkEven' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts INTEGER i as parameter.

**PROBLEM**
 An even number is divisible by 2 and an odd number is not. Your task is to write code that determines if an integer is divisible by 2 or not.

Given an integer, i, greater than zero, if i is even, return the string "true". If i is odd, return the string "false".

Input Format

Input is a single integer, i.

Constraints

0 < i <= 1000

Output Format

Output is a single string, either "true" or "false".

Sample Input 0

4
Sample Output 0

true
Explanation 0

4 is an even number since 4 is divisible by 2. The program returns "true".

Sample Input 1

3
Sample Output 1

false
Explanation 1

Since 3 is NOT divisible by 2 it is odd. The program returns "false".
 */

string checkEven(int i) {
    if (i % 2 == 0){
        return "true"; 
    }
    else {
        return "false";
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string anInt_temp;
    getline(cin, anInt_temp);

    int anInt = stoi(ltrim(rtrim(anInt_temp)));

    string isEven = checkEven(anInt);

    fout << isEven << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
