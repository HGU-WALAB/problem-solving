/**
 * @date 2023-10-13
 * @author Sion Han
 * @ref https://school.programmers.co.kr/learn/courses/30/lessons/12910
 * @difficulty Lv. 1
 * @details
 */
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    
    for (int el : arr) {
        if (el % divisor == 0) {
            answer.push_back(el);
        }
    }
    
    if (answer.empty()) {
        answer.push_back(-1);
    }
    sort(answer.begin(), answer.end());

    return answer;
}