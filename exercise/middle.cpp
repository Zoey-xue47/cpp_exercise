#include<iostream>
//指针：通过指针间接访问内存 可以利用指针变量保存地址
// int main(){
//     int a = 10;
//     int *p;
//     p=&a;
//     // int *p = &a;


//     std::cout<<a<<std::endl;
//     std::cout<<&a<<std::endl;
//     std::cout<<*p<<std::endl;

// //     // *p = 100;    //解引* 并且赋值
// //     // std::cout<<a<<std::endl;
// //     // std::cout<<p<<std::endl;

// }


//const修饰指针 ：1， 常量指针 “指针的指向可以修改，常量不可以”  const int *p = &a; 2，指针常量 "指针的指向不可以改，指针的常量可以" int * const p = &a;
//               3, const 既修饰指针，又修饰常量  const int *const p =&a;都不可以改.
// int main(){
//     int a = 10;
//     int b = 20;
//     // const int *p = &a;
//     int *const p = &a;
//     // const int*const  p = &a;
//     *p = 29;

// }

// int main(){
//     int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//     // std::cout<<arr[0]<<std::endl;
//     int *p = arr;
//     // std::cout<<*p<<std::endl;
//     // int a[]= {10};
//     // int * p =a;
//     // std::cout<<*p<<std::endl;
//     for (int i = 0; i < 10; i++)
//     {
//         std::cout<<*p<<std::endl;
//         p++;
//     }
    
// }

// void swap(int *p1,int*p2){   //值传递不会改变实参，地址传递会改变实参。

//     std::cout<<"交换前的；"<<*p1<<*p2<<std::endl;
//     int temp=*p1;
//     *p1=*p2;
//     *p2=temp;
//     std::cout<<"交换后的；"<<*p1<<*p2<<std::endl;
// }


// void swap(int a,int b){   //值传递不会改变实参，地址传递会改变实参。

//     std::cout<<"交换前的；"<<a<<b<<std::endl;
//     int temp=a;
//     a=b;
//     b=temp;
//     std::cout<<"交换后的；"<<a<<b<<std::endl;
// }
// int main(){
//     int a=10;
//     int b=20;
//     swap(a,b);

//     std::cout<<a<<b<<std::endl;
// }

// void bubb(int *arr){
//     for (int i = 0; i < 10-1; i++)
//     {
//     for (int j = 0; j < 10-i-1; j++)
//     {
//         if (arr[j]>arr[j+1])
//         {
//             int temp = arr[j];
//             arr[j]=arr[j+1];
//             arr[j+1] = temp;
//         }
//     } 
//     }
       
// }
// void printArray(int *arr){

//     for (int i = 0; i < 10; i++)
//     {
//         std::cout<<arr[i]<<std::endl;
//     }
// }

// int main(){
//     int arr[] = {4,3,6,9,1,2,10,8,7,5};
//     bubb(arr);
//     printArray(arr);
// }

// void bubb(int *arr){

//     for (int i = 0; i < 9-1; i++)
//     {
//          for (int j = 0; j < 9-i-1; j++)
//     {
//         if (arr[j]>arr[j+1])
//         {
//             int temp = arr[j];
//             arr[j] = arr[j+1];
//             arr[j+1] = temp;
//         }
        
//     }
//     }
// }

// void printarr(int *arr){
//     for (int i = 0; i < 9; i++)
//     {
//         std::cout<<arr[i]<<" ";
//     }
//     std::cout<<std::endl; 
// }
// int main(){                                 //冒泡排序，掌握不是很好
//     int arr[] = {2,4,0,5,7,1,3,8,9};

//     bubb(arr);
//     printarr(arr); 

// }

//结构体：struct 结构体名{结构体属性}；
#include<string>
//using namespace std;

// struct Student
// {
//     std::string name;
//     int age ;
//     int score;
// }s3; 
// int main(){
//     // struct Student s1;
//     // s1.name = "zhangsan";
//     // s1.age = 18;
//     // s1.score = 100;

//     // struct Student s2 = {"lily",18,90};
//     s3.name = "zhangsan";
//     s3.age = 18;
//     s3.score = 100;



//     std::cout<<"name:"<<s3.name<<"age:"<<s3.age<<"score"<<s3.score<<std::endl;
// }

// struct Student                       //结构体数组
// {
//     std::string name;
//     int age;
//     int score;
// };

// int main(){

//     struct Student stuArray[4]={
//         {"张三",12,89},
//         {"李四",16,90},
//         {"王五",23,78},
//         {"刘六",34,23},
//     };

//     for (int i = 0; i < 4; i++)
//     {
//        std::cout<<"name: "<<stuArray[i].name
//                 <<" age : "<<stuArray[i].age
//                 <<" score : "<<stuArray[i].score<<std::endl;    
//     }
    
// }

// struct Student                         //结构体指针
// {
//     std::string name;
//     int age;
//     int score;
// };

// int main(){
//     struct Student s = {"zhangsan",18,89};
//     struct Student *p = &s;
//     std::cout<<"name: "<<p->name
//              <<" age : "<<p->age
//              <<" score : "<<p->score;
// }

// struct Student{                         //结构体嵌套结构体
//     std::string name;
//     int age;
//     int score;
// };

// struct Teacher{
//     std::string name;
//     int age;
//     struct Student s;
// };

// int main(){
//     Teacher t = {"张三",55};
//     t.s.name = "王二小";
//     t.s.age = 10;
//     t.s.score = 99;

//     std::cout<<t.name<<t.age<<t.s.name<<t.s.age<<t.s.score;
// }


// struct Student{
//     std::string name;
//     int age;
//     int score;
// };

// void printS(struct Student s){

//     s.age = 20;

//     std::cout<<"Vname: "<<s.name<<" age: "<<s.age<<" score: "<<s.score<<std::endl;
// }

// void printS(struct Student *p){

    
//     std::cout<<"name: "<<p->name<<" age: "<<p->age<<" score: "<<p->score<<std::endl;
// }

// int main(){

//     struct Student s;
//     s.name = "zoey";
//     s.age = 16;
//     s.score = 147;

//     printS(&s);

//     std::cout<<"name: "<<s.name<<" age: "<<s.age<<" score: "<<s.score<<std::endl;
//     // std::cout<<"subname: "<<p->name<<" subage: "<<p->age<<" subscore: "<<p->score<<std::endl;

// }
#include<string>

// struct student{
//     std::string sname;
//     int score;
// };

// struct teacher
// {
//     std::string tname;
//     struct student s[5];
// };

//  void fuzhi(struct teacher t[3]){

//      std::string nameseed = "abcde";

//      for (int i = 0; i < 3; i++)
//      {
//         t[i].tname = "teacher_";
// 		t[i].tname += nameseed[i];
//         for (int j = 0; j < 5; j++)
//         {
//             t[i].s[j].sname = "student_";
// 		    t[i].s[j].sname += nameseed[j];
//             int random = rand()%61+40;
//             t[i].s[j].score = random;
//         }
 
//      }
     
//  }

// void printarr(struct teacher t[3]){

//     for (int i = 0; i < 3; i++){
// 		std::cout << "老师姓名：   " << t[i].tname <<std:: endl;
// 		for (int j = 0; j < 5; j++)
// 		{
// 			std::cout << "\t学生姓名 " << t[i].s[j].sname 
// 				 << "考试分数：" << t[i].s[j].score << std::endl;
// 		}
// 	}

// }

// int main(){

//     srand((unsigned int)time(NULL));

//     struct teacher t[3];

//     fuzhi(t);

//     printarr(t);

// }

