#include <iostream>

using namespace std;

int slice(int n) {
    return n / 10;
}

int leastDigit(int n) {
    return n % 10;
}

int solution(int n) {
    int answer = 0;
    
    while (n != 0) {
        answer += leastDigit(n);
        n = slice(n);
    }
    return answer;
}