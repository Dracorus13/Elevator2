 #include<stdio.h>

#define MaxFloors 15

/*typedef struct 
{
  #define MaxFloors 15
  int currentFloor[15]; 
} elevator_t;*/


//void moveElevator(elevator_t [], int);

int main(void)
{
    //elevator_t elevator[MaxFloors];
    //int currentFloor = 1;
    int a;

    for (a = 1; a< 15; a = a + 1)
    {
          moveElevator();
    }

    
   return 0;
   
}




void moveElevator()
{

  int currentFloor = 1;


  for(int i = 0; i < currentFloor; i++)
    {

       if(currentFloor <= 15)
   {
     printf("The Top Floor is 15. What Floor Would you Like to go to? The Current Floor is %d\n", (currentFloor));
       //scanf("Going to Floor\n%d", &currentFloor);
       currentFloor = getchar(15);
       printf("\nGoing to floor:  ");
       putchar(currentFloor);
       return 0;

   }

   else
   {
     printf("Please select a floor number...");
   }

    }
}

