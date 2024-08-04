//problem:Given an integer columnNumber, return its corresponding column title as it appears in an Excel sheet.
//solution:
class Solution {
public:
    string convertToTitle(int columnNumber) {
         std::string result;
    while (columnNumber > 0) {
        columnNumber--;
        result = (char)('A' + columnNumber % 26) + result;
        columnNumber /= 26;
    }
    return result;
    }
};
