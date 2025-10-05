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
    ReviewNode* head;       // Pointer to the first review in the linked list

    public:
    // Constructor: sets the movie title and initializes head to nullptr
    Movie(const string& title) : title(title), head(nullptr){}
    
    // Destructor: deletes all review nodes to free memory
    ~Movie(){
        while (head != nullptr){
            ReviewNode* temp = head;
            head = head->next;
            delete temp;
        }
    }
    // Adds a new review to the head of the linked list
    void addReview(double rating, const string& comment){
        ReviewNode* newNode = new ReviewNode{ rating, comment, head };
        head = newNode;
    }
    
    // Prints all reviews and calculates the average rating
    void printReviews() const {
        if (!head){
            cout << title << ": No reviews available.\n";
            return;
        }
        cout << "\nMovie: " << title << endl;
        ReviewNode* current = head;
        int count = 0;
        double total = 0.0;

        // Go through each review and display it
        while (current){
            count++;
            cout << "  Review #" << count << ": " << fixed << setprecision(1) << 
            current->rating << " - " << current->comment << endl;
            total += current->rating;
            current = current->next;
        }
        

    }



};

int main(){



    cout << "movies review project\n";

    return 0;

}