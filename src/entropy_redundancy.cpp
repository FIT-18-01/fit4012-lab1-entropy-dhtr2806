#include <iostream>
#include <string>
#include <map>
#include <cmath>

using namespace std;

double calculateEntropy(const string& text) {
    map<char, int> freq;
    for (char c : text) freq[c]++;
    double entropy = 0.0;
    int len = text.length();
    for (auto const& [c, count] : freq) {
        double p = (double)count / len;
        entropy -= p * log2(p);
    }
    return entropy;
}

// Đổi tên hàm thành calculate_redundancy để qua bài kiểm tra
double calculate_redundancy(const string& text, double entropy) {
    map<char, int> freq;
    for (char c : text) freq[c]++;
    double h_max = log2(freq.size());
    if (h_max == 0) return 0; 
    return 1.0 - (entropy / h_max);
}

int main() {
    string text = "HELLO WORLD";
    double entropy = calculateEntropy(text);
    double redundancy = calculate_redundancy(text, entropy);
    cout << "Entropy: " << entropy << " \nRedundancy: " << redundancy * 100 << "%" << endl;
    return 0;
}
