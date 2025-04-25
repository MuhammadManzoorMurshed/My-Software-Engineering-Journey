/*
Hackerrank: https://www.hackerrank.com/challenges/c-tutorial-basic-data-types/problem
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i_num;
    long long l_num;
    char ch;
    float f_num;
    double d_num;

    //cin >> i_num >> l_num >> ch >> f_num >> d_num;
    scanf("%d %lld %c %f %lf", &i_num, &l_num, &ch, &f_num, &d_num);

    //cout << i_num << endl;
    //cout << l_num << endl;
    //cout << ch << endl;
    //cout << fixed << setprecision(3) << f_num << endl;
    // << fixed << setprecision(9) << d_num << endl;

    printf("%d\n", i_num);
    printf("%lld\n", l_num);
    printf("%c\n", ch);
    printf("%.3f\n", f_num);
    printf("%.9lf\n", d_num);

    return 0;
}
