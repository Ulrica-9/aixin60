//#include <stdio.h>
//int main(void)
//{
//	int i, j=0, n=0, max, min, average,k=0,x=0;
//	while (scanf_s("%d", &n) == 1&& n)
//	{
//		
//		max = 0;
//		min = 9999;
//		for (i = 0; i < n; i++)
//			scanf_s("%d", &x);
//			if (x > max)
//			{
//				max = x;
//			}
//			if (min > x)
//			{
//				min = x;
//			}
//			k += x;
//		
//		average = k / n;
//		if (j)
//		{
//			printf("\n");
//		}
//		printf("case %d : %d %d %d", ++j, min, max, average);
//	}
//}
//3. 编写程序，建立一个有3个结点的单向链表，每个结点包含姓名、年龄和工资。编写两个函数，一个用于建立链表，另一个用来输出链表。

#include <stdio.h> 
#include <malloc.h> 

#define stu struct student 

stu

{

    char name[20];

    int age;

    int wage;

    stu* next;

}name = { '\0' };

stu* creat(void)
{

    /* 动态创建*/
     int i,j=0;
     stu* p, * head, * p1;
     p = head = (struct student*)malloc(sizeof(struct student));//创建头结点
     head->next = NULL;
     for (i = 0; i < 3; i++)
     {
         p1 = (struct student*)malloc(sizeof(struct student));
         printf("请输入姓名:");
         scanf_s("%s", p1->name,sizeof(p1->name));
         printf("请输入年龄和工资:(空格分隔)");
         scanf_s("%d%d", &p1->age, &p1->wage);
         p1->next = p->next;
         p->next = p1;
     }
     return head->next;

     //尾插法动态创建
   /* int i;
    struct student* head, * p, * q;
    head = p = (struct student*)malloc(sizeof(struct student));
    head->next = NULL;
    for (i = 0; i < 3; i++)
    {
        q = (struct student*)malloc(sizeof(struct student));
        printf("请输入姓名:");
        scanf_s("%s", q->name, sizeof(q->name));
        printf("请输入年龄和工资:(空格分隔)");
        scanf_s("%d%d", &q->age, &q->wage);
        q->next = p->next;
        p->next = q;
        p = q;
    }
    return head->next;*/
}

void output(stu* p)

{

    while (p != NULL)

    {

        printf("%s: ", p->name);

        printf("age=%d wage=%d\n", p->age, p->wage);

        p = p->next;

    }

}

int main()

{

    stu* p;

    p = creat();

    output(p);

}
