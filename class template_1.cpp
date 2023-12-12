#include<iostream>
using namespace std;

template<class T1,class T2>
class AA{
    public:
        T1 m_a;
        T2 m_b;
        AA(T1 a,T2 b):m_a(a),m_b(b){}
        AA(){cout<<"构造函数";};
        T1 get_a(){
            T1 a=2;
            return m_a+a;
        }
        T2 get_b(){
            T2 b=1;
            return m_b+b;
        }
};
int main(){
    AA<int,double>a;//用模板类AA创建对象a
    a.m_a=20,a.m_b=30;
    cout<<"a.get_a()= "<<a.get_a()<<endl;
    cout<<"a.get_b()= "<<a.get_b()<<endl;
    system("pause");
}