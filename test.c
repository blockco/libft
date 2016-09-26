int		main(void)
{ 
	char a[18] = "wow this	is great";
	char z[18] = "wow this	is great";
	unsigned int i;
	unsigned int j;

	i = ft_strlen(a);
	j = strlen(z);
	ft_putnbr(i);
	ft_putchar('\n');
	ft_putnbr(j);
	ft_putchar('\n');

	const char *test1 = "fuckkkkk";
	char done1[9];
	const char *test2 = "fuckkkkk";
	char done2[9];

	strcpy(done1, test1);
	ft_putstr(done1);
	ft_putchar('\n');
	ft_strcpy(done2, test2);
	ft_putstr(done2);
	ft_putchar('\n');

	const char *test10 = "fuckkkkk";
	char done10[9];
	int count = 2;
	const char *test11 = "fuckkkkk";
	char done11[9];

	strncpy(done10, test10, count);
	ft_putstr(done10);
	ft_putchar('\n');
	ft_strncpy(done11, test11, count);
	ft_putstr(done11);
	ft_putchar('\n');

	const char *test3 = "Hello";
	char *test4;
	const char *test5 = "Hello";
	char *test6;

	test4 = strdup(test3);
	test6 = ft_strdup(test5);
	ft_putstr(test4);
	ft_putchar('\n');
	ft_putstr(test6);
	ft_putchar('\n');

	const char *test12 = "Hello";
	char *test13 = "cool";
	const char *test14 = "Hello";
	char *test15 = "cool";

	strcat(test12, test13);
	ft_strcat(test14, test15);
	ft_putstr(test4);
	ft_putchar('\n');
	ft_putstr(test6);
	ft_putchar('\n');

	memset(a, 'j', 18);
	ft_memset(z, 'j', 21);
	ft_putstr(a);
	ft_putchar('\n');
	ft_putstr(z);
	ft_putchar('\n');

	char t[6] = "Hello";
	char x[6] = "Hello";

	bzero(t, 0);
	ft_bzero(x, 0);
	ft_putstr(t);
	ft_putchar('\n');
	ft_putstr(x);
	ft_putchar('\n');

	char d[6] = "Hello";
	char f[6];
	char h[6] = "Hello";
	char v[6];

	memcpy(f, d, 6);
	ft_memcpy(v, h, 6);
	ft_putstr(f);
	ft_putchar('\n');
	ft_putstr(v);
	ft_putchar('\n');

	return (0);
}

int		main(void)
{
	char j[6] = "Hello";
	char l[6];
	char k[6] = "Hello";
	char c[6];

	ft_memcpy(l, j, 5);
	memcpy(c, k, 5);
	ft_putstr(l);
	ft_putchar('\n');
	ft_putstr(c);
	ft_putchar('\n');

	char p[10] = "123456789";
	char *o = &p[3];
	char i[10] = "123456789";
	char *u = &i[3];

	ft_memmove(o, p, 5);
	memmove(u, i, 5);
	ft_putstr(o);
	ft_putchar('\n');
	ft_putstr(u);
	ft_putchar('\n');

	char r[7] = "ABCDEF";
	char *ret1;
	char y[7] = "ABCDEF";
	char *ret2;

	ret1 = ft_memchr(r, 'D', 5);
	ret2 = memchr(y, 'D', 5);
	ft_putchar(*ret1);
	ft_putchar('\n');
	ft_putchar(*ret2);
	ft_putchar('\n');
	*ret1 = 'F';
	*ret2 = 'F';
	ft_putstr(r);
	ft_putchar('\n');
	ft_putstr(y);
	ft_putchar('\n');

	char m[5] = "this";
	char n[5] = "that";
	char z[5] = "this";
	char x[5] = "that";
	int w;
	int q;

	w = ft_memcmp(m, n, 5);
	q = memcmp(z, x, 5);
	ft_putnbr(w);
	ft_putchar('\n');
	ft_putnbr(q);
	ft_putchar('\n');
}

int		main(void)
{
	const char r[7] = "ABCDEF";
	char *ret1;
	const char y[7] = "ABCDEF";
	char *ret2;

	ret1 = ft_strrchr(r, 'D');
	ret2 = strrchr(y, 'D');
	ft_putchar(*ret1);
	ft_putchar('\n');
	ft_putchar(*ret2);
	ft_putchar('\n');

	printf("%s\n",ft_strstr("familyisgood", "zaz"));
	printf("%s\n",ft_strstr("shitslit", "it"));
	printf("%s\n",ft_strstr("familyisgood", "fam"));
	printf("%s\n",ft_strstr("familyisgood", "go"));
	printf("%s\n",ft_strstr("familyisgood", "ily"));
	printf("%s\n",ft_strstr("familyisgood", "og	"));

	printf("%s\n","---------------------------");

	printf("%s\n",strstr("familyisgood", "zaz"));
	printf("%s\n",strstr("shitslit", "it"));
	printf("%s\n",strstr("familyisgood", "fam"));
	printf("%s\n",strstr("familyisgood", "go"));
	printf("%s\n",strstr("familyisgood", "ily"));
	printf("%s\n",strstr("familyisgood", "og"));

	printf("%s\n","---------------------------");

	printf("%s\n",ft_strnstr("fam", "zaz",4));
	printf("%s\n",ft_strnstr("shitslit", "it",5));
	printf("%s\n",ft_strnstr("familyisgood", "fam",2));
	printf("%s\n",ft_strnstr("familyisgood", "go",3));
	printf("%s\n",ft_strnstr("familyisgood", "ily",3));
	printf("%s\n",ft_strnstr("familyisgood", "og	",5));

	printf("%s\n","---------------------------");

	printf("%s\n",strnstr("fam", "zaz",4));
	printf("%s\n",strnstr("shitslit", "it",5));
	printf("%s\n",strnstr("familyisgood", "fam",2));
	printf("%s\n",strnstr("familyisgood", "go",3));
	printf("%s\n",strnstr("familyisgood", "ily",3));
	printf("%s\n",strnstr("familyisgood", "og	",5));
}

int		main(void)
{
	printf("%s\n","ft_strcmp--------------------------");

	printf("%d\n",ft_strcmp("dank", "bye"));
	printf("%d\n",ft_strcmp("bye", "hello"));
	printf("%d\n",ft_strcmp("hello", "hello"));
	printf("%d\n",ft_strcmp("rick", "rick"));

	printf("%s\n","strcmp--------------------------");

	printf("%d\n",strcmp("dank", "bye"));
	printf("%d\n",strcmp("bye", "hello"));
	printf("%d\n",strcmp("hello", "hello"));
	printf("%d\n",strcmp("rick", "rick"));

	printf("%s\n","ft_strncmp--------------------------");

	printf("%d\n",ft_strncmp("dank", "bye",2));
	printf("%d\n",ft_strncmp("he", "hello",2));
	printf("%d\n",ft_strncmp("hello", "hello",1));
	printf("%d\n",ft_strncmp("rick", "rick",5));
	printf("%d\n",ft_strncmp("rick", "rick",-1));

	printf("%s\n","strncmp--------------------------");
	
	printf("%d\n",strncmp("dank", "bye",2));
	printf("%d\n",strncmp("he", "hello",2));
	printf("%d\n",strncmp("hello", "hello",1));
	printf("%d\n",strncmp("rick", "rick",5));
	printf("%d\n",strncmp("rick", "rick",-1));

	printf("%s\n", "ft_isalpha------------------------------");

	char a = '1';
	char b = 'g';
	char c = '$';
	char d = '2';
	char e = 'z';
	char f = 'Z';

	printf("%d\n",ft_isalpha(a));
	printf("%d\n",ft_isalpha(b));
	printf("%d\n",ft_isalpha(c));
	printf("%d\n",ft_isalpha(d));
	printf("%d\n",ft_isalpha(e));
	printf("%d\n",ft_isalpha(f));

	printf("%s\n", "isalpha------------------------------");

	printf("%d\n",isalpha(a));
	printf("%d\n",isalpha(b));
	printf("%d\n",isalpha(c));
	printf("%d\n",isalpha(d));
	printf("%d\n",isalpha(e));
	printf("%d\n",isalpha(f));

	printf("%s\n", "ft_isdigit------------------------------");

	printf("%d\n",ft_isdigit(a));
	printf("%d\n",ft_isdigit(b));
	printf("%d\n",ft_isdigit(c));
	printf("%d\n",ft_isdigit(d));
	printf("%d\n",ft_isdigit(e));
	printf("%d\n",ft_isdigit(f));

	printf("%s\n", "isdigit------------------------------");

	printf("%d\n",isdigit(a));
	printf("%d\n",isdigit(b));
	printf("%d\n",isdigit(c));
	printf("%d\n",isdigit(d));
	printf("%d\n",isdigit(e));
	printf("%d\n",isdigit(f));

	printf("%s\n", "ft_isalnum------------------------------");

	printf("%d\n",ft_isalnum(a));
	printf("%d\n",ft_isalnum(b));
	printf("%d\n",ft_isalnum(c));
	printf("%d\n",ft_isalnum(d));
	printf("%d\n",ft_isalnum(e));
	printf("%d\n",ft_isalnum(f));

	printf("%s\n", "isalnum------------------------------");

	printf("%d\n",isalnum(a));
	printf("%d\n",isalnum(b));
	printf("%d\n",isalnum(c));
	printf("%d\n",isalnum(d));
	printf("%d\n",isalnum(e));
	printf("%d\n",isalnum(f));
	return 0;
}

int		main(void)
{
	int a = 64;
	int b = -1;
	int c = 150;
	int d = 0;
	int ha = 0x57;
	int hb = 0x5a;

	printf("%s\n", "ft_isascii------------------------------");

	printf("%d\n",ft_isascii(a));
	printf("%d\n",ft_isascii(b));
	printf("%d\n",ft_isascii(c));
	printf("%d\n",ft_isascii(d));
	printf("%d\n",ft_isascii(ha));
	printf("%d\n",ft_isascii(hb));
	printf("%d\n",ft_isascii(a));
	printf("%d\n",ft_isascii(b));
	printf("%d\n",ft_isascii(c));
	printf("%d\n",ft_isascii(d));
	printf("%d\n",ft_isascii(ha));
	printf("%d\n",ft_isascii(hb));

	printf("%s\n", "isascii------------------------------");

	printf("%d\n",isascii(a));
	printf("%d\n",isascii(b));
	printf("%d\n",isascii(c));
	printf("%d\n",isascii(d));
	printf("%d\n",isascii(ha));
	printf("%d\n",isascii(hb));
	printf("%d\n",isascii(a));
	printf("%d\n",isascii(b));
	printf("%d\n",isascii(c));
	printf("%d\n",isascii(d));
	printf("%d\n",isascii(ha));
	printf("%d\n",isascii(hb));
}

int		main(void)
{
	char a = 0;
	char b = 8;
	char c = 'f';
	char d = 'a';
	char e = 'z';
	char f = '7';

	printf("%d\n",ft_isprint(a));
	printf("%d\n",ft_isprint(b));
	printf("%d\n",ft_isprint(c));
	printf("%d\n",ft_isprint(d));
	printf("%d\n",ft_isprint(e));
	printf("%d\n",ft_isprint(f));

	printf("%s\n", "------------------------------");

	printf("%d\n",isprint(a));
	printf("%d\n",isprint(b));
	printf("%d\n",isprint(c));
	printf("%d\n",isprint(d));
	printf("%d\n",isprint(e));
	printf("%d\n",isprint(f));
}