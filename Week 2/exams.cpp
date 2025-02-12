/*Peter Caba 
C++ 141*/
#include <iostream>
#include <limits>  

int main() {   
    std::string username;
    int testscore1, testscore2, testscore3;
    float total, average;
    
    std::cout << "Hey there! What's your name? ";
    std::getline(std::cin, username);
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    
    std::cout << "Nice to meet you, " << username << "!" << std::endl;
    std::cout << "Let's talk about your test scores. What's the score for your first test? ";
    std::cin >> testscore1;
    std::cout << "Great! Now, what did you score on your second test? ";
    std::cin >> testscore2;
    std::cout << "And finally, how did you do on your third test? ";
    std::cin >> testscore3;
    
    total = testscore1 + testscore2 + testscore3;
    average = total / 3;
    
    std::cout << "\nThanks for sharing your scores with me, " << username << "!" << std::endl;
    std::cout << "Here's what I have for you:\n";
    std::cout << "Your three test scores are: " << testscore1 << ", " << testscore2 << ", and " << testscore3 << "." << std::endl;
    std::cout << "Your average score is " << average << "." << std::endl;
    std::cout << "Keep up the great work!" << std::endl;
    
    return 0;
}

