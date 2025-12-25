# Fast Fourier Transform (FFT) in C++

## Overview
This project implements the Fast Fourier Transform (FFT) algorithm in C++, focusing on
the efficient computation of the Discrete Fourier Transform (DFT) using a recursive
divide-and-conquer strategy.

The implementation follows the classical Cooley–Tukey approach and is designed to
emphasize algorithmic correctness and computational efficiency.

## Objective
The main objectives of this project are to:
- implement the FFT algorithm for complex-valued input sequences,
- reduce the computational complexity compared to the naive DFT approach,
- reinforce understanding of recursive algorithms and numerical computation.

## Approach
The algorithm decomposes the input sequence into even and odd indexed components and
recursively computes their Fourier transforms. The partial results are then combined
using complex roots of unity to produce the final frequency-domain representation.

The implementation prioritizes clarity and correctness over hardware-level
optimizations.

## Key Concepts
fast fourier transform • discrete fourier transform •
divide and conquer • recursion • complex arithmetic • algorithmic efficiency

## Project Structure
- `FFT Project (402482328).cpp`: complete FFT implementation in C++

## How to Run
```bash
g++ -std=c++17 FFT\ Project\ \(402482328\).cpp -o fft
./fft
