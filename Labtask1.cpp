#include <iostream>

using namespace std;
//numeric constant

bool numericConstant()

{

    string input;

    cout << "Enter input: ";

    cin >> input;

    bool numeric = true;

    for(int i = 0; i < input.length(); i++)

    {

        int ascii = input[i];

        if(ascii < 48 || ascii > 57)

        {

            numeric = false;

        }

    }

    if(numeric)

        cout << "Numeric Constant" << endl;

    else

        cout << "Not Numeric" << endl;

}
//operator check
bool operatorCheck()

{

    string input;

    bool found = false;

    cout << "Enter expression: ";

    cin >> input;

    for(int i = 0; i < input.length(); i++)

    {

        if(input[i] == '+' ||input[i] == '-' ||input[i] == '*' ||input[i] == '/' ||input[i] == '%' ||input[i] == '=')

        {

            cout << "operator: " << input[i] << endl;
        }
        }
        return found;
}
//comment check
bool commentCheck()

{

    string input;

    cout << "Enter comment: ";

    getline(cin >> ws, input);

    bool comment = false;

    if(input.substr(0, 2) == "//")

    {

        cout << "Single Line Comment" << endl;

        comment = true;

    }

    else if(input.substr(0, 2) == "/*" &&

            input.substr(input.length() - 2) == "*/")

    {

        cout << "Multiple Line Comment" << endl;

        comment = true;

    }

    else

    {

        cout << "Not a Comment" << endl;

    }

    return comment;
}
bool identifierCheck()

{

    string input;

    cout << "Enter identifier: ";

    cin >> input;

    bool valid = true;

    if(!(isalpha(input[0]) || input[0] == '_'))

    {

        valid = false;

    }

    for(int i = 1; i < input.length(); i++)

    {

        if(!(isalnum(input[i]) || input[i] == '_'))

        {

            valid = false;

        }

    }

    if(valid)

        cout << "Valid Identifier" << endl;

    else

        cout << "Invalid Identifier" << endl;

    return valid;
}

int main()
{
    numericConstant();
   operatorCheck();
    commentCheck();
    identifierCheck();
    return 0;
}
