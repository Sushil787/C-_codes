
#include<iostream>
int pow(int, int);
int arm(int);
int main(){
int final_term;
std::cout<<"input the no up to which you want to print armstrong: "<<std::endl;
std::cin>>final_term;
std::cout<<"the no are: "<<arm(final_term);

return 0;

}
int arm(int x){
 int temp1,temp2,sum,mod;
 for (int i = 0 ;i<=x;i++){
  sum = 0;
  temp1 = i;
  temp2 = i;
  while(temp1>0){
   mod = temp1%10;
   sum+=pow(mod,3);
   temp1 = temp1/10;

  }
  if(sum == temp2){
   std::cout<<sum<<std::endl;

  }

 }
 return 0;

}
int pow(int base, int expo){
int results = 1;
for(int i = 1; i<=expo;i++){
 results = results*base;

}
return results;

}
