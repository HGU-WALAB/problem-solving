/**
 * @date 2023-09-12
 * @author Sion Han
 * @ref https://school.programmers.co.kr/learn/courses/30/lessons/12932#
 * @difficulty Lv. 1
 * @details
 * 10으로 나눈 나머지가 곧 일의 자리이므로
 * 그대로 배열에 push하면 수를 뒤집어 각 자리수를 포함하게 된다.
 */
#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    
    while (n != 0) {
        answer.push_back(n % 10);
        n /= 10;
    }
    return answer;
}