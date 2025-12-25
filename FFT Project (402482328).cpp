#include <iostream>
#include <vector>
#include <complex>
#include <cmath>

#define M_PI 3.14159265358979323846

using namespace std;

void computeTransform(vector<complex<double>> &data) {
    int size = data.size();
    if(size <= 1) return;

    vector<complex<double>> left_half;
    vector<complex<double>> right_half;
    
    for(int idx = 0; idx < size/2; idx++) {
        left_half.push_back(data[idx*2]);
        right_half.push_back(data[idx*2 + 1]);
    }
    
    computeTransform(left_half);
    computeTransform(right_half);

    double angle_step = 2 * M_PI / size;
    complex<double> rotation_factor(1.0);
    complex<double> base_rotation(cos(angle_step), sin(angle_step));

    for(int idx = 0; idx < size/2; idx++) {
        complex<double> temp = rotation_factor * right_half[idx];
        data[idx] = left_half[idx] + temp;
        data[idx + size/2] = left_half[idx] - temp;
        rotation_factor *= base_rotation;
    }
}

int main() {
    int count;
    cin >> count;
    vector<complex<double>> input_data;
    
    for(int i = 0; i < count; i++) {
        double real_part, imag_part;
        cin >> real_part >> imag_part;
        input_data.push_back(complex<double>(real_part, imag_part));
    }
    
    computeTransform(input_data);
    
    for(int i = 0; i < count; i++) {
        cout << input_data[i] << " ";
    }
    cout << endl;
    
    return 0;
}