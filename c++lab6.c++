#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int mas[10];          
    int *p = mas;         

    cout << "10 integers:\n";
    for (int i = 0; i < 10; i++) {
        cin >> *(p + i);  
    }

    printf("\nmassif \n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", *(p + i));
    }

    printf("\n\nOdd element numbers:\n");
    for (int i = 0; i < 10; i++) {
        if (*(p + i) % 2 != 0) {
            printf("%d ", i);
        }
    }

    return 0;
}
