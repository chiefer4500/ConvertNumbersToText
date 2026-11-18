#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<iomanip>


using namespace std;



string ConvertNumberToText(int n) {
    if (n == 0) {
        return "";
    }
    if (n >= 1 && n <= 19) {


        string arr[] = {
          "",
       "One", "Two","Three","Four","Five", "Six","Seven","Eight","Nine","Ten", "Eleven", "Twelve","Thirteen", "Fourteen","Fifteen", "Sixteen",
       "Seventeen", "Eighteen", "Nineteen" };
        return arr[n] + " ";

    }
    else if (n >= 20 && n <= 99)
    {
        string arr[] = { "", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety" };
        return arr[n / 10] + " " + ConvertNumberToText(n % 10);

    }
    else if (n >= 100 && n <= 199) {
        return "One Hundred " + ConvertNumberToText(n % 100);
    }
    else if (n >= 200 && n <= 999) {

        return ConvertNumberToText(n / 100) + "Hundred " +
            ConvertNumberToText(n % 100);

    }

    else if (n >= 1000 && n <= 1999) {


        return  "One Thousand  " + ConvertNumberToText(n % 1000);
    }
    else if (n >= 2000 && n <= 999999) {

        return ConvertNumberToText(n / 1000) + "Thousand " + ConvertNumberToText(n % 1000);
    }

    else if (n >= 1000000 && n <= 1999999) {


        return  "One Million " + ConvertNumberToText(n % 1000000);
    }

    else if (n >= 2000000 && n <= 999999999) {


        return  ConvertNumberToText(n / 1000000) + "Million " + ConvertNumberToText(n % 1000000);
    }
    else if (n >= 1000000000 && n <= 1999999999) {


        return  "One Billion " + ConvertNumberToText(n % 1000000000);
    }
    else
    {
        return ConvertNumberToText(n / 1000000000) + "Billion " +
            ConvertNumberToText(n % 1000000000);
    }

}

int ReadNumber() {
    int number;
    cout << "enter a number to conver to a text..[NO NEGATIVE NUMBERS]\n";

    cin >> number;
    return number;
}





int main() {


    int number = ReadNumber();

    cout << ConvertNumberToText(number) << endl << endl;

    ////to test
    //    15 — Tests the teens range(11–19).
    //    42 — Tests compound tens and units("Forty Two").
    //    100 — Tests exact hundred boundary("One Hundred").
    //    312 — Tests hundreds with a remainder("Three Hundred Twelve").
    //    1000 — Tests exact thousand boundary("One Thousand").
    //    45123 — Tests multi - digit thousands combination.
    //    1000000 — Tests exact one million boundary("One Million").
    //    1500000 — Tests the 1M–1.9M range block specifically.
    //    2500000 — Tests multi - million scaling with a remainder.




    return 0;
}