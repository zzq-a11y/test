// Copilot 智能计算器演示
// 功能：加减乘除、平方根、阶乘、斐波那契数列
#include <stdio.h>
#include <math.h>

double add(double a, double b) { return a + b; }
double sub(double a, double b) { return a - b; }
double mul(double a, double b) { return a * b; }
double div(double a, double b) {
    if(b == 0) { printf("除零错误\n"); return 0; }
    return a / b;
}
double sqrt_num(double a) {
    if(a < 0) { printf("负数不能开根号\n"); return 0; }
    return sqrt(a);
}
long long fact(int n) {
    if(n < 0) return 0;
    long long r = 1;
    for(int i=1; i<=n; i++) r *= i;
    return r;
}
void fib(int n) {
    long long a=0, b=1;
    printf("%lld %lld ", a, b);
    for(int i=2; i<n; i++) {
        long long c = a+b;
        printf("%lld ", c);
        a = b; b = c;
    }
    printf("\n");
}

void menu() {
    printf("\n===== Copilot 计算器 =====\n");
    printf("1.加法 2.减法 3.乘法 4.除法\n");
    printf("5.根号 6.阶乘 7.斐波那契 0.退出\n");
    printf("请选择：");
}

int main() {
    int op;
    double a, b;
    int n;
    while(1) {
        menu();
        scanf("%d", &op);
        if(op == 0) break;

        switch(op) {
            case 1: scanf("%lf%lf",&a,&b); printf("=%.2lf\n", add(a,b)); break;
            case 2: scanf("%lf%lf",&a,&b); printf("=%.2lf\n", sub(a,b)); break;
            case 3: scanf("%lf%lf",&a,&b); printf("=%.2lf\n", mul(a,b)); break;
            case 4: scanf("%lf%lf",&a,&b); printf("=%.2lf\n", div(a,b)); break;
            case 5: scanf("%lf",&a); printf("=%.2lf\n", sqrt_num(a)); break;
            case 6: scanf("%d",&n); printf("=%lld\n", fact(n)); break;
            case 7: scanf("%d",&n); fib(n); break;
            default: printf("无效选项\n");
        }
    }
    return 0;
}