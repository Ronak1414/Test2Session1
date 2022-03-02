#include <stdio.h>
#include <math.h>

struct _point 
{
  float x,y;
};
typedef struct _point Point;

struct _line
{
  Point p1,p2;
  float distance;
};
typedef struct _line Line;

Point input_point()
{
  Point p;
  printf("Enter the x coordinates of point 1 \n");
  scanf("%f",&p.x);
  printf("Enter the y coordinate of point 2 \n");
    scanf("%f",&p.y);
  return p;
}

Line input_line()
{
  Line l;
  l.p1=input_point();
  l.p2=input_point();
  return l;
}

void find_length(Line *l)
{float  a=(l->p2.x - l->p1.x)*(l->p2.x - l->p1.x);
 float b=(l->p2.y - l->p1.y)*(l->p2.y - l->p1.y);
 // l->distance=sqrtf(pow(l->p2.x - l->p1.x,2)+pow(l->p2.y - l->p1.y,2));
  l->distance=sqrtf(a+b);
}

void output(Line l)
{
  printf("Length of line is %f",l.distance);
}

int main()
{
  Line l;
  l=input_line();
  find_length(&l);
  output(l);
  return 0;
}