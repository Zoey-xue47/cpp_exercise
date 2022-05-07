#include <iostream>
//数组：一个集合，里面存放相同类型的数据元素；
// int main(){
//     int arr[5];
//     arr[0]=10;
//     arr[1]=20;
//     arr[2]=30;
//     std::cout<<arr[2]<<std::endl;
//     int array[3] = {10,20,30};
//     std::cout<<array[1]<<std::endl;
//     int arr1[]={10,20,30,40};
//     // std::cout<<arr1[3]<<std::endl;
//     for(int i =0;i<4;i++){
//         std::cout<<arr1[i]<<std::endl;
//     }
//     std::cout<<sizeof(arr1[0])<<std::endl;
//     std::cout<<arr1<<std::endl;//arr1的首地址（第一个元素的地址） 转化成十进制在前加int
//     std::cout<<&arr1[2]<<std::endl;//“ & ”为取址符 可以取地址

// }
// }
// int main() {
    
//     int arr[] = {300,350,200,400,250};
//     int max = 0;
//     for (int i = 0; i < 5; i++)
//     {
//         if (arr[i]>max)
//         {
//             max=arr[i];
//         }
        
//     }
//     std::cout<<max<<std::endl;
        
// }
// int main(){
//     int arr[] = {1,3,2,5,4};
//     for (int i = 4; i >=0; i--)
//     {
//         std::cout<<arr[i];
//     }
//     std::cout<<std::endl;
//     std::cout<<arr[2]<<std::endl;
// }

// int main(){                                 //冒泡排序，掌握不是很好
//     int arr[] = {2,4,0,5,7,1,3,8,9};
//     for (int i = 0; i < 9; i++)
//     {
//         std::cout<<arr[i]<<" ";
//     }
//     std::cout<<std::endl;
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
//     for (int i = 0; i < 9; i++)
//     {
//         std::cout<<arr[i]<<" ";
//     }
//     std::cout<<std::endl;   

// }
// int main(){
//     // int arr[2][3] = {
//     //     {1,2,3},
//     //     {4,5,6}
//     // };
//     // for (int i = 0; i < 2; i++)
//     // {
//     //     for (int j = 0; j < 3; j++)
//     //     {
//     //         std::cout<<arr[i][j]<<" ";
//     //     }
//     //     std::cout<<std::endl;
        
//     // }
//     // int arr3[2][3] = {1,2,3,4,5,6};
//     //   for (int i = 0; i < 2; i++)
//     // {
//     //     for (int j = 0; j < 3; j++)
//     //     {
//     //         std::cout<<arr3[i][j]<<" ";
//     //     }
//     //     std::cout<<std::endl;
        
//     // }

//     int arr[][2]={1,2,3,4,5,6};
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             std::cout<<arr[i][j]<<" ";
//         }
//         std::cout<<std::endl;
        
//     }
    
// }

// int main(){
//     int arr[2][3] = {
//         {1,2,3},
//         {4,5,6}
//     };
//     std::cout<<sizeof(arr)<<std::endl;
//     std::cout<<sizeof(arr[0])<<std::endl;//第一行占据的内存
//     std::cout<<sizeof(arr[0][0])<<std::endl;//第一个数据占据的字节
//     std::cout<<arr<<std::endl;//取地址
//     std::cout<<arr[1]<<std::endl;

// }
// int main(){
    
//     int arr[3][3] = {
//         {100,100,100},
//         {90,50,100},
//         {60,70,80}
//         };
//     // std::cout<<"张三的成绩为："<<(long)&arr[0]<<std::endl;
//     // std::cout<<"李四的成绩为："<<(long)&arr[1]<<std::endl;
//     // std::cout<<"王五的成绩为："<<(long)&arr[2]<<std::endl;
//     for (int i = 0; i < 3; i++)
//     {
//         int sum = 0 ;
//         for (int j = 0; j < 3; j++)
//         {
//             sum = sum+arr[i][j];
//             std::cout<<arr[i][j]<<" ";
               
//             }
//         std::cout<<sum<<std::endl;
         
//     }
    
// }
        

// #include <iostream>
// using namespace std;

// int main() {

//     int arr[6] = { 0 };

//     int len = sizeof(arr) / sizeof(int);
    
//     for (int i = 0; i < len; i++) {
//         cin >> arr[i];
//     }

//     cout << "[";
//     for (int i = 0; i < len; i++) {
//         if (i == len - 1) {
//             cout << arr[i] << "]" << endl;
//             break;
//         }
//         cout << arr[i] << ", ";
//     }

//     int temp = arr[0];
//     arr[0] = arr[5];
//     arr[5] = temp;
    
//     int temp1 = arr[1];
//     arr[1] = arr[4];
//     arr[4] = temp1;
    
//     int temp2 = arr[2];
//     arr[2] = arr[3];
//     arr[3] = temp2;
    

//     cout << "[";
//     for (int i = 0; i < len; i++) {
//         if (i == len - 1) {
//             cout << arr[i] << "]" << endl;
//             break;
//         }
//         cout << arr[i] << ", ";
//     }

//     return 0;
// }turn 0;
// }

// using namespace std;

// int main(){
//     std::cout<<"请随机输入六个数"<<std::endl;
//     int arr[6] ;
//     int len = sizeof(arr)/sizeof(int);
//     for (int i = 0; i < len; i++)
//     {
//         std::cin>>arr[i];
//     }
//     cout << "[";
//     for (int i = 0; i < len; i++)
//     {
//         if (i==len-1){
//             std::cout<<arr[i]<<"]"<<std::endl;
//             break;
//         }
//         cout << arr[i] << ", ";
        
//     }
// }

// using namespace std;

// int main() {

//     int arr[4][3] = {
//         {22, 66, 44},
//         {77, 33, 88},
//         {25, 45, 65},
//         {11, 66, 99} // write your code here......
//     };
    
//     for (int i = 0; i < 4; i++) {
//         int sum = 0;
//         for (int j = 0; j < 3; j++) {
//             sum = sum + arr[i][j];
//         }
//         std::cout<<sum<<std::endl;
//     }
    



//     return 0;
// }


//函数：将经常使用的代码封装起来，减少代码重复
// int add(int num1,int num2){
//     int sum = num1+num2;
//     return sum;
// }

// //函数的调用
// int main(){
//     int a=10;
//     int b=20;
//     int c= add(a,b);
//     std::cout<<c<<std::endl;
// }
// int swap(int a,int b){

//     int temp = a;
//     a=b;
//     b=temp;
//     std::cout<<a<<b<<std::endl;

// }
// int main(){
//     int a = 10;
//     int b = 20;
//     swap(a,b);
    
// }

//函数的样式：1，无参无返  2，有参无返  3，无参有返  4，有参有返
// void test(){ // viod 解释 https://www.runoob.com/w3cnote/c-void-intro.html
//     std::cout<<"you are beautiful!"<<std::endl;
// }
// int main(){
//     test();
// } 
// #include "swap.cpp"
// int main(){
//     int a = 10;
//     int b = 20;
//     swap(a,b);
// }