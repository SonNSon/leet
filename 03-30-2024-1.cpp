#include <iostream>
using namespace std;

class Solution
{
public:
    int mySqrt(int x)
    {
        if (x == 0 || x == 1)
            return x;
        int start = 1, end = x;
        int rs;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (mid <= (x / mid))
            {
                start = mid + 1;
                rs = mid;
            }
            else
            {
                end = mid - 1;
            }
        }
        return rs;
    }
};

int main()
{
    int x;
    cin >> x;
    Solution obj;               // Tạo một đối tượng của lớp Solution
    int sqrt_x = obj.mySqrt(x); // Gọi phương thức mySqrt từ đối tượng obj
    cout << sqrt_x;
    return 0;
}
