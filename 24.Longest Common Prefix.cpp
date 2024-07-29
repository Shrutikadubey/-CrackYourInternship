//problem:Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

//solution:
  if (strs.empty()) return "";
        string prefix = strs[0];
        for (int i = 1; i < strs.size(); i++) {
            while (strs[i].find(prefix) != 0) {
                prefix = prefix.substr(0, prefix.size() - 1);
                if (prefix.empty()) return "";
            }
        }
        return prefix;
