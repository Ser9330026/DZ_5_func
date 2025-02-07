﻿#include <iostream>
#include <ctime>
#include <algorithm>

/*Задание 1:
Написать перегруженные функции (int, double, char) для выполнения следующих задач:
Инициализация квадратной матрицы;
Вывод матрицы на экран;
Определение максимального и минимального элемента на главной диагонали матрицы;
Сортировка элементов по возрастанию отдельно для каждой строки матрицы.*/

//Инициализация квадратной матрицы, Вывод матрицы на экран;

void matrixFoo(int matrix[][5], int ROWS, int COLS)
{
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            matrix[i][j] = rand() % 11;
            std::cout << matrix[i][j] << '\t';
        }
        std::cout << std::endl << std::endl;
    }
}

void matrixFoo(double matrix[][5], int ROWS, int COLS)
{
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            matrix[i][j] = rand() % 11 * 1.33;
            std::cout << matrix[i][j] << '\t';
        }
        std::cout << std::endl << std::endl;
    }
}

void matrixFoo(char matrix[][5], int ROWS, int COLS)
{
    char ch = 'C';
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            matrix[i][j] = --ch;
            std::cout << matrix[i][j] << '\t';
        }
        std::cout << std::endl << std::endl;
    }
}

//Определение максимального и минимального элемента на главной диагонали матрицы
void matrixMinMaxFoo(int matrix[][5], int ROWS, int COLS)
{
    int min, max;
    max = min = matrix[0][0];
    for (int i = 0, j = 0; i < ROWS, j < COLS; ++i, ++j) {
        if (matrix[i][j] < min) min = matrix[i][j];
        if (matrix[i][j] > max) max = matrix[i][j];
    }
    std::cout << min << " " << max << std::endl;
}

void matrixMinMaxFoo(double matrix[][5], int ROWS, int COLS)
{
    double min, max;
    max = min = matrix[0][0];
    for (int i = 0, j = 0; i < ROWS, j < COLS; ++i, ++j) {
        if (matrix[i][j] < min) min = matrix[i][j];
        if (matrix[i][j] > max) max = matrix[i][j];
    }
    std::cout << min << " " << max << std::endl;
}

void matrixMinMaxFoo(char matrix[][5], int ROWS, int COLS)
{
    char min, max;
    max = min = matrix[0][0];
    for (int i = 0, j = 0; i < ROWS, j < COLS; ++i, ++j) {
        if (matrix[i][j] < min) min = matrix[i][j];
        if (matrix[i][j] > max) max = matrix[i][j];
    }
    std::cout << min << " " << max << std::endl;
}

/*Задание 2:
Написать перегруженные функции и протестировать их в основной программе:
Нахождения максимального значения в одномерном массиве;
Нахождения максимального значения в двумерном массиве;
Нахождения максимального значения в трёхмерном массиве;
Нахождения максимального значения двух целых;
Нахождения максимального значения трёх целых*/

//Нахождения максимального значения в одномерном массиве
void fooMax(int arr[], int length)
{
    int max = 0;
    max = arr[0];
    for (int i = 0; i < length; ++i)
    {
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    std::cout << "Максимальное число в массиве: " << max << std::endl;
}

void fooMax(double arr[], int length)
{
    double max = 0;
    max = arr[0];
    for (int i = 0; i < length; ++i)
    {
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    std::cout << "Максимальное число в массиве: " << max << std::endl;
}


//Нахождения максимального значения в двумерном массиве
void fooMaxDoubleArr(int arr[][5], int rows, int cols)
{
    int max = 0;
    max = arr[0][0];
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (max < arr[i][j]) {
                max = arr[i][j];
            }
        }
        
    }
    std::cout << "Максимальное число в массиве: " << max << std::endl;
}

void fooMaxDoubleArr(double arr[][5], int rows, int cols)
{
    double max = 0;
    max = arr[0][0];
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (max < arr[i][j]) {
                max = arr[i][j];
            }
        }

    }
    std::cout << "Максимальное число в массиве: " << max << std::endl;
}

//Нахождения максимального значения в трехмерном массиве
void fooMaxThreeArr(int arr[][2][4], int size1, int size2, int size3)
{
    int max = 0;
    max = arr[0][0][0];
    for (int i = 0; i < size1; ++i) {
        for (int j = 0; j < size2; ++j) {
            for (int k = 0; k < size3; ++k) {
                if (max < arr[i][j][k]) {
                max = arr[i][j][k];
            }            
            }
        }

    }
    std::cout << "Максимальное число в массиве: " << max << std::endl;
}

void fooMaxThreeArr(double arr[][2][4], int size1, int size2, int size3)
{
    double max = 0;
    max = arr[0][0][0];
    for (int i = 0; i < size1; ++i) {
        for (int j = 0; j < size2; ++j) {
            for (int k = 0; k < size3; ++k) {
                if (max < arr[i][j][k]) {
                    max = arr[i][j][k];
                }
            }
        }

    }
    std::cout << "Максимальное число в массиве: " << max << std::endl;
}

//Нахождения максимального значения двух целых

int MaxValFoo(int a, int b)
{ 
    return (a > b) ? a : b;   
}

double MaxValFoo(double a, double b)
{
    return (a > b) ? a : b;
}

//Нахождения максимального значения трех целых

int MaxThreeValFoo(int a, int b, int c)
{
    return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
}

double MaxThreeValFoo(double a, double b, double c)
{
    return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
}


/*
Задание 3:
Измените программы из первого и второго задания с 
помощью шаблонов
*/

//Инициализация квадратной матрицы, Вывод матрицы на экран;

template<typename T>
void matrixFooT(T matrix[][5], int ROWS, int COLS)
{
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            matrix[i][j] = rand() % 11 * 1.1;
            std::cout << matrix[i][j] << '\t';
        }
        std::cout << std::endl << std::endl;
    }
}

//Определение максимального и минимального элемента на главной диагонали матрицы
template<typename T>
void matrixMinMaxFooT(T matrix[][5], int ROWS, int COLS)
{
    T min, max;
    max = min = matrix[0][0];
    for (int i = 0, j = 0; i < ROWS, j < COLS; ++i, ++j) {
        if (matrix[i][j] < min) min = matrix[i][j];
        if (matrix[i][j] > max) max = matrix[i][j];
    }
    std::cout << min << " " << max << std::endl;
}

//Нахождения максимального значения в одномерном массиве
template<typename T>
void fooMaxT(T arr[], int length)
{
    T max = 0;
    max = arr[0];
    for (int i = 0; i < length; ++i)
    {
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    std::cout << "Максимальное число в массиве: " << max << std::endl;
}

//Нахождения максимального значения в двумерном массиве
template<typename T>
void fooMaxDoubleArrT(T arr[][5], int rows, int cols)
{
    T max = 0;
    max = arr[0][0];
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (max < arr[i][j]) {
                max = arr[i][j];
            }
        }

    }
    std::cout << "Максимальное число в массиве: " << max << std::endl;
}

//Нахождения максимального значения в трехмерном массиве
template<typename T>
void fooMaxThreeArrT(T arr[][2][4], int size1, int size2, int size3)
{
    T max = 0;
    max = arr[0][0][0];
    for (int i = 0; i < size1; ++i) {
        for (int j = 0; j < size2; ++j) {
            for (int k = 0; k < size3; ++k) {
                if (max < arr[i][j][k]) {
                    max = arr[i][j][k];
                }
            }
        }

    }
    std::cout << "Максимальное число в массиве: " << max << std::endl;
}

//Нахождения максимального значения двух целых
template<typename T>
T MaxValFooT(T a, T b)
{
    return (a > b) ? a : b;
}

//Нахождения максимального значения трех целых
template<typename T>
T MaxThreeValFooT(T a, T b, T c)
{
    return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
}






//////////   /////   //  ///    //  ////////
//  //  //  //   //  //  ////   //  /////////
//  //  //  //   //  //  /////  //  ////////////
//  //  //  //   //  //  // /// //  ///////////
//  //  //  ///////  //  //  /////  /////////////
//  //  //  //   //  //  //   ////  ///////////

int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(NULL));

    //Инициализация квадратной матрицы, Вывод матрицы на экран;
    const int ROWS = 5;
    const int COLS = 5;
    int matrix[ROWS][COLS];
    matrixFoo(matrix, ROWS, COLS);
    std::cout << std::endl;

    double matrix1[ROWS][COLS];
    matrixFoo(matrix1, ROWS, COLS);
    std::cout << std::endl;

    char matrixCh[ROWS][COLS];
    matrixFoo(matrixCh, ROWS, COLS);
    std::cout << std::endl;

    //Определение максимального и минимального элемента на главной диагонали матрицы
    matrixMinMaxFoo(matrix, ROWS, COLS);
    std::cout << std::endl;

    matrixMinMaxFoo(matrix1, ROWS, COLS);
    std::cout << std::endl;

    matrixMinMaxFoo(matrixCh, ROWS, COLS);
    std::cout << std::endl;

    //Нахождения максимального значения в одномерном массиве
    const int SIZE = 10;
    {
        int arr[SIZE]{ 2, 4, 3, 7, 3, 6, 8, 2, 222.09, 2 };
        fooMax(arr, SIZE);
    }

    {
        double arr[SIZE]{ 2.66, 4.55, 3.66, 7.77, 3.44, 6.88, 8.99, 2.09, 222.444, 2.999 };
        fooMax(arr, SIZE);
    }

    //Нахождения максимального значения в двумерном массиве
    {
        const int ROWS = 5;
        const int COLS = 5;
        int arr[ROWS][COLS] = { { 1, 4, 5, 2, 6 },
            { 11, 14, 15, 12, 16 },
            { 12, 42, 52, 22, 62 },
            { 13, 43, 54, 21, 63 },
            { 10, 40, 50, 20, 60 } };
        fooMaxDoubleArr(arr, ROWS, COLS);
        std::cout << std::endl;
    }

    {
        const int ROWS = 5;
        const int COLS = 5;
        double arr[ROWS][COLS] = { { 1.33, 4.44, 5.22, 2.33, 6.44 },
            { 11.2, 14.2, 15.2, 12.2, 16.2 },
            { 12.3, 42.4, 52.888, 22.444, 62.1 },
            { 1.3, 4.3, 5.4, 2.1, 6.3 },
            { 10.333, 4.0, 50.333, 20.444, 60.666 } };
        fooMaxDoubleArr(arr, ROWS, COLS);
        std::cout << std::endl;
    }

    //Нахождения максимального значения в трехмерном массиве

    {
        const int SIZE1 = 2;
        const int SIZE2 = 2;
        const int SIZE3 = 4;
        int arr[SIZE1][SIZE2][SIZE3]{
            { { 1, 3, 6, 5 },{ 8, 9, -2, 4 } },
            { { 5, 10, 34, 56 },{ 23, -56, 10, 37 } }
        };
        fooMaxThreeArr(arr, SIZE1, SIZE2, SIZE3);
    }

    {
        const int SIZE1 = 2;
        const int SIZE2 = 2;
        const int SIZE3 = 4;
        double arr[SIZE1][SIZE2][SIZE3]{
            { { 1.555, 3.555, 6.555, 5.555 },{ 8.555, 9.555, -2.555, 4.555 } },
            { { 5.555, 10.555, 34.555, 56.555 },{ 23.555, -56.555, 10.555, 37.555 } }
        };
        fooMaxThreeArr(arr, SIZE1, SIZE2, SIZE3);
    }

    //Нахождения максимального значения двух целых
    {
        int val1 = 0;
        int val2 = 0;
        std::cout << "Введите два целых числа: ";
        Label1:
        std::cin >> val1 >> val2;
        if (val1 == val2) {
                std::cout << "Числа не должны быть одинаковыми! Введите заново: ";
                goto Label1;
            }
        std::cout << "Большее из двух чисел: " << MaxValFoo(val1, val2) << std::endl;
    }

    {
        double val1 = 0;
        double val2 = 0;
        std::cout << "Введите два дробных числа: ";
    Label2:
        std::cin >> val1 >> val2;
        if (val1 == val2) {
            std::cout << "Числа не должны быть одинаковыми! Введите заново: ";
            goto Label2;
        }
        std::cout << "Большее из двух чисел: " << MaxValFoo(val1, val2) << std::endl;
    }

    //Нахождения максимального значения трех целых чисел
    {
        int val1 = 0;
        int val2 = 0;
        int val3 = 0;
        std::cout << "Введите три целых числа: ";
    Label3:
        std::cin >> val1 >> val2 >> val3;
        if (val1 == val2 || val1 == val3 || val2 == val3) {
            std::cout << "Числа не должны быть одинаковыми! Введите заново: ";
            goto Label3;
        }
        std::cout << "Большее из трех чисел: " << MaxThreeValFoo(val1, val2, val3) << std::endl;       
    }

    {
        double val1 = 0;
        double val2 = 0;
        double val3 = 0;
        std::cout << "Введите три дробных числа: ";
    Label4:
        std::cin >> val1 >> val2 >> val3;
        if (val1 == val2 || val1 == val3 || val2 == val3) {
            std::cout << "Числа не должны быть одинаковыми! Введите заново: ";
            goto Label4;
        }
        std::cout << "Большее из трех чисел: " << MaxThreeValFoo(val1, val2, val3) << std::endl;
    }

    /*
    Задание 3:
    Измените программы из первого и второго задания с
    помощью шаблонов
    */

    //Инициализация квадратной матрицы, Вывод матрицы на экран;
    {
        const int ROWS = 5;
        const int COLS = 5;
    {
        
        int matrix[ROWS][COLS];
        matrixFooT(matrix, ROWS, COLS);
        std::cout << std::endl;
    }
    {

        double matrix[ROWS][COLS];
        matrixFooT(matrix, ROWS, COLS);
        std::cout << std::endl;
    }
    }

    //Определение максимального и минимального элемента на главной диагонали матрицы
    {
        const int ROWS = 5;
        const int COLS = 5;
        {
            int matrix[ROWS][COLS];
            matrixFoo(matrix, ROWS, COLS);
            matrixMinMaxFooT(matrix, ROWS, COLS);
            std::cout << std::endl;
        }
        {
            double matrix[ROWS][COLS];
            matrixFoo(matrix, ROWS, COLS);
            matrixMinMaxFooT(matrix, ROWS, COLS);
            std::cout << std::endl;
        }
    }
    
    //Нахождения максимального значения в одномерном массиве
    {
        const int SIZE = 10;
        {
            int arr[SIZE]{ 2, 4, 3, 7, 3, 6, 8, 2, 222.09, 2 };
            fooMaxT(arr, SIZE);
        }
        {
            double arr[SIZE]{ 2.66, 4.55, 3.66, 7.77, 3.44, 6.88, 8.99, 2.09, 222.444, 2.999 };
            fooMaxT(arr, SIZE);
        }
    }
    std::cout << std::endl;

    //Нахождения максимального значения в двумерном массиве
    {
        const int ROWS = 5;
        const int COLS = 5;
        int arr[ROWS][COLS] = { { 1, 4, 5, 2, 6 },
            { 11, 14, 15, 12, 16 },
            { 12, 42, 52, 22, 62 },
            { 13, 43, 54, 21, 63 },
            { 10, 40, 50, 20, 60 } };
        fooMaxDoubleArrT(arr, ROWS, COLS);
        
    }

    {
        const int ROWS = 5;
        const int COLS = 5;
        double arr[ROWS][COLS] = { { 1.33, 4.44, 5.22, 2.33, 6.44 },
            { 11.2, 14.2, 15.2, 12.2, 16.2 },
            { 12.3, 42.4, 52.888, 22.444, 62.1 },
            { 1.3, 4.3, 5.4, 2.1, 6.3 },
            { 10.333, 4.0, 50.333, 20.444, 60.666 } };
        fooMaxDoubleArrT(arr, ROWS, COLS);
        std::cout << std::endl;
    }
    std::cout << std::endl;

    //Нахождения максимального значения в трехмерном массиве
    {
        const int SIZE1 = 2;
        const int SIZE2 = 2;
        const int SIZE3 = 4;
    {        
        int arr[SIZE1][SIZE2][SIZE3]{
            { { 1, 3, 6, 5 },{ 8, 9, -2, 4 } },
            { { 5, 10, 34, 56 },{ 23, -56, 10, 37 } }
        };
        fooMaxThreeArrT(arr, SIZE1, SIZE2, SIZE3);
    }

    {
        double arr[SIZE1][SIZE2][SIZE3]{
            { { 1.555, 3.555, 6.555, 5.555 },{ 8.555, 9.555, -2.555, 4.555 } },
            { { 5.555, 10.555, 34.555, 56.555 },{ 23.555, -56.555, 10.555, 37.555 } }
        };
        fooMaxThreeArrT(arr, SIZE1, SIZE2, SIZE3);
    }    
    }

    //Нахождения максимального значения двух целых
    {
        int val1 = 0;
        int val2 = 0;
        std::cout << "Введите два целых числа: ";
    Label11:
        std::cin >> val1 >> val2;
        if (val1 == val2) {
            std::cout << "Числа не должны быть одинаковыми! Введите заново: ";
            goto Label11;
        }
        std::cout << "Большее из двух чисел: " << MaxValFooT(val1, val2) << std::endl;
    }

    {
        double val1 = 0;
        double val2 = 0;
        std::cout << "Введите два дробных числа: ";
    Label22:
        std::cin >> val1 >> val2;
        if (val1 == val2) {
            std::cout << "Числа не должны быть одинаковыми! Введите заново: ";
            goto Label22;
        }
        std::cout << "Большее из двух чисел: " << MaxValFooT(val1, val2) << std::endl;
    }
    std::cout << std::endl;

    //Нахождения максимального значения трех целых чисел
    {
    {
        int val1 = 0;
        int val2 = 0;
        int val3 = 0;
        std::cout << "Введите три целых числа: ";
    Label33:
        std::cin >> val1 >> val2 >> val3;
        if (val1 == val2 || val1 == val3 || val2 == val3) {
            std::cout << "Числа не должны быть одинаковыми! Введите заново: ";
            goto Label33;
        }
        std::cout << "Большее из трех чисел: " << MaxThreeValFooT(val1, val2, val3) << std::endl;
    }

    {
        double val1 = 0;
        double val2 = 0;
        double val3 = 0;
        std::cout << "Введите три дробных числа: ";
    Label44:
        std::cin >> val1 >> val2 >> val3;
        if (val1 == val2 || val1 == val3 || val2 == val3) {
            std::cout << "Числа не должны быть одинаковыми! Введите заново: ";
            goto Label44;
        }
        std::cout << "Большее из трех чисел: " << MaxThreeValFooT(val1, val2, val3) << std::endl;
    }
    }
    std::cout << std::endl;
    

    /*
    Тема: Сортировка массивов

    Задание 1:
    Написать программу, выполняющую сортировку одномерного 
    массива целых чисел методом пузырьковой сортировки.
    */
    {
        const int SIZE = 10;
        int arr[SIZE];

        for (int i = 0; i < SIZE; ++i) {
            arr[i] = rand() % 20;
            std::cout << arr[i] << '\t';
        }
        std::cout << std::endl;

        for (int i = SIZE - 1; i > 0; --i) {
            for (int j = 0; j < i; ++j) {
                if (arr[j] > arr[j + 1]) {
                    std::swap(arr[j], arr[j + 1]);
                }                    
            }
        }

        for (int i = 0; i < SIZE; ++i) {
            std::cout << arr[i] << '\t';
        }
        std::cout << std::endl;

    }
    return 0;
}

