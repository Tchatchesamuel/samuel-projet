#include <iostream> 
#include <cmath>
int main (int argc ,char ** argv){
unsigned long a,b,c;
std::cout<<"entre les dimention de votre triangle"<<std::endl;
std::cin>>a>>b>>c;
if(a+b>c&&c+a>b&&b+c>a){
    //determinons la nature du triangle
    if(a==b==c){
        std::cout<<"votre triangle est equilaterale"<<std::endl;
    }
    else if (a==b!=c||a==c!=b||c==b!=a){ 
         std::cout<<"votre triangle est isocel"<<std::endl;
    }
   else if(a==b&&sqrt(a*a+b*b)==c||b==c&&sqrt(b*b+c*c)==a||c==a&&sqrt(a*a+c*c)==b){
    std::cout<<"votre triangle  est rectangle isocel"<<std::endl;
   } 
   
   else if(sqrt(a*a+b*b)==c||sqrt(a*a+c*c)==b||sqrt(c*c+b*b)==a){
     std::cout<<"votre triangle est rectangle"<<std::endl;
   }
   
   else{
    std::cout<<"votre triangle est quelconque"<<std::endl;
   }
    }
else{
    std::cout<<"ces distances ne peuvent pas former un triangle  vieller les modifiers!!!"<<std::endl;
   }

return 0;
}
