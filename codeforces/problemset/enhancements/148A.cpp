#include<bits/stdc++.h>
using namespace std;

// Enchanement to 148A
// Improving BIG O From O(n) -> O(1)

// Algorithms applied:
// 1. inclusion-exculsion principle.
// 2. LCM.
int GCD(int firstNumber, int secondNumber)
{
    if (secondNumber == 0) return firstNumber;
    return GCD(secondNumber, firstNumber % secondNumber);
}

int LCM(int firstNumber, int secondNumber)
{
    return (firstNumber*secondNumber) / GCD(firstNumber, secondNumber);

}

int main()
{
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    // Calculate number of dragons satisfy  1 condition only
    // number of numbers between 1 and d which is divisible by t is equal to d/t


    int satisfyK = d/k;
    int satisfyL = d/l;
    int satisfyM = d/m;
    int satisfyN = d/n;



    // Calculating number of dragons satisfying 2 conditions.

    int satisfyKL = d / LCM(k,l);
    int satisfyKM = d / LCM(k,m);
    int satisfyKN = d / LCM(k,n);


    int satisfyLM = d / LCM(l,m);
    int satisfyLN = d / LCM(l,n);

    int satisfyMN = d / LCM(m,n);


    // Caulculating number of dragons satisfying 3 conditions.

    int satisfyKLM = d / LCM(LCM(k,l), m);
    int satisfyKLN = d / LCM(LCM(k,l), n);
    int satisfyKMN = d / LCM(LCM(k,m), n);

    int satisfyLMN = d / LCM(LCM(l,m), n);


    // Calculating number of dragons satisfying 4 conditions.

    int satisfyKLMN = d / LCM(LCM(LCM(k,l), m), n);


    // Calculating result using inclusion-exculsion principle
    // odd +
    // even -

    int result = 0;
    result += satisfyK;
    result += satisfyL;
    result += satisfyM;
    result += satisfyN;

    result -= satisfyKL;
    result -= satisfyKM;
    result -= satisfyKN;
    result -= satisfyLM;
    result -= satisfyLN;
    result -= satisfyMN;

    result += satisfyKLM;
    result += satisfyKLN;
    result += satisfyKMN;
    result += satisfyLMN;

    result -= satisfyKLMN;

    cout << result;

}








