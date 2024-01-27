#include <iostream>
#include <sstream>
#include <string>
#include <vector>

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


int main() {
    /*Task 1*/
    /*std::string str = "";

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
    */
   

    /*Task 2*/
    /*
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
    */

    /*Task 3*/
   /*
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
    */

    /*Task 4*/

    /*

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
    */

    /*Task 5*/

    /*
    *   «адача 5
—ама€ длинна€ строка в массиве 
¬вод€тс€ строки. ќпределить самую длинную строку и вывести ее номер на экран. ≈сли 
самых длинных строк несколько, то вывести номера всех таких строк.
1. ѕри считывании строк, каждую из них следует поместить в массив.
2. ѕредположим, что перва€ строка сама€ длинна€. ѕрисвоим ее индекс переменной.
3. ѕереберем все элементы-строки массива, начина€ со второго. ≈сли длина очередной 
строки больше, чем той, индекс которой записан в переменной (п. 2), то записать в эту 
переменную индекс текущей строки.
4. —нова переберем все элементы массива строк. ≈сли длина очередной строки совпадает с 
длиной той строки, индекс которой хранитс€ в переменной (п. 2), то вывести ее номер на 
экран.
    */
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

    }
    int mxlen = -1;
    int mxlenind = -1; 

    str5 = strip(str5);

    int i = 0;

    std::vector<std::string> result;

    inp >> str5;

    // extract substrings one-by-one
    while (!inp.eof()) {
        std::string substring;
        inp >> substring;
        result.push_back(substring);
    }

    // print all the extracted substrings
    for (const std::string& substring : result) {
        std::cout << substring << std::endl;
    }
}

    
