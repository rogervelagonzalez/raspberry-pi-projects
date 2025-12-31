#include "include/list.h"

void List::print_menu(){
    int choice;
    //list<string> toDoList;
    string todoelement;
    int iterations(0);
    while(iterations < 10){
        cout << "********************\n";
        cout << "** 1 - Print list. **\n";
        cout << "** 2 - Add to list. **\n";
        cout << "** 3 - Delete from list. **\n";
        cout << "** 4 - Quit\n **";
        cout << "********************\n";
        cout << "Enter your choice and press return: ";

        cin >> choice;

        if(choice == 4){
            exit(0);
        }else if(choice == 1){
            print_list();
        }else if(choice == 2){
            add_item();
        }else{
            delete_item();
        }
        iterations++;
    }
}

void List::print_list(){
    if(list.empty()){
        cout << "The list is currently empty!\n";
    }else{
        int i = 0;
        for (string element : list){
            cout << i << ": " << element << endl;
            i++;
        }
    }
}
void List::add_item(){
    string item;
    cout << "\n";
    cout << "*** Adding item *** \n";
    cout << "Type the new element to add: ";
    cin >> item;
    list.push_back(item);
    cout << "\n*** New item added *** \n";
}
void List::delete_item(){
    int index;
    if(list.empty()){
        cout << "The list is currently empty!\n";
    }else{
        cout << "\n";
        cout << "*** Deleting item *** \n";
        for (int i = 0; i < (int)list.size(); i++){
            cout << i << ": " << list[i] << endl;
        };
        cout << "What element do you wish to delete?: \n";
        cin >> index;
        list.erase(list.begin()+index);

        
    }
    //print_menu();
}