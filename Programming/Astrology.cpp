#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main() {
      
        string zodiacSign;
        string horoscope;
        string response;
        int month, day;
        bool done = false;

     do {

            // Input validation for birth month
            do
            {
                cout << "Enter your birth month: ";
                cin >> month;
                if (month <= 0 || month > 12)
                {
                    cout << "Invalid input. Birth month must be greater than 0 and less than or equal to  12.\n";
                    cin.clear();// clear error flag
                    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard invalid input
                }
            } while (month <= 0 || month > 12);
    
            // Input validation for birth day
            do
            {
                cout << "Enter your birth day: ";
                cin >> day;
                if (day <= 0 || day >= 31)
                {
                    cout << "Invalid input. Birth day must be between 1 and 31 and it have to be an integer.\n";
                    cin.clear();// clear error flag
                    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard invalid input
                }
            } while (day <= 0 || day >= 31);



            if ((month == 3 && day >= 21) || (month == 4 && day <= 19))
            {
                zodiacSign = "Aries";
                horoscope = "Today is a good day for new beginnings.";
                cout << "Your Zodiac sign is " << zodiacSign << "!" <<  endl << horoscope << endl;
            }
            else if ((month == 4 && day >= 20) || (month == 5 && day <= 20))
            {
                zodiacSign = "Taurus";
                horoscope = "Today is a good day to indulge in your favorite things.";
                cout << "Your Zodiac sign is " << zodiacSign << "!" <<  endl << horoscope << endl;
            }
            else if ((month == 5 && day >= 21) || (month == 6 && day <= 20))
            {
                zodiacSign = "Gemini";
                horoscope = "Today is a good day to connect with friends and loved ones.";
                cout << "Your Zodiac sign is " << zodiacSign << "!" <<  endl << horoscope << endl;
            }
            else if ((month == 6 && day >= 21) || (month == 7 && day <= 22))
            {
                zodiacSign = "Cancer";
                horoscope = "Today is a good day to focus on your home and family.";
                cout << "Your Zodiac sign is " << zodiacSign << "!" <<  endl << horoscope << endl;
            }
            else if ((month == 7 && day >= 23) || (month == 8 && day <= 22))
            {
                zodiacSign = "Leo";
                horoscope = "Today is a good day to let your inner fire shine.";
                cout << "Your Zodiac sign is " << zodiacSign << "!" <<  endl << horoscope << endl;
            }
            else if ((month == 8 && day >= 23) || (month == 9 && day <= 22))
            {
                zodiacSign = "Virgo";
                horoscope = "Today is a good day to focus on practical matters.";
                cout << "Your Zodiac sign is " << zodiacSign << "!" <<  endl << horoscope << endl;
            }
            else if ((month == 9 && day >= 23) || (month == 10 && day <= 22))
            {
                zodiacSign = "Libra";
                horoscope = "Today is a good day to seek balance and harmony.";
                cout << "Your Zodiac sign is " << zodiacSign << "!" <<  endl << horoscope << endl;
            }
            else if ((month == 10 && day >= 23) || (month == 11 && day <= 21))
            {
                zodiacSign = "Scorpio";
                horoscope = "Today is a good day to explore your deepest desires.";
                cout << "Your Zodiac sign is " << zodiacSign << "!" <<  endl << horoscope << endl;
            }
            else if ((month == 11 && day >= 22) || (month == 12 && day <= 21))
            {
                zodiacSign = "Sagittarius";
                horoscope = "Today is a good day to embrace adventure and take risks.";
                cout << "Your Zodiac sign is " << zodiacSign << "!" <<  endl << horoscope << endl;
            }
            else if ((month == 12 && day >= 22) || (month == 1 && day <= 19))
            {
                zodiacSign = "Capricorn";
                horoscope = "Today is a good day to focus on your goals and ambitions.";
                cout << "Your Zodiac sign is " << zodiacSign << "!" <<  endl << horoscope << endl;
            }
            else if ((month == 1 && day >= 20) || (month == 2 && day <= 18))
            {
                zodiacSign = "Aquarius";
                horoscope = "Today is a good day to connect with your community.";
                cout << "Your Zodiac sign is " << zodiacSign << "!" <<  endl << horoscope << endl;
            }
            else if ((month == 2 && day >= 19) || (month = 3 && day <= 20))
            {
                zodiacSign = "Pisces";
                cout << "Your Zodiac sign is " << zodiacSign << "!" <<  endl << horoscope << endl;
            };

            cout << "Do you want to continue? (yes | no): ";
            cin >> response; 
        

    } while (response == "yes");      


    
    
return 0;
}
