#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
void showLogin();
void handleBooking();
void viewAvailableRooms();
class Welcome{
    public:
        void printAnimated(string text, int delay = 40)
        {
            for(char c:text)
            {
                cout<<c;
                Sleep(delay);
            }
            cout<<endl;
        }
        void showWelcomeScreen()
        {
            system("cls");
            printAnimated("==============================================");
            printAnimated("      Welcome to KaLax GrandStay ");
            printAnimated("     Where Every Stay Feels Grand ");
            printAnimated("==============================================\n");
            Sleep(500);
            cout << " Please select an option:\n";
            cout << "----------------------------------------------\n";
            cout << "1. Login (For Employees Only)\n";
            cout << "2. Booking (For Guests)\n";
            cout << "3. View Available Rooms\n";
            cout << "----------------------------------------------\n";
            cout << "Enter your choice (1-3): ";
            }
};
void showLogin(){
    /*Kabindra Panta*/
}
void handleBooking(){
    /*Kabindra Panta*/
}
void viewAvailableRooms(){
    /* Panta*/
}


int main()
{
    int choice;
    Welcome W;
    W.showWelcomeScreen();
    cin>>choice;
        switch (choice) {
        case 1:
            showLogin();
            break;
        case 2:
            handleBooking();
            break;
        case 3:
            viewAvailableRooms();
            break;
        default:
            cout << "Invalid choice! Please restart.\n";
            break;
    }
    getch();
    return 0;
}