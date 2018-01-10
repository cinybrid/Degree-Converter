#include <stdio.h>

int main()
{
      char a;
      float dgr, fahr, cels, kelv;

    printf ("write degree that you want to convert and its measure's first letter\n");
    scanf ("%f %c", &dgr, &a);

    switch (a)
    {
    case 'f':
    case 'F':
      {
         cels = (5.0/9.0) * (dgr -32.0);
         kelv =  cels + 273;
     printf("%4.1f F is %4.1f celsius and %4.1f kelvin\n", dgr, cels, kelv);
      }
    break;

    case 'c':
    case 'C':
      {
      fahr = (dgr * (9.0/5.0))+32.0;
      kelv = dgr + 273;
      printf ("%4.1f C is %4.1f fahrenheit and %4.1f kelvin\n", dgr, fahr, kelv);
      }
    break;

    case 'k':
    case 'K':
      {
        cels = dgr - 273;
        fahr = ((9.0/5.0) * dgr) + 32.0;
        printf ("%4.1f kelvin is %4.1f celsius and %4.1f fahrenheit\n", dgr, cels, fahr);
      }
    break;
    default:
    printf ("you forgot something, try again\n");
    }
}
