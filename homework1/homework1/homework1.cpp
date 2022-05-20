//Дано два текстовых файла. Выяснить, совпадают ли их строки. Если нет, то вывести
// несовподающую строку из каждого файла

#include <iostream>

using namespace std;

int main()
{
    char a[200];
    char b[200];
    FILE* in1;
    FILE* in2;

    fopen_s(&in1, "1.txt", "r");
    fopen_s(&in2, "2.txt", "r");


    while (!feof(in1) && !feof(in2))
    {
        fgets(a, 200, in1);
        fgets(b, 200, in2);

        cout << "--------";
        if (strcmp(a, b))
        {
            cout << endl;
            cout << a << endl << b << endl;
        }
        cout << "--------";
    }

    fclose(in1);
    fclose(in2);


    return 0;
}
