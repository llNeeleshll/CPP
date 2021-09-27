#include<iostream>
#include<fstream>
#include<string>
#include<vector>

using namespace std;

class Student{
    
    string name{};
    int correct {};

    public:

        Student(string name, int correct){
            this->name = name;
            this->correct = correct;
        }

        string get_name(){
            return name;
        }

        int get_marks(){
            return correct;
        }
};


int main(){

    vector<Student> students {};

    ifstream file;

    file.open("response.txt");

    int count {0};

    if(file){

        string correct_answers {};

        while(!file.eof()){
            if(count++ == 0){
                file>>correct_answers;
            }else{                
                string student_name {};
                string answer {};

                file>>student_name;
                file>>answer;

                int marks {};
                int flag {0};

                for(auto ans : correct_answers){
                    if(ans == answer[flag++]){
                        marks++;
                    }
                }

                students.push_back(Student(student_name, marks));
            }
        }

        for(Student student : students){
            cout<<student.get_name()<<" socred : "<<student.get_marks()<<" marks."<<endl;
        }
    }
}