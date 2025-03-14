#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <vector>

#define NUM 10000000

#ifdef FLOAT
#define ARR_TYPE float
#else
#define ARR_TYPE double
#endif

int main()
{
    std::vector<ARR_TYPE> arr;

#ifdef FLOAT
    for (int i = 0; i < NUM; ++i)
    {
        arr.push_back(std::sinf(2 * M_PI / NUM * (i + 1)));
    }
#else
    for (int i = 0; i < NUM; ++i)
    {
        arr.push_back(std::sin(2 * M_PI / NUM * (i + 1)));
    }
#endif

    ARR_TYPE result{0};

    for (int i = 0; i < NUM; ++i)
    {
        result += arr[i];
    }

    std::cout << result << std::endl;

    return 0;
}
