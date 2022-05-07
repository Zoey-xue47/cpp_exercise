// c++核心编程 
//c++分为四个区：1 代码区：存放函数体的代码，操作系统管理 2 全局区：存放全局变量和静态变量以及常量 
              //3 栈区：由编译器自动分配释放。存放函数的参数值，局部变量等 4 堆区：程序员自己分配和释放 
#include<iostream>
#include<string>
//全局区
// int g_a = 10;  //全局变量
// int g_b = 10;

// const int c_g_a = 10;// const 全局变量
// const int c_g_b = 10;
// int main(){

//     int a =10;  //局部变量
//     int b = 10;

//     static int s_a = 10;  //静态变量
//     static int s_b = 10;

//     std::cout<<(long long) &"hello world"<<std::endl; //常量---字符串

//     const int c_a = 10;// const 局部变量
//     const int c_b = 10;

//     std::cout<<(long long)&a<<" "<<(long long)&b<<std::endl;
//     std::cout<<(long long)&c_a<<" "<<(long long)&c_b<<std::endl;
//     std::cout<<(long long)&g_a<<" "<<(long long)&g_b<<std::endl;
//     std::cout<<(long long)&s_a<<" "<<(long long)&s_b<<std::endl;
//     std::cout<<(long long)&c_g_a<<" "<<(long long)&c_g_b<<std::endl;

// }

//栈区：不要返回局部变量的地址，栈区开辟的数据有编译器自己自动释放
//在堆区开辟数据

// int  *func(){
//     int *p = new int (10);
    
//     return p;   
    
// }
// int main(){
//      int *p = func();
//      std::cout<< (long long)*p<<std::endl;
// }

//new 的基本语法 和开辟数组
// int *func(){
//     int *p = new int(10);
//     return p;
// }

// void test1(){

//     int *p = func();
//     std::cout<<(long long)*p<<std::endl;
//     std::cout<<(long long)*p<<std::endl;
//     std::cout<<(long long)*p<<std::endl;
//     delete p;//释放内存
//     std::cout<<(long long)*p<<std::endl;
// }

// void test2(){
//     int *arr = new int[10];
//     for (int i = 0; i < 10; i++)
//     {
//         arr[i] = i+100;
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         std::cout<<arr[i]<<std::endl;
//     }
//     delete[] arr;
//     std::cout<<arr<<std::endl;
    
    
// }

// int main(){
//     test2();
// }

//引用----给变量起别名   数据类型 &别名 = 原名  引用形参会修饰实参
 
// void swap1(int a,int b){  //引用做函数的参数
    
//     int temp = a;
//     a = b;
//     b = temp;
    
//     // std::cout <<a <<b <<std::endl;
// }

// void swap2(int *a,int *b){

//     int temp = *a;
//     *a = *b;
//     *b = temp;
//     // std::cout <<*a <<*b <<std::endl;

// }

// int swap3(int &a,int &b){
//     int temp =a;
//     a = b;
//     b = temp;
//     std::cout <<a <<b <<std::endl; 
// }

// int main(){

//     int a =10;
//     int b = 20;
//     // swap1(a,b);
//     // swap2(&a,&b);
//     swap3(a,b);

//     std::cout <<a <<b <<std::endl;
  
// } 

//引用做函数的返回值
// void &test1(){
//     int a =10;
//     return a;
// }

// int &test2(){
//     static int a = 10;
//     return a;
// }

// int main(){
//     int &ref = test2();

//     test2() = 1000;

//     std::cout<<ref<<std::endl;
// }
//引用的本质是指针常量 int* const p  = &a；
//常量引用 const int &ref = 10； ====》 int temp = 10； const int& ref = temp； 
// ref = 20; 错误 加上const的时候 只读不可修改；




//函数提高 ：