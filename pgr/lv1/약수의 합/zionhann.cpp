/**
 * @date 2023-09-12
 * @author Sion Han
 * @ref https://school.programmers.co.kr/learn/courses/30/lessons/12928
 * @difficulty Lv. 1
 * @details
 * 자연수 n의 약수는 1과 자기 자신(n)을 포함하며, 
 * 그 사이의 수 i에 대해 n % i == 0을 만족하는 i를 가진다.
 * 이때 i는 항상 n / 2를 초과하지 않는다.
 * 예를 들어 24의 약수는 {1, 2, 3, 4, 6, 12, 24}로 자기 자신을 제외하고 12를 넘지 않는다.
 * 따라서 1과 자기 자신 사이 모든 수에 대해 약수인지 검증하는 대신 n / 2까지 검증하면 된다.
 */
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = n;
    
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            answer += i;
        }
    }
    return answer;
}