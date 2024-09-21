#include <iostream>
#include <ctime>  // For time functions
#include <string> // For string manipulation

using namespace std;

// Class that encapsulates the time printing functionality
class Players {
public:
    // Constructor (optional, depending on usage)
    Players() 
    {
        std::cout << "the default constructor was called." << std::endl;
    }

    Players(int i)
    {
        std::cout << "the int constructor was called, the int is: " << i << std::endl;
        number = i;

    }


    // Method to print the current time with a custom message
    void printTimeWithMessage(const string& customMessage) {
        // Get the current time
        time_t tt;
        tm *ti;
        time(&tt);
        ti = localtime(&tt);

        // Get the formatted time
        string formattedTime = asctime(ti);
        
        // Remove the newline at the end of the formatted time
        formattedTime.pop_back();  // Removes the last character (newline)

        // Print the custom message with time prefixed
        cout << "[" << formattedTime << "] " << customMessage << endl;
    }

    int number;

};

int main() {
    // Create an instance of the Players class
    Players My(66);
    // Call the method and pass the custom message
    MyClass.printTimeWithMessage("Hello World!");

    return 0;
}
