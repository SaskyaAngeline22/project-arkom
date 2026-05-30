#include <iostream>
#include <fstream>
#include <omp.h>

using namespace std;

int main() {

    int n = 1000000;
    long long sum = 0;

    // START TIMER
    double start = omp_get_wtime();

    // OPENMP PARALLEL
    #pragma omp parallel for reduction(+:sum)
    for(int i = 1; i <= n; i++) {
        sum += i;
    }

    // END TIMER
    double end = omp_get_wtime();

    double waktu = end - start;

    cout << "Total = " << sum << endl;

    cout << "Waktu = "
         << waktu
         << " detik" << endl;

    // TAMBAHKAN KE benchmark.txt
    ofstream file("benchmark.txt", ios::app);

    file << "Parallel   : "
         << waktu
         << " detik\n";

    file.close();

    return 0;
}