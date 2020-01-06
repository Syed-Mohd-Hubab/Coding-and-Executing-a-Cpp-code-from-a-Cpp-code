#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream f;
    f.open("texter.cpp", ios::out);
    f<< "#include<iostream>\n"
        "using namespace std;\n"    
        "int main()\n"
        "{\n"
            "   cout<<\" HI from another code YOLO\"<<endl; \n"
            "   cout<<\" Another line HEHEHE\"<<endl; \n"
        "}\n";
    cout<<"\n D0NE\n";
    f.close();
    system("g++ texter.cpp -o texter && texter.exe");
    // system("texter.exe");
}

