#include<iostream>  // for input/output cin/cout  // COMSC-210 | Lab 19 | Mansoor Noori
#include<fstream>   // for reading from file      // IDE Visual Studio,
#include<vector>    // for using dynamic array 
#include<iomanip>   // for formatting output setprecision
#include<string>    // for using the strings 
#include<ctime>     // for generating random number using time


using namespace std;

// movie class
class Movie{
    private:
    string title;

    // Each review is stored as a node in a linked list
    struct ReviewNode{
        double rating;
        string comment;
        ReviewNode* next;   // Pointer to the next review in the list
    };

    public:
    // Constructor: sets the movie title and initializes head to nullptr
    Movie(const string& title) : title(title), head(nullptr){}

    ~Movie(){
        while (head != nullptr){
            ReviewNode* temp = head;
            head = head->next;
            delete temp;
        }
    }


};

int main(){



    cout << "movies review project\n";

    return 0;

}