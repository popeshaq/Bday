#include <iostream>
#include <fstream>
using namespace std;
int selection;
string cont = "Yes, please keep going!";
/*
File management process:
    Attempt to open a file.
    If the file opened:
        process it
        close it
    Otherwise:
        Print an error message
*/


int main(){
cout << "What I really want for my birthday this year is a new job, so I'm making this cringey C++ birthday list as practice. Anyway, here's some things I'd like on a numbered list.\n";
while(cont != "n"){
    cout << "Enter the number of the item for a URL:\n";
    cin >> selection;
    if (selection == 1298){
        cout << "What would you like to add to the list?";
    }
}


/*
for (i = 0; i<thelist.size(); i++){
    cout << i << " - " << thelist[i];
}*/

//main function close
}