//////////////////////////////////////////////written by mht83/////////////////////////////////////////
#include <iostream>
#include <string>

bool isValidISBN10(const std::string isbn) {
    if (isbn.length() != 10) return false;

    int sum = 0;
    for (int i = 0; i < 9; i++) { 
        sum += int(isbn[i]) * (10-i);
    }

    
    if (isbn[9] == 'X') {
        sum += 10;
    }
    else  {
        sum += int(isbn[9]);
    }
    
    return (sum % 11 == 0);
}

int main() {
    std::string isbn;
    std::cout << "Enter ISBN-10 to validate: ";
    std::cin >> isbn;

    if (isValidISBN10(isbn)) {
        std::cout << "The ISBN-10 number is valid.";
    }
    else {
        std::cout << "The ISBN-10 number is invalid.";
    }

    return 0;
}
