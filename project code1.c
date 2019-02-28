int main()
{
	motor(0,100);
	motor(1,100);
	msleep(1000);
	motor(0,0);
	motor(1,100);
	msleep(3000);
	motor(0,100);
	motor(1,100);
	msleep(3000);
	motor(0,100);
	motor(1,0);
	msleep(1000);
	motor(0,100);
	motor(1,100);
	msleep(3000);
	motor(0,100);
	motor(1,0);
	msleep(500);
	motor(0,100);
	motor(1,100);
	msleep(6000);
	motor(0,0);
	motor(1,100);
	msleep(3000);
	return 0;
}
