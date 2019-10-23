#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <fstream>

#define PI 3.1415296535897
#define g 9.8

using namespace std;

const double b = 0.0009706133, m = 0.07, L = 0.4048;
double dt = 0.00001;
struct model{
    double x, theta, omega, alpha;
};
model N;
double t = 0;
double theta0;
int temp1, temp2;

int main() {
    ofstream file1;
    file1.open("simulation.csv");
    file1 << "t, theta (rad)" <<endl;

    scanf("%lf", &theta0);
    //theta0 *= PI/180;

    N.theta = theta0;
    N.omega = 0, N.alpha = 0;


    while(t<=10) {
        N.alpha = -(g/L)*sin(N.theta) - (b/(m*L))*N.omega;

        N.theta += (N.omega*dt)+(0.5*N.alpha*dt*dt);
        N.omega += N.alpha*dt;

        if(temp1 == temp2) {
            file1 << t <<", "<< N.theta<<endl;
            temp2+=1000;
        }

        t+=dt;
        temp1++;
    }

    file1.close();
    return 0;
}