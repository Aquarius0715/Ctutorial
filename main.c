#include <stdio.h>
    /*
     * (1)以下のようなピラミッドの石の総数を数えるプログラム
     */
    void firstProblem() {
        int lineCount = 1;
        int printCount = 0;

        for (int i = 0; i < 5; i++) {
            for (int ii = 0; ii < lineCount; ii++) {
                printCount++;
            }
            printf("\n");
            lineCount++;
        }

        printf("石の総数は%d個です。\n", printCount);
    }

    /*
     * テスト
     */
    void calculation() {
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
     * (2)上のようなピラミッドの底辺の石の個数を入力すると、使われている石の総数を計算するプログラム
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
     * (3)直角三角形のピラミッドの底辺の石の個数を入力すると、該当の絵をかくプログラム
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
* (4)以下の絵を描くプログラム
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

    /*
     * 試練４
     */

    //どれだけ石の個数が増えるのかを計算
    int calcIncreaseStone(int line) {
        int lineCount = 0;
        int increaseStone = 0;

        for (int i = 0; i < line; i++) {
            if (lineCount % 3 != 0) {
                increaseStone = lineCount / 3 + 1;
            } else {
                increaseStone = lineCount / 3;
            }
            if (lineCount < 3) {
                increaseStone = 1;
            }
            lineCount++;
        }
        return increaseStone;
    }

    //一列に入力する石の個数を計算
    int calcStone(int line) {
        int lineCount = 0;
        int increaseStone = 3;

        for (int i = 0; i < line; i++) {
            if (lineCount % 3 != 0) {
                increaseStone += lineCount / 3 + 1 * 2;
            } else {
                increaseStone += lineCount / 3 * 2;
            }
            lineCount++;
        }
        return increaseStone;
    }

    void challengeProblem() {

        int line = 1;
        int lineCount = 0;
        int bottom;
        int median;
        int space;

        printf("倍率を整数で打ち込んでください。\n");
        scanf("%d", &line);

        // 底辺の石の数を求める。
        bottom = line * line * line / 100;

        median = bottom / 2;
        space = median + 1;
        line -= 6;


        for (int ii = 0; ii < line; ii++) {
            for (int iii = 0; iii < space; iii++) {
                printf(" ");
            }
                for (int I = 0; I < calcStone(lineCount + 1); I++) {
                    printf("*");
                }
            printf("\n");
            space -= (calcIncreaseStone(lineCount) - 1 / 2);
            lineCount++;
        }
        printf("底辺の石の個数は%d個です。\n", bottom);
    }

int main() {
    challengeProblem();
    return 0;
}