#include <stdio.h>

    /*
     * (1)以下のようなピラミッドの石の総数を数えるアルゴリズム
     */
    void firstProblem() {
        int lineCount = 1;
        int printCount = 0;

        for (int i = 0; i < 5; i++) {
            for (int ii = 0; ii < lineCount; ii++) {
                printf("*");
                printCount++;
            }
            printf("\n");
            lineCount++;
        }

        printf("石の総数は%d個です。\n", printCount);
    }

    /*
     * 遊び
     */
    void helloWorld() {
        int a = 100000;
        int b = 5183;
        int c =  a + b;
        int d = a * b;
        int e = a - b;
        int f = a / b;
        int g = a % b;
        printf("HelloWorld\n");
        printf("%d + %d = %d です。\n", a, b, c);
        printf("%d - %d = %d です。\n", a, b, e);
        printf("%d * %d = %d です。\n", a, b, d);
        printf("%d / %d = %d です。\n", a, b, f);
        printf("%d / %dの余りは %d です。\n", a, b, g);
    }

    /*
     * (2)上のようなピラミッドの底辺の石の個数を入力すると、使われている石の総数を計算するアルゴリズム。
     */
    void secondProblem() {
        int scanNumber = 0;
        int count = 0;
        int stoneNumber = 0;

        printf("底辺の石の個数を指定してください。\n");
        scanf("%d", &scanNumber);

        for (int i = 0; i < scanNumber; i++) {
            stoneNumber += scanNumber - count;
            count++;
        }

        printf("石の総数は%dです。\n", stoneNumber);
    }

    /*
     * (3)直角三角形のピラミッドの底辺の石の個数を入力すると、該当の絵をかくアルゴリズム。
     */
    void thirdProblem() {
        int scanNumber1 = 0;
        int count1 = 1;

        printf("底辺の石の個数を指定してください。\n");
        scanf("%d", &scanNumber1);

        for (int i = 0; i < scanNumber1; i++) {
            for (int ii = 0; ii < count1; ii++) {
                printf("*");
            }
            printf("\n");
            count1++;
        }
    }

/*
* (4)以下の絵を描くアルゴリズム
*/
void fourthProblem() {
    int count = 1;

        for (int i = 0; i < 5; i++) {
            for (int I = 0; I < 2; I ++) {
                for (int ii = 0; ii < 5 - count; ii++) {
                    printf(" ");
                }
                for (int iii = 0; iii < count; iii++) {
                    printf("*");
                }
            }
            count++;
            printf("\n");
        }
    }

int main() {
    thirdProblem();
    return 0;
}