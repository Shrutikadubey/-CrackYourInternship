//problem:Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

//solution:
if (needle.empty()) {
            return 0;
        }
        int n = haystack.size(), m = needle.size();
        for (int i = 0; i <= n - m; i++) {
            int j = 0;
            while (j < m && haystack[i + j] == needle[j]) {
                j++;
            }
            if (j == m) {
                return i;
            }
        }
        return -1;
