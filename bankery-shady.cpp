#include <iostream>
#include <Windows.h>
using namespace std;

class bakery {
    public:


        float
            a = 20.00,
            b = 10.99,
            c = 12.99,
            d = 14.99,
            e = 14.99,
            f = 16.99,
            g = 18.99,
            h = 5.99,
            i = 6.99,
            j = 2.99,
            k = 1.99,
            l = 5.99,
            m = 6.99,
            n = 3.19,
            o = 5.49;


    void clear() {
        COORD topLeft = { 0, 0 };
        HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
        CONSOLE_SCREEN_BUFFER_INFO screen;
        DWORD written;

        GetConsoleScreenBufferInfo(console, &screen);
        FillConsoleOutputCharacterA(
            console, ' ', screen.dwSize.X * screen.dwSize.Y, topLeft, &written
        );
        FillConsoleOutputAttribute(
            console, FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE,
            screen.dwSize.X * screen.dwSize.Y, topLeft, &written
        );
        SetConsoleCursorPosition(console, topLeft);
    }

    void welcome() {
        cout << "\n\n\n\n\n\n\n\n";
        cout << "\t\t\t\t\t\t\t -------------------------------------------\n";
        cout << "\t\t\t\t\t\t\t|                                           |\n";
        cout << "\t\t\t\t\t\t\t|                                           |\n";
        cout << "\t\t\t\t\t\t\t|                                           |\n";
        cout << "\t\t\t\t\t\t\t|                                           |\n";
        cout << "\t\t\t\t\t\t\t|                  Welcome                  |\n";
        cout << "\t\t\t\t\t\t\t|                     To                    |\n";
        cout << "\t\t\t\t\t\t\t|                                           |\n";
        cout << "\t\t\t\t\t\t\t|       The Cake Lair    System Managemnt   |\n";
        cout << "\t\t\t\t\t\t\t|                                           |\n";
        cout << "\t\t\t\t\t\t\t|                                           |\n";
        cout << "\t\t\t\t\t\t\t|                                           |\n";
        cout << "\t\t\t\t\t\t\t|                                           |\n";
        cout << "\t\t\t\t\t\t\t|       Developed by Islam Abdelbakey       |\n";
        cout << "\t\t\t\t\t\t\t ------ islam.m.abdelbakey @gmail.com-------\n\n";

        cout << "\n\n\n\n\n";

        cout << "\t\tClick Enter to press.........";
        cin.get();
        clear();
    }

    void menu() {
        cout << "\n\n\n\n\n";
        cout << "\t\t\t\t\t\t>> 1-\tlist Items\n\n ";
        cout << "\t\t\t\t\t\t>> 2-\tAdmin Panel\n\n ";
        cout << "\t\t\t\t\t\t>> 3-\tExit\n\n\n";

    }

    void list_items() {
        int q=0;
       char SPECIALTIES, CAKE, BEVERAGES;
     
        clear();
       // cout << "0-   Return MENU\n\n\n\n";
        cout << "\t\t\t\t\t\t\t\tThe Cake Lair    System Managemnt\n\n\n";

        cout << "\t\t                                                           SPECIALTIES                                                      \n";
        cout << "\t\t --------------------------------------------------------------------------------------------------------------------------- \n";
        cout << "\t\t|   A                          |       Chocolate Lava Cake                       |     $20.00                               |\n";
        cout << "\t\t|---------------------------------------------------------------------------------------------------------------------------|\n";
        cout << "\t\t|   B                          |       Chocolate                                 |     $10.99                               |\n";
        cout << "\t\t|---------------------------------------------------------------------------------------------------------------------------|\n";
        cout << "\t\t|   C                          |       Vanille                                   |     $12.99                               |\n";
        cout << "\t\t|---------------------------------------------------------------------------------------------------------------------------|\n";
        cout << "\t\t|   D                          |       Extreme                                   |     $14.99                               |\n";
        cout << "\t\t|---------------------------------------------------------------------------------------------------------------------------|\n";
        cout << "\t\t|   E                          |       Toppers                                   |     $14.99                               |\n";
        cout << "\t\t|---------------------------------------------------------------------------------------------------------------------------|\n";
        cout << "\t\t|   F                          |       Honey Pecan                               |     $16.99                               |\n";
        cout << "\t\t|---------------------------------------------------------------------------------------------------------------------------|\n";
        cout << "\t\t|   G                          |       Toffee Nut                                |     $18.99                               |\n";
        cout << "\t\t --------------------------------------------------------------------------------------------------------------------------- \n";
        cout << "\t\t                                                                                                                             \n";
        cout << "\t\t                                                           CAKE BITES                                                        \n";
        cout << "\t\t --------------------------------------------------------------------------------------------------------------------------- \n";
        cout << "\t\t|   H                          |       Cheese cake                               |     $5.99                                |\n";
        cout << "\t\t|---------------------------------------------------------------------------------------------------------------------------|\n";
        cout << "\t\t|   I                          |       Strawberry                                |     $6.99                                |\n";
        cout << "\t\t|---------------------------------------------------------------------------------------------------------------------------|\n";
        cout << "\t\t|   J                          |       Bon Buns                                  |     $2.99                                |\n";
        cout << "\t\t|---------------------------------------------------------------------------------------------------------------------------|\n";
        cout << "\t\t|   K                          |       12 MN                                     |     $1.99                                |\n";
        cout << "\t\t|---------------------------------------------------------------------------------------------------------------------------|\n";
        cout << "\t\t|   L                          |       Berry Topped                              |     $5.99                                |\n";
        cout << "\t\t|---------------------------------------------------------------------------------------------------------------------------|\n";
        cout << "\t\t|   M                          |       Chocolate cake                            |     $6.99                                |\n";
        cout << "\t\t --------------------------------------------------------------------------------------------------------------------------- \n\n";
        cout << "\t\t                                                            BEVERAGES                                                         \n";
        cout << "\t\t ---------------------------------------------------------------------------------------------------------------------------\n";
        cout << "\t\t|   N                          |      Bottled Water                              |     $3.19                                |\n";
        cout << "\t\t|---------------------------------------------------------------------------------------------------------------------------|\n";
        cout << "\t\t|   O                          |      Milk shake                                 |     $5.49                                |\n";
        cout << "\t\t --------------------------------------------------------------------------------------------------------------------------- \n";
        cout << "\n\n\t\t Place your order :\n\n ";
        
        cout << "\t\tSPECIALTIES: ";
        cin >> SPECIALTIES;
        cout << "\t\tquantity: ";
        cin >> q;

        cout << "\n\t\tCAKE BITES: ";

      cin >> CAKE;
        cout << "\t\tquantity: ";
        cin >> q;

        cout << "\n\t\tBEVERAGES:  ";

        cin >> BEVERAGES;
        cout << "\t\tquantity: ";
        cin >> q;

        cout << "\n\t\tTotal bill: " <<"$" <<(SPECIALTIES *q )+ (CAKE *q)+ (BEVERAGES *q);

        cout << "\n\t\tClick Enter to press.........";
        cin.get();
        
        


    }


    void admin() {
        cout << "good";
    }


    int exit() {
        cout << "\t\tClick Enter to Exit.........";
        cin.get();
        return 0;
    }



};


int main() {
    bakery add;
   add.welcome();
    add.menu();
    int i,c;
    cout << "\t\t\t\t\t\tChoose: ";
    cin >> i;
    if (i == 1) {
        add.list_items();
    }

    else if (i == 2) {
       add.admin();
    }



    else if (i == 3) {
        add.exit();

    }
}
 
