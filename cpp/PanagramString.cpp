#include <iostream>
#include <vector>
#include <string>
using std::cin;
using std::endl;
using std::cout;

class Solution {
protected:
    bool checkIfPangram(std::string sentence) {
        std::vector<int> hash(26);
        for(int i=0;i<26;i++)
            hash[i] = 0;
        
        for (char ch : sentence) {
            hash[ch-'a']++;
        }
        for (int i=0;i<26;i++)
        {
            if(!hash[i])
                return false;
        }
        return true;
    }
};

class TestCases : public Solution{
public:
    TestCases(){}
    void validOP() {
        std::vector<std::string> test= {"thequickbrownfoxjumpsoverthelazydog","dipankardas"};
        std::vector<bool> check = {true, false};
        int index = 0;
        for (std::string iter : test) {
            if(check[index++] != checkIfPangram(iter)) {
                std::cerr<<"❌ ("<<index<<"/"<<test.size()<<")Test case\n";
                return;
            } else {
                std::cerr<<"✅ ("<<index<<"/"<<test.size()<<")Test case\n";
            }
        }
    }
};

int main(int argc, char** argv) {
    TestCases run;
    run.validOP();
    remove(argv[0]);
    return EXIT_SUCCESS;
}