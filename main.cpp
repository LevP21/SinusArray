#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <vector>

#define NUM 10000000

#ifdef FLOAT
    int main() {
        std::vector<float> arr;

        for (int i = 0; i < NUM; ++i) {
            arr.push_back(std::sinf(2 * M_PI / NUM * (i+1)));
        }

        float result{0};

        for (int i = 0; i < NUM; ++i) {
            result += arr[i];
        }

        std::cout << result << std::endl;

        return 0;
    }
#else
    int main() {
        std::vector<double> arr;

        for (int i = 0; i < NUM; ++i) {
            arr.push_back(std::sin(2 * M_PI / NUM * (i+1)));
        }

        double result{0};

        for (int i = 0; i < NUM; ++i) {
            result += arr[i];
        }

        std::cout << result << std::endl;

        return 0;
    }
#endif