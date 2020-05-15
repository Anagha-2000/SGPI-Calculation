#include<stdio.h>
#include<stdio.h>

float percent(int,int);
int grade(float);
void tot_pointer(int p[],int c[]);

void main()
{
  int i,j=0,p[7],c[7],t,t_p,t1,t2,t3,t4,p_marks,t_marks,tw_marks,t_credit,p_credit,t_pointer,p_pointer;
  float t_percentage,p_percentage;
  char name[20];
  long int roll_no;

  printf("\t\t*******MUMBAI UNIVERSITY******* \n\tChoice Based Credit and Grading System(CBCGS) \n");
  printf(" NAME: ");
  scanf("%s",name);
  printf(" Roll no : ");
  scanf("%ld",&roll_no);
  for(i=0;i<7;i++)
  {
    switch(i){
      case 0:{
        tw_marks=25;t_marks=100;
        t_credit=4;p_credit=1;
        c[i]=5;
        printf("\nMATHEMATICS:\n");
        printf("Enter your marks out of 80:");
        scanf("%d",&t1);
        printf("Enter your internal assessment marks(out of 20):");
        scanf("%d",&t2);
        t=t1+t2;
        t_percentage=percent(t,t_marks);
        t_pointer=grade(t_percentage);
        printf("Enter your term work marks(out of 25):");
        scanf("%d",&t3);
        p_percentage=percent(t3,tw_marks);
        p_pointer=grade(p_percentage);
        if(t_pointer==0||p_pointer==0)
        {
          p[i]=0;
        }
        else
        {
          p[i]=(t_pointer*t_credit+p_pointer*p_credit)/(t_credit+p_credit);
        }
      }
      break;

    case 1:{
      tw_marks=25;t_marks=100;p_marks=25;
      t_credit=4;p_credit=1;
      c[i]=5;
      printf("\nBASIC ELECTRICAL ENGINEERING:\n");
      printf("Enter your marks out of 80:");
      scanf("%d",&t1);
      printf("Enter your internal assessment marks(out of 20):");
      scanf("%d",&t2);
      t=t1+t2;
      t_percentage=percent(t,t_marks);
      t_pointer=grade(t_percentage);
      printf("Enter your term work marks(out of 25):");
      scanf("%d",&t3);
      printf("Enter your practica/viva marks(out of 25):");
      scanf("%d",&t4);
      t_p=t3+t4;
      p_percentage=percent(t_p,(tw_marks+p_marks));
      p_pointer=grade(p_percentage);
      if(t_pointer==0||p_pointer==0)
      {
        p[i]=0;
      }
      else{
        p[i]=(t_pointer*t_credit+p_pointer*p_credit)/(t_credit+p_credit);
      }}
      break;

    case 2:{
      tw_marks=25;t_marks=100;p_marks=25;
      t_credit=5;p_credit=1;
      c[i]=6;
      printf("\nENGINEERING MECHANICS:\n");
      printf("Enter your marks out of 80:");
      scanf("%d",&t1);
      printf("Enter your internal assessment marks(out of 20):");
      scanf("%d",&t2);
      t=t1+t2;
      t_percentage=percent(t,t_marks);
      t_pointer=grade(t_percentage);
      printf("Enter your term work marks(out of 25):");
      scanf("%d",&t3);
      printf("Enter your practica/viva marks(out of 25):");
      scanf("%d",&t4);
      t_p=t3+t4;
      p_percentage=percent(t_p,(tw_marks+p_marks));
      p_pointer=grade(p_percentage);
      if(t_pointer==0||p_pointer==0)
      {
        p[i]=0;
      }
      else
      {
        p[i]=(t_pointer*t_credit+p_pointer*p_credit)/(t_credit+p_credit);
      }}
      break;

    case 3:{
      tw_marks=25;t_marks=75;
      t_credit=3;p_credit=0.5;
      c[i]=3.5;
      printf("\nAPPLIED PHYSICS 1:\n");
      printf("Enter your marks out of 60:");
      scanf("%d",&t1);
      printf("Enter your internal assessment marks(out of 15):");
      scanf("%d",&t2);
      t=t1+t2;
      t_percentage=percent(t,t_marks);
      t_pointer=grade(t_percentage);
      printf("Enter your term work marks(out of 25):");
      scanf("%d",&t3);
      p_percentage=percent(t3,tw_marks);
      p_pointer=grade(p_percentage);
      if(t_pointer==0||p_pointer==0)
      {
        p[i]=0;
      }
      else
      {
        p[i]=(t_pointer*t_credit+p_pointer*p_credit)/(t_credit+p_credit);
      }}
      break;

    case 4:{
      tw_marks=25;t_marks=75;
      t_credit=3;p_credit=0.5;
      c[i]=3.5;
      printf("\nAPPLIED CHEMISTRY 1:\n");
      printf("Enter your marks out of 60:");
      scanf("%d",&t1);
      printf("Enter your internal assessment marks(out of 15):");
      scanf("%d",&t2);
      t=t1+t2;
      t_percentage=percent(t,t_marks);
      t_pointer=grade(t_percentage);
      printf("Enter your term work marks(out of 25):");
      scanf("%d",&t3);
      p_percentage=percent(t3,tw_marks);
      p_pointer=grade(p_percentage);
      if(t_pointer==0||p_pointer==0)
      {
        p[i]=0;
      }
      else
      {
        p[i]=(t_pointer*t_credit+p_pointer*p_credit)/(t_credit+p_credit);
      }}
      break;

    case 5:{
      t_marks=75;
      t_credit=2;
      c[i]=2;
      printf("\nENVIRONMENTAL STUDIES:\n");
      printf("Enter your marks out of 60:");
      scanf("%d",&t1);
      printf("Enter your internal assessment marks(out of 15):");
      scanf("%d",&t2);
      t=t1+t2;
      t_percentage=percent(t,t_marks);
      t_pointer=grade(t_percentage);
      p[i]=t_pointer;
    }
    break;

    case 6:{
      t_marks=50;
      p_credit=2;
      c[i]=2;
      printf("\nBASIC WORKSHOP AND PRACTICE:\n");
      printf("Enter your marks out of 50:");
      scanf("%d",&t);
      t_percentage=percent(t,t_marks);
      t_pointer=grade(t_percentage);
      p[i]=t_pointer;}break;}}
      printf("\nAM-1\tBEE\tEM\tAP-1\tAC-1\tEVS\tWORKSHOP\n");
      for(i=0;i<7;i++)
      {
        printf("%d\t",p[i]);}
        for(i=0;i<7;i++)
        {
          if(p[i]==0)
          {
            j++;}}
            if(j!=0)
            {
              printf("FAIL");
              printf("Total pointer=0");
            }
              else
              {
                tot_pointer(p,c);
              }
              }
                float percent(int amarks,int tmarks)
                {
                  float per;
                  per=(float)(amarks*100/tmarks);
                  return per;
                }

  int grade(float percen)
  {
    if(percen>=80)
    {
      return 10;}
    else if(percen>=75)
    {
      return 9;}
    else if(percen>=70)
    {
      return 8;}
    else if(percen>=60)
    {
      return 7;}
    else if(percen>=50)
    {
      return 6;}
    else if(percen>=45)
    {
      return 5;}
    else if(percen>=40)
    {
      return 4;}
    else
    {
      return 0;
    }}

  void tot_pointer(int p[],int c[])
  {
    int i,mul=0,sum=0;
   float point;

   for(i=0;i<7;i++)
   {
     mul=mul+p[i]*c[i];}
   for(i=0;i<7;i++)
   {
     sum=sum+c[i];}
   point=(float)mul/sum;
   printf("%.2f",point);
 }
