#include<iostream>
#include<string>

using namespace std;

class DivideByZeroException{

};

class NegativeValueException : exception{
    public:
        NegativeValueException() noexcept = default;
        ~NegativeValueException() = default;
        virtual const char* what() const noexcept {
            return "Negative value Exception";
        }
};

double calculate(int miles, int gallons){
    if (gallons == 0){
        throw DivideByZeroException{};
    }

    if(miles < 0){
        throw NegativeValueException{};
    }
    return static_cast<double>(miles)/gallons;
}

int main(){

    try{
        cout<<"Answer : "<<calculate(-10,10);
    }catch(const DivideByZeroException &ex){
        cerr<<"Divide by zero Exception"<<endl;
    }catch(const NegativeValueException &ex){
        cerr<<"Negative Value Exception : "<<ex.what();
    }catch(...){
        cerr<<"Unknown Error";
    }

    return 0;
}