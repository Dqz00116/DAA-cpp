#include "Chapter1.h"

namespace daa
{
    void swap(int& x, int& y) noexcept
    {
        const int temp = x;
        x = y;
        y = temp; 
    }
}
