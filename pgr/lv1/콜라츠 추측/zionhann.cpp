/**
 * @date 2023-09-18
 * @author Sion Han
 * @ref https://school.programmers.co.kr/learn/courses/30/lessons/12943
 * @difficulty Lv. 1
 * @details 순회중 오버플로우가 발생할 수 있다는 점을 고려해야 한다.
 */
#include <string>
#include <vector>

using namespace std;

const int MAX_ITERATION = 500;

bool isEven(long n) {
    return n % 2 == 0;
}

int solution(int num) {
    int answer = 0;
    long numAsLong = num;
    
    for (int i = 0; i <= MAX_ITERATION; ++i) {
        if (numAsLong == 1) return i;
        else if (isEven(numAsLong)) numAsLong /= 2;
        else numAsLong = (numAsLong * 3) + 1;
    }
    return -1;
}