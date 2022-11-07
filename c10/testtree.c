#include <search.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node
{
    char *name;
    int mid;
    int end;
};

struct node *root = NULL; /* 루트 노드 */

int compare(const void *cp1, const void *cp2)
{
    return strcmp(((struct node *)cp1)->name,
                  ((struct node *)cp2)->name);
}

void print_node(const void *nodeptr, VISIT order, int level)
{
    if (order == preorder || order == leaf)
        printf("이름 = %-20s\n 중간점수  = %d\n 기말점수 = %d\n",
               (*(struct node **)nodeptr)->name,
               (*(struct node **)nodeptr)->mid,
               (*(struct node **)nodeptr)->end);
}

int main()
{
    struct node **ret;
    int student, i = 0;

    printf("학생 수를 입력해주세요 : ");
    scanf("%d", &student);

    char nametable[student];
    struct node nodetable[student];

    char *nameptr = nametable;
    struct node *nodeptr = nodetable;

    nodeptr = (struct node *)malloc(sizeof(struct node));

    while (scanf("%s %d %d", nameptr,
                 &nodeptr->mid,
                 &nodeptr->end) != EOF &&
           i++ < student)
    {
        nodeptr->name = nameptr;
        /* 트리에 넣기 */
        ret = (struct node **)tsearch((void *)nodeptr,
                                      (void **)&root,
                                      compare);
        printf("\"%s\" 님이 ", (*ret)->name);
        if (*ret == nodeptr)
            printf("트리에 추가되었습니다.\n");
        else
            printf("트리에 이미 존재합니다.\n");
        nameptr += strlen(nameptr) + 1;
        nodeptr++;
    }
    twalk((void *)root, print_node);

    free(nodeptr);
}
