#include <iostream>
#include <cmath>
#define object_ay -9.81
#define pi 3.14159265358
using namespace std;

void finish(float obj_vix, float obj_viy) {
  double object_vf = sqrt(pow(obj_vix, 2) + pow((-obj_viy), 2));
  double object_ty = (-obj_viy)/(object_ay);
  double object_tx = 2 * object_ty;
  double object_dx = obj_vix * object_tx;
  double object_dy = (objt_viy * object_ty) + (0.5*object_ay*(pow(object_ty, 2)));
}

void choice_1(float object_vix, float object_viy) {
  object_vi = sqrt(pow(object_vix, 2) + pow(object_viy, 2));
  object_thetaRadians = atan(object_viy/object_vix);
  finish(object_vix, object_viy);
}

void choice_2(double object_thetaRadians, double object_vi) {
  object_thetaRadians *= pi/180;
  object_vix = object_vi * cos(object_thetaRadians);
  object_viy = object_vi * sin(object_thetaRadians);
  finish(object_vix, object_viy);
}
