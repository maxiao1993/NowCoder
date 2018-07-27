#include<stdio.h>
struct s { char *a;};
void f(struct s *p){printf("%s\n",p->a);}

int
main()
{
	f(&(struct s){"Hello World"});
	return 0;
}
