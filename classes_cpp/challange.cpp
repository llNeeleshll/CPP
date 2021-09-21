#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Movie{

    private:
        string name;
        string rating;
        int watch_count;

    public:

        string get_name(){
            return name;
        }

        string get_rating(){
            return rating;
        }

        int get_watch_count(){
            return watch_count;
        }
        Movie(string name, string rating, int watch_count){
            this->name = name;
            this->rating = rating;
            this->watch_count = watch_count;
        }
};

class Movies{
    private:
        vector<Movie> movies;

    public:
        void add_movie(string name, string rating, int watch_count){
            Movie movie {name,rating,watch_count};
            movies.push_back(movie);
        }

        void display_all(){
            for(auto m : movies){
                cout<<"--------------------------------------------------------------"<<endl;
                cout<<"Name of Movie : "<<m.get_name()<<endl;
                cout<<"Rating : "<<m.get_rating()<<endl;
                cout<<"Watched : "<<m.get_watch_count()<<" times."<<endl;
                cout<<"--------------------------------------------------------------"<<endl<<endl;
            }
        }
};

int main(){
    
    Movies movies;

    movies.add_movie("Man in Black","5",20);
    movies.add_movie("Matrix","5",30);
    movies.add_movie("The Universe","5",80);
    movies.display_all();
    return 0;
}