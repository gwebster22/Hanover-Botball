int main()
{
	printf("Hello, World!\n");
	motor (0,100);
	motor (2,100);	
	msleep (2000);
	motor (2,100);
	motor (0,0);
	msleep (1200);
	motor (2,100);
	motor (0,100);
	msleep (5500);
	return 0;
}

