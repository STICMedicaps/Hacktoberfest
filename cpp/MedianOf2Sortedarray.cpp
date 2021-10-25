#include <iostream>
#include <vector>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

class Solution
{
protected:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> res;
        int m = nums1.size();
        int n = nums2.size();

        int i, j;
        i = j = 0;
        while (i < m && j < n) {
            if (nums1.at(i) > nums2.at(j)) {
                // insert nums2
                res.push_back(nums2.at(j));
                j++;
            }
            else if (nums1.at(i) < nums2.at(j)) {
                res.push_back(nums1.at(i));
                i++;
            }
            else {
                res.push_back(nums2.at(j));
                res.push_back(nums1.at(i));
                i++;
                j++;
            }
        }

        while (j < n) {
            res.push_back(nums2.at(j));
            j++;
        }

        while (i < m) {
            res.push_back(nums1.at(i));
            i++;
        }
        double ret;
        if (res.size() & 1) {
            // odd
            ret = res.at(res.size() / 2);
        }
        else {
            //even
            ret = res.at(res.size() / 2 - 1) + res.at(res.size() / 2);
            ret = ret / 2.0;
        }

        return ret;
    }
};

class Test : public Solution {
public:
    void testCases() {
        std::vector<std::string> test = {
            "[1,3]",
            "[2]",
            "[1,2]",
            "[3,4]",
            "[0,0]",
            "[0,0]",
            "[]",
            "[1]",
            "[2]",
            "[]"
        };
        int pos = 0;
        std::vector<double> res = {2.00000, 2.50000, 0.00000, 1.00000, 2.00000};
        for (int i=0; i<test.size()-1; i+=2) {
            std::vector<int> t1, t2;
            std::string x;
            for (int j=0;j<test[i].length(); j++) {
                if (test[i][j]>='0' && test[i][j]<='9') {
                    x += test[i][j];
                } else {
                    if (j!=0) {
                        if (x.length()==0)
                            continue;
                        int n = std::stoi(x);
                        t1.push_back(n);
                    }
                    x="";
                }
            }
            for (int j=0;j<test[i + 1].length(); j++) {
                if (test[i + 1][j]>='0' && test[i + 1][j]<='9') {
                    x += test[i + 1][j];
                } else {
                    if (j!=0) {
                        if (x.length()==0)
                            continue;
                        int n = std::stoi(x);
                        t2.push_back(n);
                    }
                    x="";
                }
            }

            if (res[pos] != findMedianSortedArrays(t1,t2)) {
                std::cerr<<"❌ ("<<pos+1<<"/"<<res.size()<<")Test case\n";
                return;
            } else {
                std::cerr<<"✅ ("<<pos+1<<"/"<<res.size()<<")Test case\n";
            }
            pos++;
        }
    }
};

int main(int argc, char **argv) {
    Test run;
    run.testCases();
    remove(argv[0]);
    return EXIT_SUCCESS;
}