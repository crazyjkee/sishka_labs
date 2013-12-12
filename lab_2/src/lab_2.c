/*
 ============================================================================
 Name        : lab_2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1415927
#define test

void n1(double x,double y,double z)
{
double t;

double a_1 = 2*cos(x-PI/6);
double b_2 = 0.5+pow(sin(y),2);
double c_3 = pow(z,2);
double d_4 = 3-(pow(z,2)/5);
t = (a_1/b_2)*(1+(c_3/(d_4)));
printf("%lf\n",t);
}

void n2(double x,double y,double z){
	double u;
	double a=pow(8+pow(fabs(x-y),2)+1,1/3);
	double b=pow(x,2)+pow(y,2)+2;
	double c=exp(fabs(x-y))*pow((pow(tan(z),2)+1),x);
	u=(a/b)-c;
	printf("%lf\n",u);
}

void n3(double x,double y,double z){
	double v;
	double a=1+pow(sin(x+y),2);
	double b=fabs(x-(2*y/1+pow(x,2)*pow(y,2)));
	double c=pow(x,fabs(y));
	double d=pow(cos(atan2(1,z)),2);
	v=(a/b)*c+d;
	printf("%lf\n",v);
}

void n4(double x,double y,double z){
	double w;
	double a=pow(fabs(cos(x)-cos(y)),1+2*pow(sin(y),2));
	double b=(1+z+(pow(z,2)/2)+(pow(z,3)/3)+(pow(z,4)/4));
	w= a*b;
printf("%lf\n",w);
}

void n5(double x,double y,double z){
	double alpha;
	double a=log(pow(y,-sqrt(fabs(x))));
	double b=x-y/2;
	double c=pow(sin(atan(z)),2);
	alpha=(a*b+c);
	printf("%lf\n",alpha);
	//ошибка
}

void n6(double x,double y,double z){
	double betta;
	double a=sqrt(10*(pow(x,1/3)+pow(x,y+2)));
	double b=pow(asin(z),2)-fabs(x-y);
	betta = -a*b;
	printf("%lf\n",betta);
}

void n7(double x,double y,double z){
	double igrik;
	double a=5*atan(x);
	double b=acos(x)/4;

	double c=x+3*fabs(x-y)+pow(x,2);
	double d=fabs(x-y)*z+pow(x,2);
	igrik = a-b*c/d;
	printf("%lf\n",-igrik);
}

void n8(double x,double y,double z){
	double fi;
	double a=exp(fabs(x-y));
	double b=(pow(fabs(x-y),x+y));
	double c= atan(x)+atan(z);
	double d=pow(pow(x,6)+pow(log(y),2),1/3);
	fi = (a*b)/c+d;
	printf("%lf\n",fi);
}

void n9(double x,double y,double z){
	double ww;
	double a=fabs(pow(x,y/x)-(pow(y/x,1.0/3)));
	double b=y-x;
	double c=cos(y);
	double d=z/(y-x);
	double e=1+pow((y-x),2);
	ww=a+b*((c-d)/e);
	printf("%lf\n",ww);
}

void n10(double x,double y,double z){
	double aa;
	double a=pow(2,-x);
	double b=sqrt(x+pow(fabs(y),1.0/4));
	double c=pow(exp(x-1/sin(z)),1.0/3);
	aa=a*b*c;
	printf("%lf\n",aa);
}

void n11(double x,double y,double z){
	double bb;
	double a=pow(y,pow(fabs(x),1.0/3));
	double b=pow(cos(y),3);
	double c=fabs(x-y)*(1+(pow(sin(z),2)/sqrt(x+y)));
	double d=exp(fabs(x-y))+x/2;
	bb=(c/d)*b+a;
	printf("%lf\n",bb);
}

void n12(double x,double y,double z){
	double cc;
	double a=pow(2,pow(y,x));
	double b=pow(3,x*y);
	double c=y*(atan(z)-PI/6);
	double d=fabs(x)+(1/(pow(y,2)+1));
	cc=a+b-c/d;
	printf("%lf\n",cc);
}


int main() {
	n1(14.26,-1.22,0.035);
	n2(-4.5,0.75*pow(10,-4),84.5);
	n3(0.0374,-0.825,16);
	n4(4000,-0.875,-0.475*pow(10,-3));
	n5(-15.246,4.642*pow(10,-2),20.001*pow(10,2));
	n6(16.55*pow(10,-3),-2.75,0.15);
	n7(0.1722,6.33,3.25*pow(10,-4));
	n8(-2.235*pow(10,-2),2.23,15.221);
	n9(1.825*pow(10,2),18.225,-3.298*pow(10,-2));
	n10(3.981*pow(10,-2),-1.625*pow(10,3),0.512);
	n11(6.251,0.827,25.001);
	n12(3.251,0.325,0.466*pow(10,-4));
	return EXIT_SUCCESS;
}

void ploshad_kv(double a){
	printf("Площадь квадрата - %lf, периметр квадрата %lf",pow(a,2),a*4);
}

void ploshad_pryamk(){}
