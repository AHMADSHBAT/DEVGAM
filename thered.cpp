#include <iostream>
#include <ctime>  // For time functions
#include <string> // For string manipulation

using namespace std;

// Function to print the current time with a custom message
void printTimeWithMessage(const string &customMessage)
{
    // Get the current time
    time_t tt;
    tm *ti;
    time(&tt);
    ti = localtime(&tt);

    // Get the formatted time
    string formattedTime = asctime(ti);

    // Remove the newline at the end of the formatted time
    formattedTime.pop_back(); // Removes the last character (newline)

    // Print the custom message with time prefixed
    cout << "[" << formattedTime << "] " << customMessage << endl;
}

int main()
{
    // Call the function and pass the custom message
    printTimeWithMessage("Hello World!");

    return 0;
}
