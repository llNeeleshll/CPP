#include <iostream>
#include <vector>

using namespace std;

int main(){

    char selection {};
    vector <int> vec {};

    do{               

        cout<<"P - Print Numbers"<<endl;
        cout<<"A - Add Numbers"<<endl;
        cout<<"M - Display Mean"<<endl;
        cout<<"L - Display Largest Number"<<endl;
        cout<<"S - Display Smallest Number"<<endl;
        cout<<"Q - Quit"<<endl;

        cout<<"Your selection? : ";
        cin >> selection;

        switch (selection)
        {
            case 'P':
            case 'p':{
                cout<<endl<<"This list is : [";
                for(auto i : vec){
                    cout<<" "<<i<<" ";
                }
                cout<<"]"<<endl<<endl;
            }break;

            case 'A':
            case 'a':{
                int number {};
                cout<<endl<<"What is the number? : ";
                cin>>number;
                vec.push_back(number);
                cout<<"Number "<<number<<" is inserted."<<endl<<endl;
            }break;

            case 'M':
            case 'm':{         
                double avg {};       
                for(auto i : vec){
                    avg += i;
                }
                avg /= vec.size();
                cout<<endl<<endl<<"Average of the list is : "<<avg<<endl<<endl;
            }break;

            case 'L':
            case 'l':{         
                int num {vec.at(0)};       
                for(auto i : vec){
                    if (num < i){
                        num = i;
                    }
                }                
                cout<<endl<<endl<<"Largest number of the list is : "<<num<<endl<<endl;
            }break;

            case 'S':
            case 's':{         
                int num {vec.at(0)};       
                for(auto i : vec){
                    if (num > i){
                        num = i;
                    }
                }                
                cout<<endl<<endl<<"Smallest number of the list is : "<<num<<endl<<endl;
            }break;
            
            default:
                break;
        }

    }while (selection != 'q' && selection != 'Q');

    return 0;
}