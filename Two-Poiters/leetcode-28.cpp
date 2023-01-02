// link: https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/
// desciption: Tìm ra index đầu tiên của lần xuất hiện đầu tiên của dãy needle trong haystack
class Solution {
public:
    int strStr(string haystack, string needle) {
        int hlen = haystack.length(), nlen = needle.length();
        // edge case
        if(nlen > hlen) return -1;
	    // init 2-poiters to 2 string
        int h = 0, n = 0;
        while(h < hlen && n < nlen) {
            if(haystack[h] == needle[n]) {
                h++;
                n++;
            }
            else {
                // else: reset h && n
                // h = h(before) + 1
                h = h - n + 1;
                n = 0;
            }
        }
        // check if n == nlen 
        return n == nlen ? h-n : -1;
    }
};

