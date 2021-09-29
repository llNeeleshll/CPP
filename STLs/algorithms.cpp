#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <cctype> 

using namespace std;

void find_test(){   
    vector<int> v {1,2,3,4,5};

    auto locate = find(v.begin(),v.end(), 4);
    
    if(locate != v.end()){
        cout<<"The value is at "<<*locate;
    }else{
        cout<<"Can't find";
    }
}

void count_test() {
    
    cout << "\n========================" << endl;

    vector<int> vec {1,2,3,4,5,1,2,1};
     
    int num = count(vec.begin(), vec.end(), 1);
    cout << num << " occurrences found" << endl;
}

void count_if_test() {
    cout << "\n========================" << endl;

    // count only if the element is even
    vector<int> vec {1,2,3,4,5,1,2,1,100};
    int num = count_if(vec.begin(), vec.end(), [](int x) { return x %2 == 0; });
    cout << num << " even numbers found" << endl;
    
    num = count_if(vec.begin(), vec.end(), [](int x) { return x %2 != 0; });
    cout << num << " odd numbers found" << endl;
    
    // how can we determine how many elements in vec are >= 5?
    num = count_if(vec.begin(), vec.end(), [](int x) { return x>=5;   });
    cout << num << "  numbers are >= 5" << endl;

}

void replace_test() {
    cout << "\n========================" << endl;

     vector<int> vec {1,2,3,4,5,1,2,1};
     for (auto i: vec) {
         cout << i << " ";
     }
     cout << endl;
     
    replace(vec.begin(), vec.end(), 1, 100);
    for (auto i: vec) {
         cout << i << " ";
     }
    cout << endl;
}

void all_of_test() {
    vector<int> vec1 {1,3,5,7,9,1,3,13,19,5};
    if (all_of(vec1.begin(), vec1.end(), [](int x) { return x > 10; }))
        cout << "All the elements are > 10" << endl;
    else    
        cout << "Not all the elements are > 10" << endl;
    
    if (all_of(vec1.begin(), vec1.end(), [](int x) { return x < 20; }))
        cout << "All the elements are < 20" << endl;
    else    
        cout << "Not all the elements are < 20" << endl;        
}

// Transform elements in a container - string in this example
void string_transform_test() {
    cout << "\n========================" << endl;

    string str1 {"This is a test"};
    cout << "Before transform: " << str1 << endl;
    transform(str1.begin(), str1.end(), str1.begin(), ::toupper);
    cout << "After transform: " << str1 << endl;
}

int main(){
    all_of_test();
    return 0;
}