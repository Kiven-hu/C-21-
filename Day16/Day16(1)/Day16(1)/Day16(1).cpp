#include<iostream>
#include<cstring>
using namespace std;

class wheel;
class car{
public:
	car(char *pn);
	void run(wheel &w);
private:
	char name[20];

};
car::car(char *pn)
{
	strcpy(name, pn);
}

class wheel{
public:
	wheel(int s);
	friend void car::run(wheel &w);
private:
	int speed;
};
wheel::wheel(int s)
{
	speed = s;
}
int main()
{
	wheel w(60);
	car c("New car");
	c.run(w);
	return 0;
}

void car::run(wheel &w)
{
	cout << "the car is running" << endl;
	cout << "name:" << name << "speed:" << w.speed << endl;
}