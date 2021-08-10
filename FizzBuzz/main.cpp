#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'checkFizzBuzz' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts INTEGER x as parameter.
 */

string checkFizzBuzz(int x) {
    

    if (x % 5 == 0 && x % 3 == 0){
        return "FizzBuzz";
    }
    else if (x % 5 == 0){
        return "Buzz";
    }
    else if (x % 3 == 0){
        return "Fizz";
    }
    else  
        return to_string(x);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string argX_temp;
    getline(cin, argX_temp);

    int argX = stoi(ltrim(rtrim(argX_temp)));

    string result = checkFizzBuzz(argX);

    fout << result << "\n";

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
