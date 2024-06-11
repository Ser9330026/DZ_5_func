#include <iostream>
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



    return 0;
}
