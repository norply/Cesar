#include <iostream>
#include <Windows.h>
#include <stdlib.h>
#include <string>
#include <cstdlib>
using namespace std;
int main()
{
	SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");
    setlocale(LC_CTYPE, "rus");
	string text;//для  введённых данных
    int n;// Шаг сдвига
    int size;// Размер  введённой строки
    int i=0;// Счётчик
    int i1=0;// Счётчик
	int f=0;// счётчик для проверки ввода
	string alphabet = "абвгдеёжзийклмнопрстуфхцчшщъыьэюя";
	for (;;)// Проверка ввода
    {
        cout << "Введите текст на русском языке строчными буквами(без использования дополнительных символов кроме пробела) и нажмите Enter: ";
        getline(cin, text);
        size = text.length();
        for (i = 0; i < size; i++)
        {
            for (;;)
            {
                if (text[i] == ' ')// Пробелы не проверяются на соответствие русскому алфавиту
                {
                    i++;
                    f++;
                }
                else
                    break;
            }
            for (i1 = 0; i1 < 33; i1++)// Проверяем, что введённые данные состоят из строчных букв русского алфавита
            {
                if (text[i] == alphabet[i1])
                {
                    f++;
                }    
            }
           
        }
        if (f == size)
            break;
        else
            f = 0;
        cin.clear();
    }
	cout << "Введите шаг сдвига: ";
    cin >> n;
}
