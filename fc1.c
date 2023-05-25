#include <stdio.h>

const char SPACE = ' ';
const int TRUE = 1;
const int FALSE = 0;

void print_word(const char *);

int main(void) {
    print_word("one two three");
    print_word("  four  five six");
    print_word("   seven eight     nine   ");
    print_word("  ");
    print_word("ten");

    return 0;
}

/**
 * 語を出力する
 * @param target 対象文字列
 */
void print_word(const char *target) {
    // 単語中であるか？
    int in_word = FALSE;
    // 単語はあったか？
    int is_exist_word = FALSE;
    // 最終出力文字
    char last_output = '\0';

    int index = 0;
    while (*(target + index) != '\0') {
        char c = *(target + index);
        if (c != SPACE) {
            printf("%c", c);
            in_word = TRUE;
            last_output = c;
            is_exist_word = TRUE;
        } else {
            if (in_word == FALSE) {
                // noop
            } else {
                printf("\n");
                last_output = '\n';
            }
            in_word = FALSE;
        }
        index++;
    }
    if (is_exist_word == TRUE && last_output != '\n') {
        printf("\n");
    }
}
/*
 * 説明
 * 課題番号: C-1 語の抽出
 * 問題: 任意の個数のスペースで区切られた英数字の連続を語とします。 スペースを“␣”と表すと、"one␣two␣three" に含まれる語は、 "one"、"two"、"three" の3つです。 "␣␣four␣␣five␣six" に含まれる語は、"four"、"five"、"six" の3つです。 "␣␣" に語は含まれません。 次の仕様を持つ関数print_word()を作ってください。
 *
 * 与えられた文字列を順番に出力します。
 * whileループで文字列を一文字ずつ終端までループします:
 *   文字がスペースでない場合:
 *     ・文字を一文字出力します。
 *     ・単語中である旨、フラグ変数をTRUEにセットします
 *     ・最終出力文字をループ中の文字で上書きします
 *     ・与えられた文字列の中にスペース以外の文字があったかを管理する変数にTRUEをセットします
 *　  文字がスペースの場合:
 *　　  単語中ではない場合:
 *        ・何もしません
 *     単語中の場合(直前まで文字だったが初めてスペースに出会った場合)
 *        ・改行を出力します。
 *        ・最終出力文字に改行をセットします。
 * 単語が文字列中に存在し、かつ最終出力文字が改行ではなかった場合:
 *   ・改行を出力します。
 */