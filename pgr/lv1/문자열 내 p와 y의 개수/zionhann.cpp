/**
 * @date 2023-09-12
 * @author Sion Han
 * @ref https://school.programmers.co.kr/learn/courses/30/lessons/12916
 * @difficulty Lv. 1
 * @details
 * 우선 대소문자를 구분하지 않기 때문에 문자열을 대문자 또는 소문자로만 구성해야 한다.
 * P와 Y의 개수가 같다는 건 한 쪽(여기서는 'P')을 +1로 카운트하고
 * 다른 한 쪽(여기서 'Y')를 -1로 카운트했을 때 값이 0임을 의미한다.
 */
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

string toupper(string s) {
    transform(s.begin(), s.end(), s.begin(),
                    [](unsigned char c) {
                       return toupper(c); 
                    });
    return s;
}

bool solution(string s) {
    int count = 0;
    string upperStr = toupper(s);
    
    for (const char c : upperStr) {
        if (c == 'P') count++;
        else if (c == 'Y') count--;
    }
    return count == 0;
}