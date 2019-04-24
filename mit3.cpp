//2.1
class Point
{
	private:
	int x,y;

public:
	Point(int u,int v):x(u),y(v){}
	int getX(){return x;}
	int getY(){return y;}

	void doubleVal(){
	x*=2; y*=2;
	}
};
	int main()
	{
	 	Point myPoint(5,3);
	myPoint.doubleVal();
	cout<<myPoint.getX()<<" ,"<<myPoint.getY()<<"\n";
	return 0;
	}
//2.2
#include<iostream>
using namespace std;


class Point{
private:
	int x,y;
public:
	Point(int u, int v):x(u),y(v){}
	int getX(){return x;}
	int getY(){return y;}
	void setX(int newX){x=newX;}


};

int main()
{
	Point p(5,3);
	p.setX(9001);
	cout<<p.getX()<<" "<<p.getY();
	return 0;
}
//2.3
 class Point{
        
    public:
        int x,y;
    Point(int u,int v):x(u),y(v){}
    int getX(){return x;}
    int getY(){return y;}
    };
int main()
{
    Point p(5,3);
    cout<<p.x<<" "<<p.y<<"\n";
return 0;
    
}
//2.6
class Point{
    private: int x,y;
    public:
    Point(int u,int v):x(u),y(v){}
    int getX(){return x;}
    
    int getY(){return y;}
    
};
int main()
{
    Point *p=new Point(5,3);


cout<<p->getX()<<" "<<p->getY();
delete p;
return 0;}
