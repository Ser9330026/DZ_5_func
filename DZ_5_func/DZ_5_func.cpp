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



int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(NULL));

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
    
    return 0;
}
