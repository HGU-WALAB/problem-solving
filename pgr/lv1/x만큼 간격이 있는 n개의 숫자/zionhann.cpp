/**
 * @date 2023-09-12
 * @author Sion Han
 * @ref https://school.programmers.co.kr/learn/courses/30/lessons/12954
 * @difficulty Lv. 1
 * @details
 * x의 값이 변하는 것이 아닌 마지막 더해진 값에서 같은 x 값을 더해간다.
 * 그리고 리스트의 마지막 원소가 곧 마지막 더해진 값이다.
 */
#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer = {x};
    
    int i = 1;
    
    while (i < n) {
        const long long value = answer[i-1] + x;
        answer.push_back(value);
        i++;
    }
    return answer;
}