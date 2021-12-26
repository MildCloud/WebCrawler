#include<iostream>
#include<regex>

using namespace std;

int main() {
    //string to be searched
    string str1 = "<h1>this is a title</h1><p>this is content</p>>>>>"; 
    // regex expression for pattern to be searched 
    regex regexp1("<h1>.*>"); 
    // flag type for determining the matching behavior (in this case on string objects)
    smatch m1; 
    // regex_search that searches pattern regexp in the string mystr  
    regex_search(str1, m1, regexp1); 

    cout<<"String ["<< str1 <<"] that matches the pattern:"<<endl;
    for (auto x : m1) {
        cout << x << " " << endl;
    }

    string str2 = "linux linnnx lx x l 00x l...x", str21 = "...x";

    regex regexp2("l*x");
    smatch m2;
    regex_search(str2, m2, regexp2);
    cout<<"String ["<< str2 <<"] that matches the pattern l*x:"<<endl;
    for (unsigned int i = 0; i < m2.size(); i++) {
        cout << "[" << m2[i] << "]" << endl;
    }

    regex regexp21("l*x");
    smatch m21;
    regex_search(str21, m21, regexp21);
    cout<<"String ["<< str21 <<"] that matches the pattern l*x:"<<endl;
    for (unsigned int i = 0; i < m21.size(); i++) {
        cout << "[" << m21[i] << "]" << endl;
    }

    // string str3 = "linux linnnx lx x l 00x l...x";
    // regex regexp3("*x");This is illegal syntax
    // smatch m3;
    // regex_search(str3, m3, regexp3);
    // cout<<"String that matches the pattern *x:"<<endl;
    // for (unsigned int i = 0; i < m3.size(); i++) {
    //     cout << "[" << m3[i] << "]" << endl;
    // }

    regex regexp4("l.*x");
    smatch m4;
    regex_search(str2, m4, regexp4);
    cout<<"String ["<< str2 <<"] that matches the pattern l.*x:"<<endl;
    for (unsigned int i = 0; i < m4.size(); i++) {
        cout << "[" << m4[i] << "]" << endl;
    }

    return 0; 
}