#include<iostream>
#include<fstream>
#include<list>
#include<map>
#include<string>
#include<algorithm>
#include <cctype>
#include<set>

using namespace std;

void read_file(string file_name, list<string> &all_file_content){

    ifstream file_read;

    file_read.open(file_name);

    string content;

    if(file_read){
        while (!file_read.eof()){
            file_read>>content;
            if(content != ""){
                all_file_content.push_back(content);
            }
        }
    }    

    file_read.close();
}

void read_file_line(string file_name, list<string> &all_file_content_lines){

    ifstream file_read;

    file_read.open(file_name);

    string content;

    if(file_read){
        while (!file_read.eof()){
            getline(file_read,content);
            all_file_content_lines.push_back(content);
        }
    }

    file_read.close();
}

void create_map(list<string> const &file_content, map<string, int> &word_map){
    for(auto item : file_content){
        
        int count {0};
        
        auto it = word_map.find(item);

        //This means that the key is not present
        if(it == word_map.end()){
           for(auto sub_item : file_content){
                if(item == sub_item){
                    count++;
                }
            }
            word_map[item] = count;
        }        
    }
}

void create_map_line_numbers(list<string> const &file_content, list<string> const &file_content_by_line, map<string, set<int>> &word_map){
    for(auto item : file_content){
        
        int count {0};
        set<int> line_numbers;

        for(auto sub_item : file_content_by_line){

            count++;

            size_t index = sub_item.find(item);

            if(index != string::npos){
                //Found
                line_numbers.insert(count);
            }
        }

        word_map[item] = line_numbers;   
    }
}

void display_map(map<string, int> const &word_map){
    for(auto item : word_map){
        cout<<item.first<<" : "<<item.second<<endl;
    }
}

void display_map_lines(map<string, set<int>> const &word_map){
    for(auto item : word_map){

        cout<<item.first<<" : [";

        for(auto sub_item : item.second){
            cout<<sub_item<<" ";
        }
        
        cout<<"]"<<endl;
    }
}

int main(){

    list<string> all_file_content {};
    list<string> all_file_content_lines {};
    map<string, int> word_map {};
    map<string, set<int>> word_map_in_line {};

    read_file("words.txt", all_file_content);
    read_file_line("words.txt", all_file_content_lines);

    cout<<"Total Words : "<<all_file_content.size()<<endl;
    cout<<"Total Lines : "<<all_file_content_lines.size()<<endl;

    create_map(all_file_content, word_map);
    display_map(word_map);

    create_map_line_numbers(all_file_content, all_file_content_lines, word_map_in_line);
    display_map_lines(word_map_in_line);
    
    return 0;
}