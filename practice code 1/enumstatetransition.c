#include<stdio.h>
enum machine
{
    idle,
    soak,
    wash,
    rinse,
    dry
};
int main()
{ 
    enum machine was=0;
    int id,so,wa,ri,dy;
    while(1)
    {
    switch(was)
    {
        case idle:
        printf("Enter to start 0/1:");
        scanf("%d",&id);
        if(id==1)
        {
            printf("MACHINE STARTED\n");
            was=1;
        }
        else
        {
            printf("MACHINE OFF\n");
            break;
        }
        case soak:
        printf("Enter for soak 0/1:");
        scanf("%d",&so);
        if(so==1)
        {
            printf("SOAK STARTED\n");
            was=2;
        }
        else
        {
            was=0;
            printf("SOAK TERMINATED\n");
            break;
        }
        case wash:
        printf("Enter for wash 0/1:");
        scanf("%d",&wa);
        if(wa==1)        
        {
            printf("WASH STARTED\n");
            was=3;
        }
        else
        {
            was=0;
            printf("WASH TERMINATED\n");
            break;
        }
        case rinse:
        printf("Enter for rinse 0/1:");
        scanf("%d"  ,&ri);
        if(ri==1)
        {
            printf("RINSE STARTED\n");
            was=4;
        }
        else
        {
            was=0;
            printf("RINSE TERMINATED\n");
            break;
        }
        case dry:
        printf("Enter for dry 0/1:");
        scanf("%d",&dy);
        if(dy==1)
        {
            printf("DRY STARTED\n");
            was=0;
        }
        else
        {
            was=0;
            printf("DRY TERMINATED\n");
            break;
        }
    }
    }
    return 0;
}

