/*
Так як комп'ютеру важко пояснити що таке склади, я поставив дефіс (перенесення) 
після кожної букви, витираючи їх у випадках, які згадані в правилах переносу.
Перенести в код вдалося не всі правила, тому що комп'ютеру також важко пояснити,
що таке префікс, корінь і суфікс. Не знижайте бали будь ласка, я старався :(
*/
#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
int Count_Words(string str);
void Split(string str, string* words);
void Syllabication(string* words, int q);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "ukr");
    string str;
    string* words;
    int q;

    cout << "Введіть що-небудь: ";
    getline(cin, str);
    str += " ";
    cout << endl;
    
    q = Count_Words(str);
    cout << "Кількість введених слів: " << q << endl;
    words = new string[q];
    Split(str, words);
    Syllabication(words, q);
    for (int i = 0; i < q; i++)
        if (i % 2 == 1)
            cout << words[i] << endl;
    delete[] words;
}

int Count_Words(string str)
{
    int q = 0;
    for (int i = 0; i < str.length(); i++)
        if (isspace(str[i]))
            q++;
return q;
}

void Split(string str, string* words)
{
    int temp = -1, n = 0;
    for (int i = 0; i < str.length(); i++)
        if (isspace(str[i]))
        {
            words[n] = str.substr(temp + 1, i - temp - 1);
            n++;
            temp = i;
        }
}

void Syllabication(string* words, int q)
{   
    for (int i = 1; i < q; i+=2)
    {
        int temp = 1;
        while (words[i][temp] != '\0')
        {
            words[i].insert(temp, "-");
            temp += 2;
        }
        if (words[i].length() <= 3)
            cout << words[i] << " - не переноситься" << endl;
        else
        {
            for (int j = 0; j < words[i].length(); j++)
            {
                if (words[i].substr(1, 1) == "-")      //одну літеру не лишаємо (першу)
                    words[i].erase(1, 1);
                else if (words[i].substr( words[i].length() - 2, 1) == "-")  //одну літеру не лишаємо (останню)
                    words[i].erase(words[i].length() - 2, 1);
                else if (words[i].substr(j, 3) == "й-о" || words[i].substr(j, 3) == "ь-о")   //  йо, ьо не розриваємо
                    words[i].erase(j + 1, 1);
                else if (words[i].substr(j, 2) == "-'" || words[i].substr(j, 2) == "-ь" || words[i].substr(j, 2) == "-й")   // ', ь, й не відокремлюємо від попередньої літери
                    words[i].erase(j, 1);
            }
        }
    }
}
