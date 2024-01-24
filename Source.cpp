#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    // ������������� ���������� ��������� �����
    srand(static_cast<unsigned>(time(0)));

    // ������ � ������������ ����������� �������
    int n;
    cout << "������� ����������� ���������� �������: ";
    cin >> n;

    // �������� � ���������� �������
    vector<vector<int>> matrix(n, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            matrix[i][j] = rand() % 100; // ����� 100 - ������������ �������� �������� (������ �������� �� ������ ����������)
        }
    }

    // ����� �������


    // ���������� ������� � ����
    ofstream outputFile("generated_matrix.txt");
    if (outputFile.is_open()) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                outputFile << matrix[i][j] << " ";
            }
            outputFile << endl;
        }
        outputFile.close();
        cout << "������� ������� ��������� � ���� generated_matrix.txt\n";
    }
    else {
        cout << "������ ��� �������� ����� ��� ����������.\n";
    }

    return 0;
}
