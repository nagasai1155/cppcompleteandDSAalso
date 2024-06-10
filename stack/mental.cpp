To find the maximum occurrence of a character in a given string in C++, you can use an array to keep track of the frequency of each character. Here's a sample code that accomplishes this:


Sample Code:

#include <iostream>
using namespace std;

char findMaxOccurrence(char str[], int n) {
    int freq[26] = {0}; // Initialize an array to store the frequency of each lowercase letter
    for (int i = 0; i < n; i++) {
        freq[str[i] - 'a']++; // Increment the frequency of the corresponding letter
    }
    int maxFreq = 0;
    char result;
    for (int i = 0; i < 26; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            result = i + 'a'; // Convert the index back to the corresponding lowercase letter
        }

    }