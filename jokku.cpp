#include <iostream>
#include <thread>

using namespace std;

class tunnus
{
    private:
    string username;
    string password;

    public:
    void luoTunnus(string u, string p)
    {
        username = u;
        password = p;
    }

    string usernams()
    {
        return username;
    }

    string passwors()
    {
        return password;
    }
};

int main()
{
    tunnus pelaaja1;
    pelaaja1.luoTunnus("empty", "empty");
    tunnus pelaaja2;
    pelaaja2.luoTunnus("empty", "empty");
    tunnus pelaaja3;
    pelaaja3.luoTunnus("empty", "empty");
    start:
    using namespace std::this_thread;
    using namespace std::chrono_literals;

    cout << "1. kirjaudu sisaan" << endl;
    cout << "2. rekisteroidy" << endl;
    cout << "                      " << endl;
    int vastaus;
    cin >> vastaus;

    if(vastaus == 2)
    {
        cout << "\033[2J\033[1;1H";
        cout << "choose save slot: " << endl;
        cout << "1. " + pelaaja1.usernams() << endl;
        cout << "2. " + pelaaja2.usernams() << endl;
        cout << "3. " + pelaaja3.usernams() << endl;
        int valinta;
        cin >> valinta;

        if(valinta == 1)
        {
            string username1;
            string password1;
            cout << "choose username: ";
            cin >> username1;
            cout << "choose password: ";
            cin >> password1;
            pelaaja1.luoTunnus(username1, password1);
            cout << "\033[2J\033[1;1H";
            cout << "account created successfully!" << endl;
            sleep_for(2s);
            goto start;
        }
        if(valinta == 2)
        {
            string username2;
            string password2;
            cout << "choose username: ";
            cin >> username2;
            cout << "choose password: ";
            cin >> password2;
            pelaaja2.luoTunnus(username2, password2);
            cout << "\033[2J\033[1;1H";
            cout << "account created successfully!" << endl;
            sleep_for(2s);
            goto start;
        }

        if(valinta == 3)
        {
            string username3;
            string password3;
            cout << "choose username: ";
            cin >> username3;
            cout << "choose password: ";
            cin >> password3;
            pelaaja3.luoTunnus(username3, password3);
            cout << "\033[2J\033[1;1H";
            cout << "account created successfully!" << endl;
            sleep_for(2s);
            goto start;
        }
    }

    if(vastaus == 1)
    {
        cout << "\033[2J\033[1;1H";
        cout << "valitse hahmo: " << endl;
        cout << "1. " + pelaaja1.usernams() << endl; 
        cout << "2. " + pelaaja2.usernams() << endl;
        cout << "3. " + pelaaja3.usernams() << endl;
        cout << "                            " << endl;
        int answer;
        string loginUser;
        string loginPass;
        cin >> answer;
        if(answer == 1)
        {
            cout << "username: ";
            cin >> loginUser;
            cout << "password: ";
            cin >> loginPass;
            if(loginUser == pelaaja1.usernams() && loginPass == pelaaja1.passwors())
            {
                cout << "\033[2J\033[1;1H";
                cout << "successfully logged in" << endl;
            }
            else
            {
                cout << "\033[2J\033[1;1H";
                cout << "incorrect username or password" << endl;
            }
        }

        if(answer == 2)
        {
            cout << "username: ";
            cin >> loginUser;
            cout << "password: ";
            cin >> loginPass;
            if(loginUser == pelaaja2.usernams() && loginPass == pelaaja2.passwors())
            {
                cout << "\033[2J\033[1;1H";
                cout << "successfully logged in" << endl;
            }
            else
            {
                cout << "\033[2J\033[1;1H";
                cout << "incorrect username or password" << endl;
            }
        }

        if(answer == 3)
        {
            cout << "username: ";
            cin >> loginUser;
            cout << "password: ";
            cin >> loginPass;
            if(loginUser == pelaaja3.usernams() && loginPass == pelaaja3.passwors())
            {
                cout << "\033[2J\033[1;1H";
                cout << "successfully logged in" << endl;
            }
            else
            {
                cout << "\033[2J\033[1;1H";
                cout << "incorrect username or password" << endl;
            }
        }
    }

    return 0;
}