#include<stdio.h>

int main()
{
  int ab;
  float ch, ans, ans1;

  printf("\n 1. Inches Into Meter.");
  printf("\n 2. Meter Into Inches.");
  printf("\n Choose One of the above: ");
  scanf("%d", &ab);
  
  if (ab==1) {
    printf("\n Choose the amount in inches: ");
    scanf("%f", &ch);
    ans= ch/39;
    printf("\n The amount in Meter is %.2f", ans);
    }
  else if (ab==2){
    printf("\n Choose the amount in Meter: ");
    scanf("%f", &ch);
    ans1= ch*39;
    printf("\n The amount in inches is %.2f", ans1);

  }
    return 0;
}