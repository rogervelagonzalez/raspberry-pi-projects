#include <iostream>
#include <vector>
using namespace std;

class List{
    private:
    //Only the class can access
    protected:
    // Things that the class or inherited by the class can access
    public:
    List(){
        //constructor
    }
    ~List(){
        //destructor
    }
    vector<string> list;
    string name;

    void print_menu();
    void print_list();
    void add_item();
    void delete_item();
    
};