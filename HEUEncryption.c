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
    /*��ʼ���׶�*/
    char* judge[2];
    char* judge2[6];
    char c;
    char ch;
    int passwd = 1;
    int n1, n2, n3;
    /*��ӭ����*/
    printf("��ӭ����HEU���������\nPowered by 1528 Group.\n");
    printf("------------------------\n");
    printf("���������ѡ��:\nA �������� \nB ��������\nC ����������ת��Ϊ����\nD ��������Ϣд���ı��ĵ�\nE ��ȡ�ı��ĵ��ļ�����Ϣ\nQ �˳�\n");
    printf("________________________\n");
    scanf("%c", judge);
    while (getchar() != '\n')
          continue;
    /*�ų�����*/
    for (;stricmp(judge, "A") != 0&&stricmp(judge, "B") != 0&&stricmp(judge, "C") != 0&&stricmp(judge, "D") != 0&&stricmp(judge, "E") != 0&&stricmp(judge, "Q") != 0;)
    {
        printf("����������������룡");
        break;
    }

    /*A.��������*/
    while (stricmp(judge, "A") == 0)
{
    {
    /*����ͳ��*/
    printf("��һ��������ͳ�ƣ�������Ҫ������� (���롰|���س��������룬����Ҫͳ�ƵĻ������롰|���س�����):\n");

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

    printf("��������� = %ld, ���� = %d��, ���� = %d \n ",n_chars, n_words, n_lines);
    }

    /*����*/
    printf("������������ӣ�����������������λ���ڷ�0�������൱�����룬�����Ʊ��棺��\n");
    scanf("%d", &passwd);
    while (getchar() != '\n')
          continue;
    printf("������Ҫ���ܵ����ݣ����롰|���س��������룺");
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
    printf("������ɣ��뱣�����ݡ�\n");
    break;
}



    /*B.��������*/
    while (stricmp(judge, "B") == 0)
{

    {
        printf("������������ӣ�\n");
        scanf("%d", &passwd);
        while (getchar() != '\n')
          continue;
        printf("������Ҫ���ܵ����ݣ��˳����������롰|�����س���");

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
        printf("���ܳɹ���\n");

    }
}



    /*C.����ת��*/
    while (stricmp(judge, "C") == 0)
    {
        printf("��������λ�������ӣ��������Զ�ת������Ϊ�ɼ��ܵ��ı���ʽ������123�˳���:\n");
        scanf("%d", &n1);

    while (n1 >= 100 && n1 != 123)
    {
        printf("�ܱ�Ǹ��������Χ��");
        break;
    }
    while (n1 = 123)
    {
        printf("�����˳�");
        exit(0);
    }


    while (n1 == 10)
    {
        printf("ʮ\n");
        break;
    }

    while (n1 == 11)
    {
        printf("ʮһ\n");
        break;
    }

    while (n1 == 12)
    {
        printf("ʮ��\n");
        break;
    }

    while (n1 == 13)
    {
        printf("ʮ��\n");
        break;
    }

    while (n1 == 14)
    {
        printf("ʮ��\n");
        break;
    }

    while (n1 == 15)
    {

        printf("ʮ��\n");
        break;
    }

    while (n1 == 16)
    {
        printf("ʮ��\n");
        break;
    }

    while (n1 == 17)
    {
        printf("ʮ��\n");
        break;
    }

    while (n1 == 18)
    {
        printf("ʮ��\n");
        break;
    }

    while (n1 == 19)
    {
        printf("ʮ��\n");
        break;
    }

    for (int i = 1;n1 > 19&&i < 2&&n1 < 100;i++)
{
    n3 = (n1 / 10) ;
    n2 = n1%10;

    switch (n3)
    {
        case 2:
            printf("��ʮ");
            break;

        case 3:
            printf("��ʮ");
            break;

        case 4:
            printf("��ʮ");
            break;

        case 5:
            printf("��ʮ");
            break;

        case 6:
            printf("��ʮ");
            break;

        case 7:
            printf("��ʮ");
            break;

        case 8:
            printf("��ʮ");
            break;

        case 9:
            printf("��ʮ");
            break;

    }

        switch (n2)

    {
        case 1:
            printf("һ\n");
            break;

        case 2:
            printf("��\n");
            break;

        case 3:
            printf("��\n");
            break;

        case 4:
            printf("��\n");
            break;

        case 5:
            printf("��\n");
            break;

        case 6:
            printf("��\n");
            break;

        case 7:
            printf("��\n");
            break;

        case 8:
            printf("��\n");
            break;

        case 9:
            printf("��\n");
            break;

    }
}

    }


    /*D.�����ı��ĵ�*/
    while (stricmp(judge, "D") == 0)
{

    printf("�ļ���Ϊjiami.txt:�������Ѽ��ܵ����֣�����|���س����档\n");
    FILE*fp=NULL;//��Ҫע��
    fp=fopen("jiami.txt","w");  //�����ļ�

    if(NULL==fp)
        return -1;//Ҫ���ش������
    while((c = getchar()) != STOP)
        fprintf(fp,"%c",c); //�ӿ���̨�ж��벢���ı����
    fclose(fp);
    fp=NULL;//��Ҫָ��գ������ָ��ԭ���ļ���ַ
    break;
}


    /*E.�����ı��ĵ�*/
    while (stricmp(judge, "E") == 0)
{
    printf("������������Ŀ¼�µ�jiami.txt, �����ⲻ���ļ�����ֱ���˳���\n");
    FILE *fp;
    fp = fopen("jiami.txt","r");//�˴���һ�������������޸�������Ҫ���ı��ĵ�����·��
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
