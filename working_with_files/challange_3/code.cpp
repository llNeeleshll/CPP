#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){

    ifstream file_read;
    ofstream file_write;

    file_read.open("romeoandjuliet.txt");
    file_write.open("romeoandjuliet_edited.txt");

    if(file_read && file_write){

        string file_data {};

        int line_number {0};

        while(!file_read.eof()){
            getline(file_read, file_data);

            if(file_data == ""){
                cout<<endl;
            }else{
            file_write << ++line_number << " " << file_data<<endl;
            }

        }

        file_read.close();
        file_write.close();

    }else{
        cerr<<"Can't read files";
        return 1;
    }

    cout<<"Completed!";

    return 0;
}