#include<iostream>
int main(){
std::cout<<"THE MULTIPLICATION TABLE FROM 1 TO 10 IS BELOW \N"<<std::endl;
for(int i = 1;i<=10;i++){
  std::cout<<"multiplication table of "<<i <<"is below"<<std::endl;
 for(int j = 1; j<=10;j++){
  std::cout<<i<<"*"<<j<<"="<<i*j<<std::endl;

 }
 std::cout<<"\n\n";
}



return 0;

}
