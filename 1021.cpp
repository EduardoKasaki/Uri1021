#include <stdio.h>

int main() {

int x, n100, n50, n20, n10, n5, n2, n1, m1, m50, m25, m10, m5, m01, resto, resto1,m ;


scanf("%d.%d", &x,&m);

n100 = x / 100;
resto = x % 100;

n50 = resto / 50;
resto= resto % 50;

n20 = resto / 20;
resto = resto % 20;

n10 =resto / 10;
resto = resto % 10;

n5 = resto / 5;
resto = resto % 5;

n2 = resto / 2;
resto = resto % 2;

m1 = resto / 1;
resto = resto % 1;



m50 = m / 50;
resto1 = m % 50;

m25 = resto1 / 25;
resto1 = resto1 % 25 ;

m10 = resto1 / 10;
resto1 = resto1 % 10;

m5 = resto1 / 5;
resto1 = resto1 % 5;

m01 = resto1 / 1;
resto1 = resto1 % 1;

printf("NOTAS:\n");
printf("%d nota(s) de R$ 100.00\n", n100);
printf("%d nota(s) de R$ 50.00\n", n50);
printf("%d nota(s) de R$ 20.00\n", n20);
printf("%d nota(s) de R$ 10.00\n", n10);
printf("%d nota(s) de R$ 5.00\n", n5);
printf("%d nota(s) de R$ 2.00\n", n2);

printf("MOEDAS:\n");
printf("%d moeda(s) de R$ 1.00\n", m1);
printf("%d moeda(s) de R$ 0.50\n", m50);
printf("%d moeda(s) de R$ 0.25\n", m25);
printf("%d moeda(s) de R$ 0.10\n", m10);
printf("%d moeda(s) de R$ 0.05\n", m5);
printf("%d moeda(s) de R$ 0.01\n", m01);

return 0;

  }
