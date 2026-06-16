class Solution {
public:
    int compareVersion(string version1, string version2) {
        int i = 0, j = 0;
        int n = version1.size(), m = version2.size();

        while (i < n || j < m) {
            string v1 = "", v2 = "";

            while (i < n && version1[i] != '.') {
                v1 += version1[i];
                i++;
            }

            while (j < m && version2[j] != '.') {
                v2 += version2[j];
                j++;
            }

            int n1 = v1.empty() ? 0 : stoi(v1);
            int n2 = v2.empty() ? 0 : stoi(v2);

            if (n1 < n2) return -1;
            if (n1 > n2) return 1;

            i++;
            j++; 
        }

        return 0;
    }
};