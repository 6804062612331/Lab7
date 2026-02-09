#include<stdio.h>

double functionM(void);
int functionN(int n, double x);
double functionO(double, int, double, int);
double functionP(int a, int n, int b, int c);
int main(void) {
    int a, b, c, d, e;
    double r, s, t, u, v;
    
    functionM();                //a)ไม่พบ
    a = functionM();            //b)ไม่พบ
    b = functionN(a, b);        //c)ไม่errorแต่ b ที่รับเข้ามาจะถูกแปลงเป็น double
    r = functionO(r,a,s,b);     //d)ไม่พบ
    s = functionP(a,b,c,d,e);   //e errorผิดพลาดที่รับค่าparameterมากกว่าในฟังก์ชัน
    u = functionM();            //f)ไม่พบ
    c = d+functionN(r,s);       //g)ไม่errorแต่ r ที่รับเข้ามาจะถูกแปลงเป็น int
    t = s*functionO(r,a,r,a);   //h)ไม่พบ
    a = v+functionP(r,s,t,t);   //i)ไม่errorแต่ r,s,t ที่รับเข้ามาจะถูกแปลงเป็น int
    functionP(functionN(a,a),s,t,t+r);      //j)ไม่errorแต่ r,s,t+r ที่รับเข้ามาจะถูกแปลงเป็น int
    v = functionP(functionN(a,a),s,t,t+r);  //k)ไม่errorแต่ r,s,t+r ที่รับเข้ามาจะถูกแปลงเป็น int

}
double functionM(void){
    return 0;
}
int functionN(int n, double x){
    return 0;
}
double functionO(double, int, double, int){
    return 0;
}
double functionP(int a, int n, int b, int c){
    return 0;
}