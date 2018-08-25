#include <iostream>
#include <ctime>
using namespace std;

void time(){
    time_t now = time(0); //get current time 
    tm* localtm = localtime(&now); //convert now to local time structure
    cout << asctime(localtm) <<endl; //print date and time
}

int main() {
    time();
	return 0;
}
