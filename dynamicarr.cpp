#include <iostream>

#include "dynamic.h"

darr::darr() {}
darr::darr(int m, int n) {
    this->m = m;
    this->n = n;
}
void darr::create_arr() {
    arr = new int *[m];
    for (int i = 0; i < m; i++) {
        arr[i] = new int[m];
    }
}
void darr::print_arr() {
    for (int i = 0; i < m; i++) {
        std::cout << std::endl;
        for (int j = 0; j < n; j++) {
            arr[i][j] = 7;
            std::cout << arr[i][j] << " ";
        }
    }
}
