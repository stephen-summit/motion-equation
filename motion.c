#include <stdio.h>
int main ()
{
  float u, a, t, v, s;
  printf ("Enter the value of u:");
  scanf ("%f", &u);
  printf ("Enter the value of a:");
  scanf ("%f", &a);
  printf ("Enter the value of t:");
  scanf ("%f", &t);
  v = (u + a * t);
  s = (u * t + 0.5 * a * t * t);
  printf ("\n velocity is:%f", v);
  printf ("\n distance is:%f", s);
  return 0;
}
