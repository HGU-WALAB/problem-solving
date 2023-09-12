#include <string>
#include <vector>
#include <numeric>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    
    const double sum = accumulate(arr.begin(), arr.end(), 0);
    answer = sum / arr.size();
    
    return answer;
}