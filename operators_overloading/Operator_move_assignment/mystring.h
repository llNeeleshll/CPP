class MyString
{
    private:
        char *str;      // pointer to a char[] that holds a C-style string
    public:
        MyString();                                            // No-args contstructor
        MyString(const char *s);                         // Overloaded contstructor              
        MyString(const MyString &source);        // Copy constructor
        ~MyString();                                          // Destructor
        void display() const;
        int get_length() const;                           // getters
        const char *get_str() const;
        MyString& operator=(const MyString &rhs);    //Copy Assignment. Overloading "=" operator.
        MyString& operator=(MyString &&rhs);    //Move Assignment. Overloading "=" operator.
  
};

// No-args constructor
MyString::MyString() 
    : str{nullptr} {
    str = new char[1];
    *str = '\0';
}

// Overloaded constructor
MyString::MyString(const char *s) 
    : str {nullptr} {
        if (s==nullptr) {
            str = new char[1];
            *str = '\0';
        } else {
            str = new char[std::strlen(s)+1];
            std::strcpy(str, s);
        }
}

// Copy constructor
MyString::MyString(const MyString &source) 
     : str{nullptr} {
        str = new char[std::strlen(source.str )+ 1];
        std::strcpy(str, source.str);
}

// Destructor
MyString::~MyString() {
    delete [] str;
}

// Display method
void MyString::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}

//Copy Assignment -> Overloaded "=" operator
MyString& MyString::operator=(const MyString &rhs){

    std::cout<<"Copy Assignment"<<std::endl;

    if(this == &rhs){
        return *this;
    }

    delete [] this->str;

    str = new char[std::strlen(rhs.str) + 1];

    std::strcpy(this->str, rhs.str);

    return *this;
}

MyString& MyString::operator=(MyString &&rhs){
    std::cout<<"Using Move Assignment"<<std::endl;

    if(this == &rhs){
        return *this;
    }

    delete [] this->str;

    str = rhs.str;
    rhs.str = nullptr;

    return *this;
}

// length getter
int MyString::get_length() const { return std::strlen(str); }
 
  // string getter
const char *MyString::get_str() const { return str; }