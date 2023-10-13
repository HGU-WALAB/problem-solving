/**
 * @date 2023-10-13
 * @author Sion Han
 * @ref https://school.programmers.co.kr/learn/courses/30/lessons/76501?language=cpp
 * @difficulty Lv. 1
 * @details
 */
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 0;
    
    for (int i = 0; i < signs.size(); ++i) {
        if (signs[i]) {
            answer += absolutes[i];
        } else {
            answer -= absolutes[i];
        }
    }
    return answer;
}