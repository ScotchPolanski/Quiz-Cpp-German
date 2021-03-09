#include <iostream>
#include <Windows.h>
#include <string>

void Entersauebern();

using namespace std;

int main()
{
    int schwierigkeit = 5;
    while(schwierigkeit != 4)
    {

        system("cls");
        cout << " ---------------------" << endl;
        cout << "|    === Quiz ===     |" << endl;
        cout << "| Made by Scotch#5627 |" << endl;
        cout << " ---------------------" << endl;
        cout << endl;
        cout << "Zum Schliessen '4' druecken!\n";
        cout << endl;
        cout << "Schwierigkeit waehlen:\n";
        cout << "1) Leicht\n";
        cout << "2) Mittel\n";
        cout << "3) Schwer\n";
        cout << "Bitte Zahl eingeben: ";
        cin >> schwierigkeit;
        if (schwierigkeit > 4 || schwierigkeit < 1)
        {
            cout << "Ungueltige Eingabe!\n";
            Sleep(2000);
        }

        // === Leicht ===

        if (schwierigkeit == 1)
        {
                // === Frage 1 ===
                int LAntwort1 = 0;
                while (LAntwort1 != 100)
                {
                    system("cls");
                    cout << "Schwierigkeit: leicht\n";
                    string LFrage1 = "Frage 1: Wie viel Centimeter hat ein Meter (ohne Einheit!)?\n";
                    cout << LFrage1;
                    cin >> LAntwort1;
                    if (LAntwort1 == 100)
                    {
                        cout << "Richtig!\n";
                        Sleep(2000);
                        break;
                    }
                    else
                    {
                        cout << LAntwort1 << " ist leider falsch....\n";
                        Sleep(2000);
                    }
                }
                string LAntwort2 = "Unbekannt";
                // === Frage 2 ===
                while (LAntwort2 != "Trump" || LAntwort2 != "trump")
                {
                    system("cls");
                    cout << "Schwierigkeit: leicht\n";
                    string LFrage2 = "Frage 2: Welcher US Praesident war vor Joseph Robinette Biden, Jr. an der Macht? (Nachname)\n";
                    cout << LFrage2;
                    string LAntwort2;
                    Entersauebern();
                    getline(cin, LAntwort2);
                    if (LAntwort2 == "Trump" || LAntwort2 == "trump")
                    {
                        cout << "Richtig!\n";
                        Sleep(2000);
                        system("cls");
                        break;
                    }
                    else
                    {
                        cout << LAntwort2 << " ist leider falsch....\n";
                        Sleep(2000);
                    }
                }
                int LAntwort3 = 5;
                // === Frage 3 ===
                while (LAntwort3 != 3)
                {
                    system("cls");
                    cout << "Schwierigkeit: leicht\n";
                    cout << "Frage 3: Was ist schwerer: 1 Tonne Federn oder 1 Tonne Stahl? 1 = Federn, 2 = Stahl, 3 = beides wiegt gleich viel....\n";
                    cin >> LAntwort3;
                    if (LAntwort3 == 3)
                    {
                        cout << "Richtig!\n";
                        Sleep(2000);
                        system("cls");
                        break;
                    }
                    else if (LAntwort3 == 1)
                    {
                        cout << "Federn ist leider falsch....\n";
                        Sleep(2000);
                    }
                    else if (LAntwort3 == 2)
                    {
                        cout << "Stahl ist leider falsch....\n";
                        Sleep(2000);
                    }
                }

                system("cls");
                cout << "GESCHAFFT!\n";
                cout << "Du hast erfolgreich die Schwierigkeitsstufe 'leicht' abgeschlossen!\n";
                cout << "Druecke ENTER um zurueckzukehren....\n";
                Entersauebern();
                getchar();
        }
        if (schwierigkeit == 2)
        {
            // === Frage 1 ===
            int MAntwort1 = 1000;
            while (MAntwort1 != 26)
            {
                system("cls");
                cout << "Schwierigkeit: mittel\n";
                cout << "Frage 1: Wie viele Buchstaben hat das Alphabet?\n";
                cin >> MAntwort1;
                if (MAntwort1 == 26)
                {
                    cout << "Richtig!\n";
                    Sleep(2000);
                    system("cls");
                    break;
                }
                else
                {
                    cout << MAntwort1 << " ist leider falsch....\n";
                    Sleep(2000);
                }
            }
            
            // === Frage 2 ===
            string MAntwort2 = "abc";
            while (MAntwort2 != "Konrad Adenauer")
            {
                system("cls");
                cout << "Schwierigkeit: mittel\n";
                cout << "Wie hiess der erste deutsche Bundeskanzler (1949)?\n";
                Entersauebern();
                getline(cin, MAntwort2);
                if (MAntwort2 == "Konrad Adenauer")
                {
                    cout << "Richtig\n";
                    Sleep(2000);
                    system("cls");
                    break;
                }
                else
                {
                    cout << MAntwort2 << " ist leider falsch....\n";
                    Sleep(2000);
                }
            }
            int MAntwort3 = 0;
            while (MAntwort3 != 8848)
            {
                system("cls");
                cout << "Schwierigkeit: mittel\n";
                cout << "Wie hoch ist der Mount Everest in Metern?\n";
                cin >> MAntwort3;
                if (MAntwort3 == 8848)
                {
                    cout << "Richtig!\n";
                    Sleep(2000);
                    system("cls");
                    break;
                }
                else
                {
                    cout << MAntwort3 << " ist leider falsch....\n";
                    Sleep(2000);
                }
            }

            system("cls");
            cout << "GESCHAFFT!\n";
            cout << "Du hast erfolgreich die Schwierigkeitsstufe 'mittel' abgeschlossen!\n";
            cout << "Druecke ENTER um zurueckzukehren....\n";
            Entersauebern();
            getchar();
        }
        if (schwierigkeit == 3)
        {
            // === Frage 1 ===
            int SAntwort1 = 0;
            while (SAntwort1 != 2)
            {
                system("cls");
                cout << "Schwierigkeit: schwer\n";
                cout << "Frage 1: Welcher dieser italienischen Kaese stammt aus der Po-Ebene?\n";
                cout << "1: Squacquerone, 2: Grana Padano, 3: Fiore Sardo, 4: Castelmagno\n";
                cin >> SAntwort1;
                if (SAntwort1 == 2)
                {
                    cout << "Richtig!\n";
                    Sleep(2000);
                    system("cls");
                    break;
                }
                else
                {
                    cout << SAntwort1 << " ist leider falsch....\n";
                    Sleep(2000);
                }
            }

            // === Frage 2 ===
            int SAntwort2 = 0;
            while (SAntwort2 != 146)
            {
                system("cls");
                cout << "Schwierigkeit: schwer\n";
                cout << "Frage 2: Aus wie vielen Artikeln besteht das Grundgesetz?\n";
                cin >> SAntwort2;
                if (SAntwort2 == 146)
                {
                    cout << "Richtig!\n";
                    Sleep(2000);
                    system("cls");
                    break;
                }
                else
                {
                    cout << SAntwort2 << " ist leider falsch....\n";
                    Sleep(2000);
                }
            }

            // === Frage 3 ===
            int SAntwort3 = 123;
            while (SAntwort3 != 150000000)
            {
                system("cls");
                cout << "Schwierigkeit: schwer\n";
                cout << "Frage 3: Wie viel ist eine Astronomische Einheit (aufgerundet, in Kilometern)?\n";
                cin >> SAntwort3;
                if (SAntwort3 == 150000000)
                {
                    cout << "Richtig!\n";
                    Sleep(2000);
                    system("cls");
                    break;
                }
                else
                {
                    cout << SAntwort3 << " ist leider falsch....\n";
                    Sleep(2000);
                }
            }

            system("cls");
            cout << "GESCHAFFT!\n";
            cout << "Du hast erfolgreich die Schwierigkeitsstufe 'schwer' abgeschlossen!\n";
            cout << "Druecke ENTER um zurueckzukehren....\n";
            Entersauebern();
            getchar();
        }
    }
}

void Entersauebern()
{
    cin.ignore(cin.rdbuf()->in_avail());
}