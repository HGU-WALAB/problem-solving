/**
 * @date 2023-09-18
 * @author Sion Han
 * @ref https://school.programmers.co.kr/learn/courses/30/lessons/12947
 * @difficulty Lv. 1
 * @details
 */
#include <string>
#include <vector>

using namespace std;

int digitSumOf(int x) {
    int sum = 0;
    
    while (x != 0) {
        int digit = x % 10;
        
        sum += digit;
        x /= 10;
    }
    return sum;
}

bool solution(int x) {    
    int num = digitSumOf(x);
    return x % num == 0;
}