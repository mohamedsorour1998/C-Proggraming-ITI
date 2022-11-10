#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("This Program is coded by soRouR!\nPlease Enter The Letter Crossponding to The Recipe you want to cook! \nA- Raspberry Ice Cream in a Bag \nB-Blueberry Pancake Smoothie \nC- No-Bake Peanut Butter Treats");
 printf(" \n  \n : ");
 char input;
 input = getch() ;
 scanf("%c", &input );

 switch (input) {
 case 'A' :
 case 'a':
    system("cls");

 printf("Your Recipe is: Ingredients: 1 cup half-and-half cream 1/2 cup fresh raspberries 1/4 cup sugar 2 tablespoons evaporated milk 1 teaspoon vanilla extract 4 cups coarsely crushed ice 3/4 cup salt");
break;

 case 'B' :
 case 'b':
      system("cls");

 printf("Your Recipe is: Ingredients 1 cup unsweetened almond milk 1 medium banana 1/2 cup frozen unsweetened blueberries 1/4 cup instant plain oatmeal 1 teaspoon maple syrup 1/2 teaspoon ground cinnamon Dash sea salt");
break;

case 'C' :
 case 'c':
      system("cls");

 printf("Your Recipe is: Ingredients 1/3 cup chunky peanut butter 1/4 cup honey 1/2 teaspoon vanilla extract 1/3 cup nonfat dry milk powder 1/3 cup quick-cooking oats 2 tablespoons graham cracker crumbs");
break;


default :
     system("cls");

 printf("ERROR!");
break;
 }


    return 0;
}
