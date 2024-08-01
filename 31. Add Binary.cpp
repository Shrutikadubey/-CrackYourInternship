//problem:Given two binary strings a and b, return their sum as a binary string.
//solution:
string result;
        int carry = 0;
        int i = a.length() - 1, j = b.length() - 1;
        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;
            if (i >= 0) sum += a[i--] - '0';
            if (j >= 0) sum += b[j--] - '0';
            result.push_back('0' + sum % 2);
            carry = sum / 2;
        }
        reverse(result.begin(), result.end());
        return result;
