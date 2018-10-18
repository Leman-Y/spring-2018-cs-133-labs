#include <iostream>
#include <cassert>

int fact(int n){
  assert(n>=0);
  int p=1;
  for (int i=0; i < n; i++){
    p=p*i;
  }
}

// void fact_tests(){ 
 

int main(){
  int ans;
  ans=fact(5);

  ans=fact(-20);
  assert(fact(5)==120);
  assert(fact(3)==6);

//Program will not run if I have a bad answer 


/* 
  ans=fact(5);
  
  std::cout << "fact of 5 is" << ans<< std::endl;
  

  ans=fact(3);
  std::cout<< "fact of 3 is" << ans<< std::endl;  
*/
  return 0;
}




