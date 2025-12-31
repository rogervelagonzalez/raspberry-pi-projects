#include <iostream>
#include <vector>
#include "include/list.h"
using namespace std;



int main(int arg_count, char *args[]) {
    //vector<string> list;
    if (arg_count > 1){
        List simpleList;
        simpleList.name = string(args[1]);
        simpleList.print_menu();
    }else{
        cout << "Username not supplied... Exiting the program!\n" << endl;
    }
    return 0;
}