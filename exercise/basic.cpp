#include <iostream>
// #define Day 7 

// int main(){

//     std::cout << "a week has:" << Day << " days" <<std::endl;
//     return 0;
// }

// int main(){
//     const int month = 12;

//     std::cout << "a year has:" << month << " months" <<std::endl;

//     return 0;
// }

// int main(){

//     float f1 = 3.14f;

//     double f2 = 3.14;

//     std::cout<<f1<<std::endl;

//     std::cout<<f2<<std::endl;
    
//     return 0;
// }

// int main(){

//     char c = 'a';

//     char  d = "hello world";//错误：1 不可用“” 2 ‘’中只能放一个字符

//     std::cout<<c<<d<<std::endl;
//     std::cout<<sizeof(char)<<std::endl;
//     return 0;
    
// }

// int main(){
//     std::cout<<"hello world"<<std::endl;
//     std::cout<<"test"<<std::endl;

//     std::cout<<"hello\n"<<"test"<<std::endl;//\n的作用换行
//     std::cout<<"world\\"<<"test"<<std::endl;//'\\'作用 是\
//     std::cout<<"hellooo\t"<<"test"<<std::endl;//\t是制表 队列整齐
//     std::cout<<"he\t"<<"test"<<std::endl;
// }

// #include <string>
// int main(){

//     char a[] = "hello";
//     std::cout<<a<<std::endl;

//     std::string b = "hello world";//别忘了包含头文件 #include <string> string前加std：：
//     std::cout<< b <<std::endl;
// }

// #include<string>
// int main(){
//     // int a = 0;
//     // std::cout<<"print a number:"<<std::endl;
//     // std::cin>>a;
//     // std::cout<<"number:"<<a<<std::endl;
//     // float f = 3.14f;
//     // std::cout<<"print a float number:"<<std::endl;
//     // std::cin>>f;
//     // std::cout<<"number:"<<f<<std::endl;
//     // char c = 's';
//     // std::cout<<"print a char number:"<<std::endl;
//     // std::cin>>c;
//     // std::cout<<"numnber:"<<c<<std::endl;
//     // std::string str = "name";
//     // std::cout<<"print a sentence:"<<std::endl;
//     // std::cin>>str;
//     // std::cout<<"sentrence:"<<str<<std::endl;
//     // bool b = false;
//     // std::cout<<b<<std::endl;
//     // int a=10,b=3;
//     // std::cout<<a+b<<std::endl;
//     // std::cout<<a-b<<std::endl;
//     // std::cout<<a*b<<std::endl;
//     // std::cout<<a%b<<std::endl;
// }

// int main(){
//     int a = 10;
//     int b =a--*10;
//     // std::cout<<++a<<std::endl;
//     // std::cout<<a++<<std::endl;
//     // std::cout<<--a<<std::endl;
//     std::cout<<b<<a<<std::endl;
// }

// int main(){
//     int a = 10;
//     a %= 100;
//     std::cout<<a<<std::endl;
// }

// int main(){
//     int a = 10;
//     int b = 20;
//     // int c;
//     std::cout<<(a>=b)<<std::endl;
//     // c = a==b;
//     // std::cout<<c<<std::endl;
// }

// int main(){
//     int a = 10;
//     std::cout<<a<<std::endl;
//     std::cout<<!a<<std::endl;
//     std::cout<<!!a<<std::endl;
// }

// int main(){                          //都真为真
//     int a = 1;
//     int b = 1;
//     int c = 0;
//     std::cout<<(a&&b)<<std::endl;
//     std::cout<<(a&&c)<<std::endl;
//     std::cout<<(c&&c)<<std::endl;
// }

// int main(){
//     int a = 1;                      //都假为假
//     int b = 1;
//     int c = 0;
//     std::cout<<(a||b)<<std::endl;
//     std::cout<<(a||c)<<std::endl;
//     std::cout<<(c||c)<<std::endl;
// }

// int main(){
//     int score = 0;
//     std::cout<<"plz print your score : "<<std::endl;
//     std::cin>>score;
//     std::cout<<"你的分数为 : "<<score<<std::endl;
//     if(score>=600){
//         std::cout<<"你考上了一本大学！"<<std::endl;
//     }
//     else{
//         std::cout<<"你落榜了！"<<std::endl;
//     }
// }

// int main(){
//     int score = 0;
//     std::cout<<"print your score"<<std::endl;
//     std::cin>>score;
//     std::cout<<"你的分数为："<<score<<std::endl;
//     if(score>=600){
//         std::cout<<"恭喜 一本大学"<<std::endl;
//     }
//     else if (score>=500)
//     {
//         std::cout<<"恭喜 二本大学"<<std::endl;
//     }
//     else if (score>=400)
//     {
//         std::cout<<"恭喜 三本大学"<<std::endl;
//     }
//     else
//     {
//         std::cout<<"可惜 来年再战"<<std::endl;
//     }
    
// }

// int main(){
//     int score = 0;
//     std::cout<<"print your score"<<std::endl;
//     std::cin>>score;
//     std::cout<<"你的分数为："<<score<<std::endl;
//     if(score>=600){
//         std::cout<<"恭喜 一本大学"<<std::endl;
//         if (score>700)
//         {
//            std::cout<<"恭喜 北大！"<<std::endl; 
//         }
//         else if (score>650)
//         {
//             std::cout<<"恭喜 清华！"<<std::endl;
//         }
//         else
//         {
//             std::cout<<"恭喜 人大！"<<std::endl;
//         }
        
        
//     }
//     else if (score>=500)
//     {
//         std::cout<<"恭喜 二本大学"<<std::endl;
//     }
//     else if (score>=400)
//     {
//         std::cout<<"恭喜 三本大学"<<std::endl;
//     }
//     else
//     {
//         std::cout<<"可惜 来年再战"<<std::endl;
//     }
    
// }

// int main(){
//     int a = 0,b = 0,c = 0;
//     std::cout<<"请输入三只小猪的体重"<<std::endl;
//     std::cin>>a>>b>>c;
//     std::cout<<"小猪a的体重为:"<<a<<std::endl;
//     std::cout<<"小猪b的体重为:"<<b<<std::endl;
//     std::cout<<"小猪c的体重为:"<<c<<std::endl;
//     if (a>b){
//         if (a>c)
//         {
//             std::cout<<"最重的小猪是a"<<std::endl;
//         }
//         else{
//             std::cout<<"最重的小猪是c"<<std::endl;
//         }
        
//     }
//     else{
//         if (b>c)
//         {
//             std::cout<<"最重的小猪是b"<<std::endl;
//         }
//         else{
//             std::cout<<"最重的小猪是c"<<std::endl;
//         }
//     }
    
// }

// int main(){//三目运算符：表达式1？表达式2：表达式三；
//     int a = 10;
//     int b = 20;
//     int c = 5;
//     c = (a>b?a:b);
//     std::cout<<c<<std::endl;
//     (a>b?a:b) = 100;
//     std::cout<<a<<std::endl;
//     std::cout<<b<<std::endl;
// }

// int main(){
//     std::cout<<"请打分 "<<std::endl;
//     int a = 0;
//     std::cin>>a;
//     std::cout<<"分数为： "<<a<<std::endl;
//     switch (a)
//     {
//     case 5:
//         std::cout<<"您很满意"<<std::endl;
//         break;
//     case 4:
//         std::cout<<"一般满意"<<std::endl;
//         break;
//     case 3:
//         std::cout<<"满意"<<std::endl;
//         break;    
//     case 2:
//         std::cout<<"不满意"<<std::endl;
//         break; 
//     case 1:
//         std::cout<<"很不满意"<<std::endl;
//         break;
//     case 0:
//         std::cout<<"极其不满意"<<std::endl;
//         break;           
//     default:
//         break;
//     }
// }

// int main(){

//     int a = 0 ;
//     while (a < 10 )
//     {
//         std::cout<<a<<std::endl;
//         a++;
//     }
    
// }

// int main(){

// }
// #include <ctime>
// int main(){

//     srand((unsigned int)time(NULL));//随机数种子
//     int number = rand()%100 +1 ;
//     std::cout<<"请输入一个随机数"<<std::endl;
//     int a = 0;
//     while (1)
//     {
//         std::cin>>a;

//         if(a>number){
//             std::cout<<"大了"<<std::endl;
            
//         }
//         else if (a<number)
//         {
//             std::cout<<"小了"<<std::endl;
//         }
//         else{
//             std::cout<<"猜对了"<<std::endl;
//             return 0;    
//         }
//     }
    
// }

// int main(){
//     int a = 0;
//     do
//     {
//         std::cout<<a<<std::endl;
//         a++;
//     } while (a<10);
    
    
// }

// int main(){
//     int num = 100;
//     int a = 0;
//     int b = 0;
//     int c = 0;
//     do
//     {
//         a = num%10;
//         b = num/10%10;
//         c = num/100;
//         if (a*a*a + b*b*b + c*c*c == num)
//         {
//             std::cout<<num<<std::endl;
//         }
//         num++;
        
//     } while (num<1000);
// }
// int main(){
//     for (int a = 0; a < 10; a++)
//     {
//         std::cout<<a<<std::endl;
//     }
    
// }

// int main(){
//     for (int number = 1;number<=100;number++)
//     {
//         if (number%10==7)                                //if(number%10==7||number%100/10==7||number%7==0)
//     {
//         std::cout<<number<<"敲桌子"<<std::endl;
//     }
//         else if (number%100/10==7)
//     {
//         std::cout<<number<<"敲桌子"<<std::endl;
//     }
//         else if (number%7==0)
//     {
//         std::cout<<number<<"敲桌子"<<std::endl;
//     }
//         else{
//         std::cout<<number<<std::endl;
//     }
//     }
      
// }

// int main(){
//     for (int i = 0; i < 10; i++)
//     {
//         for (int i = 0; i < 10; i++)
//     {
//         std::cout<<"* ";
//     }
//     std::cout<<std::endl;
//     }  
// }

// int main(){

   
//         for (int i = 1; i < 10; i++)
//     {
//         // std::cout<<i<<std::endl;
//         for (int j = 1; j <= i; j++)
//         {
//             std::cout<<j<<"*"<<i<<"="<<j*i<<" ";
//         }
//         std::cout<<std::endl;
        
//     }
    
   
// }

//  int main(){
//      for (int i = 0; i < 10; i++)
//      {
//         if (i%2==0)
//         {
//             continue;
//         }
        
//          std::cout<<i<<std::endl;
//      }
     
//  }

// int main(){
//     std::cout<<"1xxxx"<<std::endl;
//     std::cout<<"2xxxx"<<std::endl;
//     goto FLAG;
//     std::cout<<"3xxxx"<<std::endl;
//     std::cout<<"4xxxx"<<std::endl;
//     std::cout<<"5xxxx"<<std::endl;
//     FLAG:
//     std::cout<<"6xxxx"<<std::endl;
// } 

// int main(){
//     int n ;
//     int sum =0;
//     std::cin>>n;
//     if(n>=0&&n<=1000){
//         for(int a = 1;a<=n;a++){
//             if(a%2==0)
//             sum=sum+a;
//         }
//     } 
//     std::cout<<sum<<std::endl;   
// // }
// int main() {
//     int num ;
//     do {
//         int a = num / 100; 
//         int b = num % 100 / 10; 
//         int c = num % 10; 
//         if (a * a * a + b * b * b + c * c * c == num)
//             std::cout << num << std::endl;
//         num++;
//     } while (num > 0 && num < 1000);
// }
// int main() {
    
//     int n;
//     std::cin >> n;

//     for(int a = 1;a<=n;a++){
//          for(int b = 1;b<=a;b++){
//              std::cout<<b;
//         }
//          std::cout<<std::endl;
//     }

//     return 0;
// }
// int main() {

//     long long num = 0;
//     long long sum;
//     for(int i = 0;i<=10;i++){
//         num= num*10+9;
//         sum = num+num;
//     }
//     std::cout<<sum<<std::endl;
    

//     return 0;
// }
// int main() {

//     // 下落的高度和落地的次数
//     double h;
//     int n;
//     double sum;

//     std::cin >> h;
//     std::cin >> n;
//     sum = sum-h;

//     for(int a =1; a<=n;a++){
        
//         sum=sum+h*2;
//         h=h/2;
        
//     }
    
//     std::cout<<sum<<std::endl;
//     std::cout<<h<<std::endl;

//     return 0;
// }
