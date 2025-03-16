#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long repairCars(vector<int>& arr, int car) {
        sort(arr.begin(), arr.end());
        long long l = 1, r = LLONG_MAX, mid, ans = LLONG_MAX;

        while (l <= r) {
            mid = l + (r - l) / 2;
            if (timetaken(arr, mid, car)) {
                ans = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return ans;
    }

private:
    bool timetaken(vector<int>& arr, long long mid, int car) {
        long long carscount = 0;
        for (int i = 0; i < arr.size(); i++) {
            carscount += sqrt(mid / arr[i]);
            if (carscount >= car) return true;
        }
        return false;
    }
};