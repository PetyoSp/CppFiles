#include <iostream>
#include <string>
using namespace std;


bool isCorrectDateOfEGN(string yymmdd){
    if (yymmdd.length() != 6)
        return false;

    int dayspermon[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    int month, day, year;

    year = atoi(yymmdd.substr(0, 2).c_str());
    month = atoi(yymmdd.substr(2, 2).c_str());
    day = atoi(yymmdd.substr(4, 2).c_str());

    if (!(year != 0 && month != 0 && day != 0))
        return false;
    if (year < 0 || month < 1 || day < 1){
        return false;
    }

    if (month > 13 && month < 20){
        return false;
    }
    else if (month > 21 && month < 32) {
        month = month - 20;
    }
    else if (month > 33 && month < 40){
        return false;
    }
    else if (month > 41 && month < 52){
        month = month - 40;
    }
    else if (month > 52){
    return false;
    }

    if (month == 2)
    if ((year % 4) == 0)
    dayspermon[2] = 29;

    if (day > dayspermon[month - 1]){
        return false;
    }

    return true;
}


bool chechEGN(string egn){

    int ctrSum = 0;

    int ctrField = 0;

    int teglo[] = { 2, 4, 8, 5, 10, 9, 7, 3, 6 };

    if (egn.length() != 10)
        return false;


    long long tmpEgn = atoi(egn.c_str());
    if(tmpEgn == 0)
        return false;

    if (!isCorrectDateOfEGN(egn.substr(0, 6))){
        return false;
    }


    for (int i = 0; i < egn.length() - 1; ++i)
        ctrSum += teglo[i] * atoi(egn.substr(i, 1).c_str());


    ctrField = (ctrSum % 11) % 10;

    if (ctrField != atoi(egn.substr(9, 1).c_str()))
        return false;
    else return true;
}

int main()
{
    string test = "7209273109";
    cout << boolalpha << chechEGN(test) << endl;
    system("pause");
return 0;
}
