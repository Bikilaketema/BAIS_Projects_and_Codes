#include <iostream>
#include <string>

using namespace std;

int main() {
    string zodiacSign;
    string horoscope;
    int month, day;
    bool done = false;

    cout << "If you want to close the app Type \"exit\"" << endl << endl;
    cout << "Enter your birth month (1-12): ";
    cin >> month;
    cout << "Enter your birth day: ";
    cin >> day;
        


    while(month || day != 0) {    

    while((month > 12 || day > 31)){

        cout << "Please Enter a valid Month and Day!" << endl << "If you want to close the app Type \"exit\"" << endl;
        cout << "Enter your birth month (1-12): ";
        cin >> month;
        cout << "Enter your birth day: ";
        cin >> day;

    }



            if ((month == 3 && day >= 21) || (month == 4 && day <= 19))
            {
                zodiacSign = "Aries";
                horoscope = "Today is a good day for new beginnings.";
                cout << "Your Zodiac sign is " << zodiacSign << "!" <<  endl << horoscope << endl;
                break;
            }
            else if ((month == 4 && day >= 20) || (month == 5 && day <= 20))
            {
                zodiacSign = "Taurus";
                horoscope = "Today is a good day to indulge in your favorite things.";
                cout << "Your Zodiac sign is " << zodiacSign << "!" <<  endl << horoscope << endl;
                break;
            }
            else if ((month == 5 && day >= 21) || (month == 6 && day <= 20))
            {
                zodiacSign = "Gemini";
                horoscope = "Today is a good day to connect with friends and loved ones.";
                cout << "Your Zodiac sign is " << zodiacSign << "!" <<  endl << horoscope << endl;
                break;
            }
            else if ((month == 6 && day >= 21) || (month == 7 && day <= 22))
            {
                zodiacSign = "Cancer";
                horoscope = "Today is a good day to focus on your home and family.";
                cout << "Your Zodiac sign is " << zodiacSign << "!" <<  endl << horoscope << endl;
                break;
            }
            else if ((month == 7 && day >= 23) || (month == 8 && day <= 22))
            {
                zodiacSign = "Leo";
                horoscope = "Today is a good day to let your inner fire shine.";
                cout << "Your Zodiac sign is " << zodiacSign << "!" <<  endl << horoscope << endl;
                break;
            }
            else if ((month == 8 && day >= 23) || (month == 9 && day <= 22))
            {
                zodiacSign = "Virgo";
                horoscope = "Today is a good day to focus on practical matters.";
                cout << "Your Zodiac sign is " << zodiacSign << "!" <<  endl << horoscope << endl;
                break;
            }
            else if ((month == 9 && day >= 23) || (month == 10 && day <= 22))
            {
                zodiacSign = "Libra";
                horoscope = "Today is a good day to seek balance and harmony.";
                cout << "Your Zodiac sign is " << zodiacSign << "!" <<  endl << horoscope << endl;
                break;
            }
            else if ((month == 10 && day >= 23) || (month == 11 && day <= 21))
            {
                zodiacSign = "Scorpio";
                horoscope = "Today is a good day to explore your deepest desires.";
                cout << "Your Zodiac sign is " << zodiacSign << "!" <<  endl << horoscope << endl;
                break;
            }
            else if ((month == 11 && day >= 22) || (month == 12 && day <= 21))
            {
                zodiacSign = "Sagittarius";
                horoscope = "Today is a good day to embrace adventure and take risks.";
                cout << "Your Zodiac sign is " << zodiacSign << "!" <<  endl << horoscope << endl;
                break;
            }
            else if ((month == 12 && day >= 22) || (month == 1 && day <= 19))
            {
                zodiacSign = "Capricorn";
                horoscope = "Today is a good day to focus on your goals and ambitions.";
                cout << "Your Zodiac sign is " << zodiacSign << "!" <<  endl << horoscope << endl;
                break;
            }
            else if ((month == 1 && day >= 20) || (month == 2 && day <= 18))
            {
                zodiacSign = "Aquarius";
                horoscope = "Today is a good day to connect with your community.";
                cout << "Your Zodiac sign is " << zodiacSign << "!" <<  endl << horoscope << endl;
                break;
            }
            else if ((month == 2 && day >= 19) || (month = 3 && day <= 20))
            {
                zodiacSign = "Pisces";
                horoscope = "Today is a day of surprising abundance for you, Pisces.";
                cout << "Your Zodiac sign is " << zodiacSign << "!" <<  endl << horoscope << endl;
                break;
            };


    } 

}
