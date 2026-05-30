#include <iostream>
#include <fstream>
#include <omp.h>

using namespace std;

int main() {

    int n = 1000000;
    long long sum = 0;

    // START TIMER
    double start = omp_get_wtime();

    // SEQUENTIAL LOOP
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

    // SIMPAN KE benchmark.txt
    ofstream file("benchmark.txt");

    file << "HASIL BENCHMARK\n\n";

    file << "Sequential : "
         << waktu
         << " detik\n";

    file.close();

    return 0;
}