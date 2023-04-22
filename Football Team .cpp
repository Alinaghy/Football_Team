#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

void show_all()
{
    system("clear");
    cout << "name"
         << "        "
         << "city"
         << "        "
         << "coach"
         << "        "
         << "player1"
         << "        "
         << "player2"
         << "        "
         << "player3"
         << "        "
         << "player4"
         << "        "
         << "player5"
         << "        "
         << "player6"
         << "        "
         << "player7"
         << "        "
         << "player8"
         << "        "
         << "player9"
         << "        "
         << "player10"
         << "        "
         << "player11"
         << "           "
         << "score" << endl;

    char name[25];
    char city[25];
    char coach[25];
    char player1[25];
    char player2[25];
    char player3[25];
    char player4[25];
    char player5[25];
    char player6[25];
    char player7[25];
    char player8[25];
    char player9[25];
    char player10[25];
    char player11[25];
    char score[25];
    fstream myfile;
    myfile.open("Teams.txt", ios::in);

    while (!myfile.eof())
    {
        myfile.getline(name, 25, '|');
        myfile.getline(city, 25, '|');
        myfile.getline(coach, 25, '|');
        myfile.getline(player1, 25, '|');
        myfile.getline(player2, 25, '|');
        myfile.getline(player3, 25, '|');
        myfile.getline(player4, 25, '|');
        myfile.getline(player5, 25, '|');
        myfile.getline(player6, 25, '|');
        myfile.getline(player7, 25, '|');
        myfile.getline(player8, 25, '|');
        myfile.getline(player9, 25, '|');
        myfile.getline(player10, 25, '|');
        myfile.getline(player11, 25, '|');
        myfile.getline(score, 25);

        

        cout << name << "        "
             << city << "        "
             << coach << "        "
             << player1 << "        "
             << player2 << "        "
             << player3 << "        "
             << player4 << "        "
             << player5 << "        "
             << player6 << "        "
             << player7 << "        "
             << player8 << "        "
             << player9 << "        "
             << player10 << "        "
             << player11 << "        "
             << score << endl;
    }
}

void enter()
{
    system("clear");
    char name[25];
    char city[25];
    char coach[25];
    char player1[25];
    char player2[25];
    char player3[25];
    char player4[25];
    char player5[25];
    char player6[25];
    char player7[25];
    char player8[25];
    char player9[25];
    char player10[25];
    char player11[25];
    char score[25];

    cin.ignore();
    cout << "enter the name" << endl;
    cin.getline(name, 25);
    cout << "enter the city" << endl;
    cin.getline(city, 25);
    cout << "enter the coach" << endl;
    cin.getline(coach, 25);
    cout << "enter the player1" << endl;
    cin.getline(player1, 25);
    cout << "enter the player2" << endl;
    cin.getline(player2, 25);
    cout << "enter the player3" << endl;
    cin.getline(player3, 25);
    cout << "enter the player4" << endl;
    cin.getline(player4, 25);
    cout << "enter the player5" << endl;
    cin.getline(player5, 25);
    cout << "enter the player6" << endl;
    cin.getline(player6, 25);
    cout << "enter the player7" << endl;
    cin.getline(player7, 25);
    cout << "enter the player8" << endl;
    cin.getline(player8, 25);
    cout << "enter the player9" << endl;
    cin.getline(player9, 25);
    cout << "enter the player10" << endl;
    cin.getline(player10, 25);
    cout << "enter the player11" << endl;
    cin.getline(player11, 25);
    cout << "enter the score" << endl;
    cin.getline(score, 25);

    system("clear");
    ofstream myfile;
    myfile.open("Teams.txt", ios::app);
    myfile << name << "|"
           << city << "|"
           << coach << "|"
           << player1 << "|"
           << player2 << "|"
           << player3 << "|"
           << player4 << "|"
           << player5 << "|"
           << player6 << "|"
           << player7 << "|"
           << player8 << "|"
           << player9 << "|"
           << player10 << "|"
           << player11 << "|"
           << score << endl;
    myfile.close();
    cout << "team added !!" << endl;
}

void search()
{
    system("clear");
    char name[25];
    char city[25];
    char coach[25];
    char player1[25];
    char player2[25];
    char player3[25];
    char player4[25];
    char player5[25];
    char player6[25];
    char player7[25];
    char player8[25];
    char player9[25];
    char player10[25];
    char player11[25];
    char score[25];
    char serched[25];
    fstream myfile;
    myfile.open("Teams.txt", ios::in);
    cin.ignore();
    cout << "enter the name" << endl;
    cin.getline(serched, 25);
    system("clear");
    while (!myfile.eof())
    {
        myfile.getline(name, 25, '|');
        myfile.getline(city, 25, '|');
        myfile.getline(coach, 25, '|');
        myfile.getline(player1, 25, '|');
        myfile.getline(player2, 25, '|');
        myfile.getline(player3, 25, '|');
        myfile.getline(player4, 25, '|');
        myfile.getline(player5, 25, '|');
        myfile.getline(player6, 25, '|');
        myfile.getline(player7, 25, '|');
        myfile.getline(player8, 25, '|');
        myfile.getline(player9, 25, '|');
        myfile.getline(player10, 25, '|');
        myfile.getline(player11, 25, '|');
        myfile.getline(score, 25);
        if (strcmp(name, serched) == 0)
        {
            cout << "name"
                 << "        "
                 << "city"
                 << "        "
                 << "coach"
                 << "        "
                 << "player1"
                 << "        "
                 << "player2"
                 << "        "
                 << "player3"
                 << "        "
                 << "player4"
                 << "        "
                 << "player5"
                 << "        "
                 << "player6"
                 << "        "
                 << "player7"
                 << "        "
                 << "player8"
                 << "        "
                 << "player9"
                 << "        "
                 << "player10"
                 << "        "
                 << "player11"
                 << "           "
                 << "score" << endl;

            cout << name << "        "
                 << city << "        "
                 << coach << "        "
                 << player1 << "        "
                 << player2 << "        "
                 << player3 << "        "
                 << player4 << "        "
                 << player5 << "        "
                 << player6 << "        "
                 << player7 << "        "
                 << player8 << "        "
                 << player9 << "        "
                 << player10 << "        "
                 << player11 << "        "
                 << score << endl;
        }
    }

    myfile.close();
}

void edit_data()
{
    system("clear");
    fstream myfile;
    fstream testt;
    myfile.open("Teams.txt", ios::in);
    testt.open("Temp.txt", ios::out);
    char name[25];
    char city[25];
    char coach[25];
    char player1[25];
    char player2[25];
    char player3[25];
    char player4[25];
    char player5[25];
    char player6[25];
    char player7[25];
    char player8[25];
    char player9[25];
    char player10[25];
    char player11[25];
    char score[25];
    char serched[25];
    cin.ignore();
    cout << "enter name to update data" << endl;
    cin.getline(serched, 25);
    system("clear");
    while (!myfile.eof())
    {
        myfile.getline(name, 25, '|');
        myfile.getline(city, 25, '|');
        myfile.getline(coach, 25, '|');
        myfile.getline(player1, 25, '|');
        myfile.getline(player2, 25, '|');
        myfile.getline(player3, 25, '|');
        myfile.getline(player4, 25, '|');
        myfile.getline(player5, 25, '|');
        myfile.getline(player6, 25, '|');
        myfile.getline(player7, 25, '|');
        myfile.getline(player8, 25, '|');
        myfile.getline(player9, 25, '|');
        myfile.getline(player10, 25, '|');
        myfile.getline(player11, 25, '|');
        myfile.getline(score, 25);
        if (strcmp(serched, name) == 0)
        {

            cout << "enter the city" << endl;
            cin.getline(city, 25);
            cout << "enter the coach" << endl;
            cin.getline(coach, 25);
            cout << "enter the player1" << endl;
            cin.getline(player1, 25);
            cout << "enter the player2" << endl;
            cin.getline(player2, 25);
            cout << "enter the player3" << endl;
            cin.getline(player3, 25);
            cout << "enter the player4" << endl;
            cin.getline(player4, 25);
            cout << "enter the player5" << endl;
            cin.getline(player5, 25);
            cout << "enter the player6" << endl;
            cin.getline(player6, 25);
            cout << "enter the player7" << endl;
            cin.getline(player7, 25);
            cout << "enter the player8" << endl;
            cin.getline(player8, 25);
            cout << "enter the player9" << endl;
            cin.getline(player9, 25);
            cout << "enter the player10" << endl;
            cin.getline(player10, 25);
            cout << "enter the player11" << endl;
            cin.getline(player11, 25);
            cout << "enter the score" << endl;
            cin.getline(score, 25);

            testt << name << "|"
                 << city << "|"
                 << coach << "|"
                 << player1 << "|"
                 << player2 << "|"
                 << player3 << "|"
                 << player4 << "|"
                 << player5 << "|"
                 << player6 << "|"
                 << player7 << "|"
                 << player8 << "|"
                 << player9 << "|"
                 << player10 << "|"
                 << player11 << "|"
                 << score << endl;
        }
        else
        {
            testt << name << "|"
                 << city << "|"
                 << coach << "|"
                 << player1 << "|"
                 << player2 << "|"
                 << player3 << "|"
                 << player4 << "|"
                 << player5 << "|"
                 << player6 << "|"
                 << player7 << "|"
                 << player8 << "|"
                 << player9 << "|"
                 << player10 << "|"
                 << player11 << "|"
                 << score << endl;
        }
    }

    myfile.close();
    testt.close();

    myfile.open("Teams.txt", ios::out);
    testt.open("Temp.txt", ios::in);
    while (!testt.eof())
    {
        testt.getline(name, 25, '|');
        testt.getline(city, 25, '|');
        testt.getline(coach, 25, '|');
        testt.getline(player1, 25, '|');
        testt.getline(player2, 25, '|');
        testt.getline(player3, 25, '|');
        testt.getline(player4, 25, '|');
        testt.getline(player5, 25, '|');
        testt.getline(player6, 25, '|');
        testt.getline(player7, 25, '|');
        testt.getline(player8, 25, '|');
        testt.getline(player9, 25, '|');
        testt.getline(player10, 25, '|');
        testt.getline(player11, 25, '|');
        testt.getline(score, 25);

        myfile << name << "|"
               << city << "|"
               << coach << "|"
               << player1 << "|"
               << player2 << "|"
               << player3 << "|"
               << player4 << "|"
               << player5 << "|"
               << player6 << "|"
               << player7 << "|"
               << player8 << "|"
               << player9 << "|"
               << player10 << "|"
               << player11 << "|"
               << score << endl;
    }
    myfile.close();
    testt.close();
    remove("Temp.txt");
    cout << "done!!" << endl;
}

void delet_data()
{
    system("clear");
    fstream myfile;
    fstream testt;
    myfile.open("Teams.txt", ios::in);
    testt.open("Temp.txt", ios::out);
    char name[25];
    char city[25];
    char coach[25];
    char player1[25];
    char player2[25];
    char player3[25];
    char player4[25];
    char player5[25];
    char player6[25];
    char player7[25];
    char player8[25];
    char player9[25];
    char player10[25];
    char player11[25];
    char score[25];
    char serched[25];
    cin.ignore();
    cout << "enter the name to delete" << endl;
    cin.getline(serched, 25);
    system("clear");
    while (!myfile.eof())
    {
        myfile.getline(name, 25, '|');
        myfile.getline(city, 25, '|');
        myfile.getline(coach, 25, '|');
        myfile.getline(player1, 25, '|');
        myfile.getline(player2, 25, '|');
        myfile.getline(player3, 25, '|');
        myfile.getline(player4, 25, '|');
        myfile.getline(player5, 25, '|');
        myfile.getline(player6, 25, '|');
        myfile.getline(player7, 25, '|');
        myfile.getline(player8, 25, '|');
        myfile.getline(player9, 25, '|');
        myfile.getline(player10, 25, '|');
        myfile.getline(player11, 25, '|');
        myfile.getline(score, 25);
        if (strcmp(serched, name) == 0)
        {
            continue;
        }
        else
        {
            testt << name << "|"
                 << city << "|"
                 << coach << "|"
                 << player1 << "|"
                 << player2 << "|"
                 << player3 << "|"
                 << player4 << "|"
                 << player5 << "|"
                 << player6 << "|"
                 << player7 << "|"
                 << player8 << "|"
                 << player9 << "|"
                 << player10 << "|"
                 << player11 << "|"
                 << score << endl;
        }
    }

    myfile.close();
    testt.close();

    myfile.open("Teams.txt", ios::out);
    testt.open("Temp.txt", ios::in);
    while (!testt.eof())
    {
        testt.getline(name, 25, '|');
        testt.getline(city, 25, '|');
        testt.getline(coach, 25, '|');
        testt.getline(player1, 25, '|');
        testt.getline(player2, 25, '|');
        testt.getline(player3, 25, '|');
        testt.getline(player4, 25, '|');
        testt.getline(player5, 25, '|');
        testt.getline(player6, 25, '|');
        testt.getline(player7, 25, '|');
        testt.getline(player8, 25, '|');
        testt.getline(player9, 25, '|');
        testt.getline(player10, 25, '|');
        testt.getline(player11, 25, '|');
        testt.getline(score, 25);

        myfile << name << "|"
               << city << "|"
               << coach << "|"
               << player1 << "|"
               << player2 << "|"
               << player3 << "|"
               << player4 << "|"
               << player5 << "|"
               << player6 << "|"
               << player7 << "|"
               << player8 << "|"
               << player9 << "|"
               << player10 << "|"
               << player11 << "|"
               << score << endl;
    }
    myfile.close();
    testt.close();
    remove("Temp.txt");
    cout << "done!" << endl;
}

int main()
{
    int a;
s:

    cout << "1) Add new team " << endl;
    cout << "2) Search a team" << endl;
    cout << "3) Show all teams" << endl;
    cout << "4) Edit a team" << endl;
    cout << "5) Delete a team" << endl;
    cout << "6) EXIT !" << endl;

    cin >> a;

    switch (a)
    {

    case 1:
        enter();
        goto s;
        break;

    case 2:
        search();
        goto s;
        break;

    case 3:
        show_all();
        goto s;
        break;

    case 4:
        edit_data();
        goto s;
        break;

    case 5:
        delet_data();
        goto s;
        break;

    case 6:
        system("clear");
        cout << "bye !" << endl;
        break;

    default:
        system("clear");
        cout << "choose the correct answer" << endl;
        goto s;
    }
}