#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    // Инициализация генератора случайных чисел
    srand(static_cast<unsigned>(time(0)));

    // Запрос у пользователя размерности матрицы
    int n;
    cout << "Введите размерность квадратной матрицы: ";
    cin >> n;

    // Создание и заполнение матрицы
    vector<vector<int>> matrix(n, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            matrix[i][j] = rand() % 100; // Здесь 100 - максимальное значение элемента (можете изменить по своему усмотрению)
        }
    }

    // Вывод матрицы


    // Сохранение матрицы в файл
    ofstream outputFile("generated_matrix.txt");
    if (outputFile.is_open()) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                outputFile << matrix[i][j] << " ";
            }
            outputFile << endl;
        }
        outputFile.close();
        cout << "Матрица успешно сохранена в файл generated_matrix.txt\n";
    }
    else {
        cout << "Ошибка при открытии файла для сохранения.\n";
    }

    return 0;
}
