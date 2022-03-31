    #include <stdio.h>
    #include <conio.h>
    #include <stdlib.h>
    int main()
    {
      int i;
      
      printf("Gerando 10 valores aleatorios:\n\n");
      
      for (i = 0; i < 10; i++)
      {
        /* gerando valores aleatórios entre zero e ... */
        printf("%d ", rand() % 50);
      }
      
      getch();
      return 0;
    }
