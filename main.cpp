#include <iostream>
#include <vector>

using namespace std;

std::vector<int> create_vector(int min, int max){
    int size= max-min;
    std::vector<int> v;
    for(int i =0 ; i<=size ; i++){
        v.emplace_back(min+i);
    }
    return v;
}

bool is_prime(int number){
    bool prime = true;
        if (number == 1) {
            return false;
        }
        else {
            for (long long int i = 2; i <= number/2 ; i++) {
                if (number % i == 0) {
                    prime = false;
                    break ;
                }
            }
            return prime;
        }
}

void print_vector(std::vector<int> numbers){
    for (auto value : numbers) {
        std::cout << value << ", ";
    }
    cout << endl;
}

void remove_prime_numbers(std::vector<int> &numbers){
    std::vector<int> numbers2;
    for(auto value : numbers){
        if(is_prime(value)==false){
            numbers2.emplace_back(value);
        }
    }
    numbers.clear();
    for(auto value : numbers2){
        numbers.emplace_back(value);
    }

}

int main()
{
    std::vector<int> numbers = create_vector(1,10);
    std::cout << "Before removing prime numbers: " << std::endl;
    print_vector(numbers);
    remove_prime_numbers(numbers);
    std::cout << "After removing prime numbers: " << std::endl;
    print_vector(numbers);
}
