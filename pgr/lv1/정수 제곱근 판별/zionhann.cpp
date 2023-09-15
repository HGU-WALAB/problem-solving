/**
 * @date 2023-09-15
 * @author Sion Han
 * @ref https://school.programmers.co.kr/learn/courses/30/lessons/12934
 * @difficulty Lv. 1
 * @details sqrt()를 취했을 때 반환값이 정수인지 확인하는 것이 관건이었다.
 * 인자로 받은 수보다 작으면서 가장 큰 정수를 반환하는 floor() 함수를 사용해
 * 기존의 수와 같은지 확인하면 된다.
 */
#include <string>
#include <vector>
#include <cmath>

using namespace std;

bool isInteger(double num) {
    return floor(num) == num;
}

long long solution(long long n) {
    const double num = sqrt(n);
    
    return (isInteger(num))
        ? (num + 1) * (num + 1)
        : -1;
}