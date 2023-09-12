#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n) {
    if (n % 2 != 0) {
        return 2;
    }
    
    int answer = n-1;

    for (int i = answer; i > 0; i--) {
        if (n % i == 1) {
            answer = min(answer, i);
        }
    }
    return answer;
}