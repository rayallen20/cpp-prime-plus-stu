#include <iostream>

int main() {
    // using namespace std;
    // using std::cout;
    // using std::endl;
    // using std::cin;

    int carrots;

    std::cout << "how many carrots do you have?" << std::endl;
    std::cin >> carrots;
    std::cout << "here are two more." << std::endl;
    carrots = carrots + 2;
    std::cout << "now you have " << carrots << " carrots." << std::endl;

    return 0;
}