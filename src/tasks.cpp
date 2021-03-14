#include <iostream> // cout
#include <algorithm> // copy, fill

#include "tasks.hpp"

// ИСПОЛЬЗОВАНИЕ ЛЮБЫХ ДРУГИХ БИБЛИОТЕК НЕ СОВЕТУЕТСЯ И МОЖЕТ ПОВЛИЯТЬ НА ВАШИ БАЛЛЫ

using std::cout;
using std::fill;
using std::copy;

// Задание 1
void swap_args(int *lhs, int *rhs) {
    if(rhs && lhs){
        int temp;
        temp=*rhs;
        *rhs=*lhs;
        *lhs=temp;
    }
}

// Задание 2
int **allocate_2d_array(int num_rows, int num_cols, int init_value) {
    if (num_rows <=0 || num_cols <=0 ) {
        return nullptr;
    }
    int **targetArray = new int *[num_rows];
    for (int i = 0; i < num_rows; i++) {
        targetArray[i] = new int[num_cols];
        for (int j = 0; j < num_cols; j++) {
            targetArray[i][j] = init_value;
        }
    }
    return targetArray;
}


// Задание 3
bool copy_2d_array(int **arr_2d_source, int **arr_2d_target, int num_rows, int num_cols) {
    if (!arr_2d_source || !arr_2d_target || num_rows <= 0 || num_cols <= 0) {
        return false;
    }
    for (int i = 0; i < num_rows; i++) {
        for (int j = 0; j < num_cols; j++) {
            arr_2d_target[i][j] = arr_2d_source[i][j];
        }
    }
    return arr_2d_target;
}

// Задание 4
void reverse_1d_array(vector<int> &arr) {
    for (int i = 0; i < arr.size() / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[arr.size() - i - 1];
        arr[arr.size() - i - 1] = temp;
    }
}

// Задание 5
void reverse_1d_array(int *arr_begin, int *arr_end) {
    if (arr_begin && arr_end) {
        if (arr_end <= arr_begin) {
            return;
        }
        int temp;
        temp = *arr_begin;
        *arr_begin = *arr_end;
        *arr_end = temp;
        reverse_1d_array(arr_begin + 1, arr_end - 1);
    }
}

// Задание 6
int *find_max_element(int *arr, int size) {
    if (!arr || size <= 0) {
        return nullptr;
    }
    int *maxElem = &arr[0];
    for (int i = 0; i < size; i++) {
        if (arr[i] > *maxElem) {
            maxElem = &arr[i];
        }
    }
    return maxElem;
}

// Задание 7
vector<int> find_odd_numbers(vector<int> &arr) {
    vector<int> *target_odd_numbers = new vector<int>;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 1 || arr[i] % 2 == -1) {
            target_odd_numbers->push_back(arr[i]);
        }
    }
    return *target_odd_numbers;
}

// Задание 8
vector<int> find_common_elements(vector<int> &arr_a, vector<int> &arr_b) {
    vector<int> *common_elements = new vector<int>;
    for (int i = 0; i < arr_a.size(); i++) {
        for (int j = 0; j < arr_b.size(); j++) {
            if (arr_a[i] == arr_b[j]) {
                common_elements->push_back(arr_a[i]);
            }
        }
    }
    return *common_elements;
}
