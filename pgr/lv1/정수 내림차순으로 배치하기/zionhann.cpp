/**
 * @date 2023-09-15
 * @author Sion Han
 * @ref https://school.programmers.co.kr/learn/courses/30/lessons/12933
 * @difficulty Lv. 1
 * @details string -> number 변환하는 과정에서 주어진 수가 충분히 클 수 있으므로
 * 일반적인 stoi(string to integer)가 아닌 stoll(string to long long)을 사용해야 한다.
 * 과정은 먼저 각 자리별로 리스트에 넣어서 내림차순으로 정렬하고, 하나씩 꺼내 문자열에 추가한 뒤 타입을 변환한다.
 */
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int digit(long long n) {
    return n % 10;
}

long long solution(long long n) {
    vector<int> nums;
    
    while (n != 0) {
        nums.push_back(digit(n));
        n /= 10;
    }
    sort(nums.begin(), nums.end(), greater<int>());
    string answer = "";
    
    for (int val : nums) {
        string valAsString = to_string(val);
        answer.append(valAsString);
    }
    return stoll(answer);
}