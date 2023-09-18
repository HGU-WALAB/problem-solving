/**
 * @date 2023-09-18
 * @author Sion Han
 * @ref https://school.programmers.co.kr/learn/courses/30/lessons/12912
 * @difficulty Lv. 1
 * @details 각 자리수를 더하는 변수(answer)와 a ~ b를 순회하는 변수(iter)를 분리하여 생각한다.
 */
#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = a;
    int iter = a;
    
    while (iter != b) {
        if (iter < b) {
            iter++;
            answer += iter;
            continue;
        }
        // iter > b
        iter--;
        answer += iter;
    }
    return answer;
}