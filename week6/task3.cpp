#include <iostream>
using namespace std;

string findzodiacsign(int day, string month);
main()
{
    cout << "Enter the day of birth: ";
    int Day;
    cin >> Day;
    cout << "Enter the month of birth (e.g., January, February): ";
    string Month;
    cin >> Month;
    string result = findzodiacsign(Day, Month);
    cout << "Zodiac Sign: " << result;
}

string findzodiacsign(int day, string month)
{
    string result;
    if ((month == "March" )&&(day >= 21 && day <=30) || (( month == "April") && (day >=1 && day <= 19)))
    {
        result = "Aries";
    }
    else if (((month == "April" )&&(day >= 20 && day <=30)) || (( month == "May") && (day >=1 && day <= 20)))
    {
        result = "Taurus";
    }
    else if (((month == "May" )&&(day >= 21 && day <=30)) || ( ( month == "June")&& (day >=1 && day <= 20)))
    {
        result = "Gemini";
    }
    else if (((month == "June" )&&(day >= 21 && day <=30) )|| (( month == "July")  && (day >=1 && day <= 22)))
    {
        result = "Cancer";
    }
    else if (((month == "July" )&&(day >= 23 && day <=30)) || (( month == "August") && (day >=1 && day <= 22)))
    {
        result = "Leo";
    }
    else if (((month == "August") && (day >= 23 && day <=30)) || ( (month == "September") && (day >=1 && day <= 22)))
    {
        result = "Vigro";
    }
    else if (((month == "September" )&& (day >= 23 && day <=30)) || (( month == "October") && (day >=1 && day <= 22)))
    {
        result = "Libra";
    }
    else if (((month == "October" )&& (day >= 23 && day <=30)  )|| (( month == "November")&& (day >=1 && day <= 21)))
    {
        result = "Scorpio";
    }
    else if (((month == "November" )&&(day >= 22 && day <=30)) || ( ( month == "December")&& (day >=1 && day <= 21)))
    {
        result = "Sagittarius";
    }
    else if (((month == "December" )&&(day >= 22 && day <=30)) || (( month == "January") && (day >=1 && day <= 19)))
    {
        result = "Capricorn";
    }
    else if (((month == "January" )&&(day >= 20 && day <=30))|| (( month == "February")  && (day >=1 && day <= 18)))
    {
        result = "Aquarius";
    }
    return result;
}
