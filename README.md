# OpenMP Parallel Sum

## Anggota
- Muhammad Panji

## Deskripsi
Program menggunakan OpenMP untuk mempercepat proses penjumlahan angka menggunakan parallel computing.

## File
- sequential.cpp -> versi sequential
- main.cpp -> versi parallel

## Compile

### Sequential
g++ sequential.cpp -fopenmp -o sequential

### Parallel
g++ main.cpp -fopenmp -o program

## Run

### Sequential
.\sequential.exe

### Parallel
.\program.exe

## Hasil
Versi parallel memiliki waktu eksekusi lebih cepat dibanding sequential.