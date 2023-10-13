/**
 * @date 2023-10-13
 * @author Sion Han
 * @ref https://school.programmers.co.kr/learn/courses/30/lessons/12919
 * @difficulty Lv. 1
 * @details
 */
#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    
    for (int i = 0; i < seoul.size(); ++i) {
        if (seoul[i] == "Kim") {
            return "김서방은 " + to_string(i) + "에 있다";
        }    
    }
    return answer;
}