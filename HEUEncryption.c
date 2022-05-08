#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <unistd.h>
#define STOP '|'
#define SPACE ' '

int main(void)
{
    /*初始化阶段*/
    char* judge[2];
    char* judge2[6];
    char c;
    char ch;
    int passwd = 1;
    int n1, n2, n3;
    /*欢迎界面*/
    printf("欢迎来到HEU加密软件！\nPowered by 1528 Group.\n");
    printf("------------------------\n");
    printf("请输入你的选择:\nA 加密文字 \nB 解密文字\nC 将加密因子转换为文字\nD 将加密信息写入文本文档\nE 读取文本文档的加密信息\nQ 退出\n");
    printf("________________________\n");
    scanf("%c", judge);
    while (getchar() != '\n')
          continue;
    /*排除错误*/
    for (;stricmp(judge, "A") != 0&&stricmp(judge, "B") != 0&&stricmp(judge, "C") != 0&&stricmp(judge, "D") != 0&&stricmp(judge, "E") != 0&&stricmp(judge, "Q") != 0;)
    {
        printf("输入错误！请重新输入！");
        break;
    }

    /*A.加密文字*/
    while (stricmp(judge, "A") == 0)
{
    {
    /*字数统计*/
    printf("第一步：字数统计：请输入要加密语句 (输入“|”回车结束输入，不需要统计的话，输入“|”回车跳过):\n");

    long n_chars = 0;
    int n_lines = 0;
    int n_words = 0;
    bool inword = false;

    while ((c = getchar()) != STOP)
        {
        n_chars++;
        {
          if (c == '\n')
            n_lines++;
        }

        {
          if (!isspace(c) && !inword)
          {
            inword = true;
            n_words++;
          }
          if (isspace(c) && inword)
            inword = false;
        }

        }

    printf("结果：字数 = %ld, 单词 = %d个, 行数 = %d \n ",n_chars, n_words, n_lines);
    }

    /*加密*/
    printf("请输入加密因子（加密因子是任意两位以内非0整数，相当于密码，请妥善保存：）\n");
    scanf("%d", &passwd);
    while (getchar() != '\n')
          continue;
    printf("请输入要加密的内容，输入“|”回车结束输入：");
    ch = getchar();
        while (ch != '\n')
        {
            if (ch == STOP)
                exit(0);
            if (ch == SPACE)
                putchar(ch);
            else
                putchar(ch + passwd);
            ch = getchar();

        }
    putchar(ch);
    printf("加密完成！请保存内容。\n");
    break;
}



    /*B.解密文字*/
    while (stricmp(judge, "B") == 0)
{

    {
        printf("请输入加密因子：\n");
        scanf("%d", &passwd);
        while (getchar() != '\n')
          continue;
        printf("请输入要解密的内容，退出解密请输入“|”并回车：");

    {
        ch = getchar();

        while (ch != '\n')
        {
            if (ch == STOP)
                exit(0);
            if (ch == SPACE)
                putchar(ch);
            else
                putchar(ch - passwd);
            ch = getchar();

        }
    }

        putchar(ch);
        printf("解密成功！\n");

    }
}



    /*C.数字转换*/
    while (stricmp(judge, "C") == 0)
    {
        printf("请输入两位加密因子，本程序将自动转换数字为可加密的文本形式（输入123退出）:\n");
        scanf("%d", &n1);

    while (n1 >= 100 && n1 != 123)
    {
        printf("很抱歉，超出范围！");
        break;
    }
    while (n1 = 123)
    {
        printf("正在退出");
        exit(0);
    }


    while (n1 == 10)
    {
        printf("十\n");
        break;
    }

    while (n1 == 11)
    {
        printf("十一\n");
        break;
    }

    while (n1 == 12)
    {
        printf("十二\n");
        break;
    }

    while (n1 == 13)
    {
        printf("十三\n");
        break;
    }

    while (n1 == 14)
    {
        printf("十四\n");
        break;
    }

    while (n1 == 15)
    {

        printf("十五\n");
        break;
    }

    while (n1 == 16)
    {
        printf("十六\n");
        break;
    }

    while (n1 == 17)
    {
        printf("十七\n");
        break;
    }

    while (n1 == 18)
    {
        printf("十八\n");
        break;
    }

    while (n1 == 19)
    {
        printf("十九\n");
        break;
    }

    for (int i = 1;n1 > 19&&i < 2&&n1 < 100;i++)
{
    n3 = (n1 / 10) ;
    n2 = n1%10;

    switch (n3)
    {
        case 2:
            printf("二十");
            break;

        case 3:
            printf("三十");
            break;

        case 4:
            printf("四十");
            break;

        case 5:
            printf("五十");
            break;

        case 6:
            printf("六十");
            break;

        case 7:
            printf("七十");
            break;

        case 8:
            printf("八十");
            break;

        case 9:
            printf("九十");
            break;

    }

        switch (n2)

    {
        case 1:
            printf("一\n");
            break;

        case 2:
            printf("二\n");
            break;

        case 3:
            printf("三\n");
            break;

        case 4:
            printf("四\n");
            break;

        case 5:
            printf("五\n");
            break;

        case 6:
            printf("六\n");
            break;

        case 7:
            printf("七\n");
            break;

        case 8:
            printf("八\n");
            break;

        case 9:
            printf("九\n");
            break;

    }
}

    }


    /*D.生成文本文档*/
    while (stricmp(judge, "D") == 0)
{

    printf("文件名为jiami.txt:请输入已加密的文字，输入|并回车保存。\n");
    FILE*fp=NULL;//需要注意
    fp=fopen("jiami.txt","w");  //创建文件

    if(NULL==fp)
        return -1;//要返回错误代码
    while((c = getchar()) != STOP)
        fprintf(fp,"%c",c); //从控制台中读入并在文本输出
    fclose(fp);
    fp=NULL;//需要指向空，否则会指向原打开文件地址
    break;
}


    /*E.解密文本文档*/
    while (stricmp(judge, "E") == 0)
{
    printf("下面内容来自目录下的jiami.txt, 如果检测不到文件将会直接退出！\n");
    FILE *fp;
    fp = fopen("jiami.txt","r");//此处第一个参数，可以修给成你需要的文本文档绝对路径
    char ch;
    while((ch = fgetc(fp)) != EOF)
      {
      putchar(ch);
      }
    exit(0);
}
    while (stricmp(judge, "Q") == 0)
        exit(0);
    system("pause");
    return 0;
}
