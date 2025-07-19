#include <iostream>
#include <string>
#include <sstream>
#include <vector>


using namespace std;

void easyImport() {
    cout<<"PLEASE TYPE IMPORTS SUCH AS: `iostream string vector sstream`"<<endl;
    string importlar;
    getline(cin, importlar);
    istringstream iss(importlar);


    string ss_importlar;

    vector<string> imports;
    while (iss >> ss_importlar) {
        imports.push_back(ss_importlar);
    }

    
    string str_imports;
    for (int i = 0; i < imports.size(); i++) {
        str_imports += "#include <" + imports[i] + ">\n";
    }


    cout << endl << str_imports << endl;


    
}


int main() {
   
    easyImport();

    char a;
    cin>>a;
    
}
