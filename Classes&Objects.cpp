#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

class Student{
    private: int score[5];
             int sum;

    public:
                Student() : sum(0) {}

                void input() {
                 for (int i = 0; i < 5; i++) 
                 {
                      cin >> score[i];
                      sum += score[i];
                    }
                } 

                int calculateTotalScore()
                {
                        return sum;

                }

};

// Write your Student class here

int main() {