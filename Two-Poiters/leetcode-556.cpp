// link: https://leetcode.com/problems/next-greater-element-iii/
// description: tim ra so nho nhat ma lon hon so da cho, su dung cac chu so cua so da cho

class Solution {
public:
    int nextGreaterElement(int n) {
        // n = 132
        string  digits = to_string(n);
        // find the index descrease lastest
        int i = digits.size() -2;
        while(i >= 0 && digits[i] >= digits[i+1]) i--;
        if(i < 0) return -1;
        // find the index start < digits[i]
        int j = digits.size() -1;
        while(j > i && digits[j] <= digits[i]) j--;
        swap(digits[i], digits[j]);
        sort(digits.begin()+ i+1, digits.end());
        long res = stol(digits);
        if(res > INT_MAX) return -1;
        return res;
    }
};

