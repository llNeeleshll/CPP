#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ifstream in_file;

    string file_content {};

    in_file.open("test.txt");

    if(!in_file){
        cout<<"Can't find file";
        return 1;
    }else{
        cout<<"Opened"<<endl<<endl;
        in_file>>file_content;
        cout<<"File says : "<<file_content<<endl;
        in_file.close();
    }
    
    return 0;
}