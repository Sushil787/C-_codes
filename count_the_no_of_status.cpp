#include<iostream>
int main(){
int count_n = 0,count_p = 0,count_0 = 0,input_n;
std::cout<<"input 1232 for quiting \n";
while(true){
 std::cout<<"input the no: "<<std::endl;
 std::cin>>input_n;
 if(input_n > 0)
 {
  if(input_n==1232)
  {
 break;
 } else{
  count_p++;
 }
}
 if(input_n<0){
  count_n++;
 }
 if(input_n==0){
  count_0++;
 }

}
std::cout<<"the no of positive,negative,zero is :"<<count_p<<"\t"<<count_n<<"\t"<<count_0<<std::endl;

return 0;
}
