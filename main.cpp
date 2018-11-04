/*
 * created by Danil Kireev, PFUR NFIbd-01-17, 25.10.18, 09:00
 */
#include <cstdlib>
#include <ctime>
#include <fstream>
#include "Q.h"


/*
 *  № 29
 *  Дан массив A размера N.
 *  Найти минимальный элемент из его элементов с четными номерами
 */

int main() {
    cout << "нахождение минимального чётного элемента" << endl;
    int n, *a;
    cout << "введите размер массива объектов: ";
    cin >> n;
    while(n <= 0) {
        cout << "введите положительное число: ";
        cin >> n;
    }
    a = new int[n];
    Q *obj = new Q[n];
    for (int i = 0; i < n; ++i) {
        obj[i].user_input();
        obj[i].print();
        a[i] = obj[i].search_min();
    }
    for (int i = 0; i < n; ++i) {
        cout << "массив: " << endl;
        obj[i].print();
        cout << "минимальный чётный элемент: " << a[i] << endl;
    }
    return 0;
}
