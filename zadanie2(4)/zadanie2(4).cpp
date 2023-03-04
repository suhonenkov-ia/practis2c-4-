
#include <iostream>
using namespace std;
void zadanie3(int*mas, int razmer)
{
    for (int i = 0; i < razmer; i++)
    {
        cout << i << " element masiva" << mas[i]<< endl;
    }

}

int main()
{
    int vibor;
    cout << "vvedite nomer zadania";
    cin >> vibor;
    int razmer = 5;
    int a;
    int h;
    int c = 0;
    int sum = 0;
    int mask[5];
    int k;
    int* mas = new int[5];
    switch (vibor) {
    case 1:
            for (int i = 0; i < razmer; i++)
            {
                *(mas + i) = i * 3;
            }
            zadanie3(mas, razmer);
            return 0;
    case 2:
            cout << "vvedite 5 chisel v masiv";
            for (int i = 0; i < 5;i++)
            {
                cin >> h;
                mas[i] = h;
                c = c + 1;
            }
            for (int i = 0; i < 5; i++)
            {
                sum += mas[i];
            }
            cout << sum/c;
            return 0;
    case 3:
            cout << "vvedite 5 chisel v masiv";
            for (int i = 0; i < 5;i++)
            {
                cin >> k;
                mask[i] = k;

            }
            for (int i = 0;  i < 5;  i++)
            {

                cout << mask[i];
            }

            return 0;
    }
       
}

