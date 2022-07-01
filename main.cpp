#include <iostream>
#include "greedy.h"
#include "bruteForce.h"
#include <iomanip>
#include <vector>
#include <chrono>

int main() {
    std::cout << "Hello, World!" << std::endl;
    int val[] = { 60, 100, 120 };
    int wt[] = { 10, 20, 30 };
    int W = 50;
    int n = sizeof(val) / sizeof(val[0]);



    int runSample;
    std::cout << "Enter how many times to run\n";
    std::cin >> runSample;

    std::vector<double> runTimes = {};


    for (int i = 0; i < runSample; i++)
    {
        auto start = std::chrono::steady_clock::now();
        bruteKnapSack(W,wt,val,n);
        auto end = std::chrono::steady_clock::now();
        std::chrono::duration<double> elapsed_seconds = end-start;

        runTimes.push_back(elapsed_seconds.count());
    }

    //Average runtimes
    double runtimeSum{0.0};
    for (double i: runTimes)
    {
        runtimeSum += i;
    }

    double runtimeAverage = runtimeSum / runSample;

    std::cout  << "Average runtime sum: " << runtimeAverage;


    bruteKnapSack(W, wt, val, n);


    return 0;
}
