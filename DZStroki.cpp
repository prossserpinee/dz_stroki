#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <map>

std::string strip(const std::string& str)
{
    auto start_it = str.begin();
    auto end_it = str.rbegin();
    while (std::isspace(*start_it))
        ++start_it;
    while (std::isspace(*end_it))
        ++end_it;
    return std::string(start_it, end_it.base());
}

std::string spacedlt(std::string str) {
    str.erase(remove(str.begin(), str.end(), ' '), str.end());
    return str;
}

bool pailndorm(std::string str) {
    int ln = str.length() / 2;
    for (int i = 0; i < ln; i++) {
        if (str[i] != str[str.length() - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    /*Task 1*/
    std::string str = "";

    std::cout << "Enter the string" << std::endl;
    std::getline(std::cin, str);

    int stroch = 0;
    int propis = 0;

    for (int i = 0; i < str.size(); i++) {

        if (str[i] >= 'a' && str[i] <= 'z') {
            stroch++;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            propis++;
        }
    }
    std::cout << "Result for Task 1: " << std::endl;
    std::cout << "Amount of strochniy" << stroch << std::endl;
    std::cout << "Amount of prorisniy" << propis << std::endl;
    


    /*Task 2*/
    
    std::string str2 = "";

    std::cout << "Enter the string" << std::endl;
    std::getline(std::cin, str2);

    bool flag = false;

    int cnt = 0;

    str2 = strip(str2);

    for (char c : str2) {
        if (c != ' ' && !flag) {
            cnt++;
            flag = true;
        }
        else if (c == ' ') {
            flag = false;
        }
    }

    std::cout << "Result for Task 2: " << cnt << std::endl;
    

    /*Task 3*/
   
    std::string s = "";

    std::srand(std::time(0));

    std::cout << "Enter the string" << std::endl;
    std::getline(std::cin, s);

    int ls = s.length();

    int wcount = 0;
    std::cout << "Enter count of words" << std::endl;
    std::cin >> wcount;

    for (int i = 0; i < wcount; i++) {
        int lw = std::rand() % 6 + 2;
        std::string w = "";
        int counter = 0;

        while (counter < lw) {
            int let = std::rand() % ls;

            if (s[let] != ' ') {
                w += s[let];
                counter++;
            }
        }
        std::cout << "The word is: " << w << std::endl;

    }
    

    /*Task 4*/

    std::string str4 = "";

    std::cout << "Enter the string" << std::endl;
    std::getline(std::cin, str4);

    for (int i = 0; i < str4.size(); i++) {
        if (str4[i] == str4[i + 1])
            str4.erase(i, 1);

    }

    std::string res = str4;

    for (int j = 0; j < str4.size(); j++) {
        for (int k = j + 1; k < res.length() + 1; k++) {
            if (str4[j] == res[k]) {
                res.erase(k, 1);
            }
        }
    }
    std::cout << res << std::endl;
    

    /*Task 5*/

    std::string str5 = "";
    std::string str5_1 = "";
    std::istringstream inp;

    bool flag = true;

    std::cout << "Enter the string" << std::endl;
    while (flag) {
        std::cout << "Enter the string" << std::endl;
        std::getline(std::cin, str5_1);

        if (str5_1 == " ")
            flag = false;
        else
            str5 += str5_1;
        flag = true;

    }

    str5 = strip(str5);

    std::vector <std::string> result;
    std::vector <int> resint;

    inp >> str5;

    while (!inp.eof()) {
        std::string substring;
        inp >> substring;
        result.push_back(substring);
    }
    int mx = -1;

    for (const std::string& substring : result) {
        if (substring.size() > mx)
            mx = substring.size();

    }

    for (const std::string& substring : result) {
        if (substring.size() == mx) {
            std::cout << substring << std::endl;
            exit(0);
        }
    }

    /*Task 6*/
    std::string str6 = "";

    std::cout << "Enter the string" << std::endl;
    std::getline(std::cin, str6);

    str6 = spacedlt(str6);

    if (pailndorm(str6)) 
        std::cout << "Result for Task 6" << "String is palindrom" << std::endl;
    else
        std::cout << "Result for Task 6" << "String is not palindrom" << std::endl;

    /*Task 7*/

    std::string str7 = "";
    std::string substr7 = "";

    std::cout << "Enter the string" << std::endl;
    std::getline(std::cin, str7);

    std::cout << "Enter the substring" << std::endl;
    std::getline(std::cin, substr7);

    int lnstr7 = str7.size();

    bool flag7 = true;

    while (str7.find(substr7)){
        str7.replace(str7.find(substr7), str7.length(), substr7);
    }
    std::cout << "Result for Task 7: " << str7 << std::endl;
    

}



    

    
