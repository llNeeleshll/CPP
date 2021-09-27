#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ifstream in_file;

    string file_content {};
    int file_int {};
    double file_double {};

    in_file.open("test.txt");

    if(!in_file){
        cout<<"Can't find file";
        return 1;
    }else{
        // cout<<"Opened"<<endl<<endl;
        // in_file>>file_content>>file_int>>file_double;
        // cout<<"File says : "<<file_content<<endl<<file_int<<endl<<file_double;

        cout<<endl<<"==========================================================="<<endl;

        //Read whole file together
        string line;
        while(!in_file.eof()){
            getline(in_file, line);
            cout<<line<<endl;
        }

        in_file.close();
    }
    
    return 0;
}