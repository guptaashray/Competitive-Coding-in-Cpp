# include <iostream>
# include <cstdlib>
int main(){
 std::cout << "MAGIC 8-BALL:\n";
 srand(time(NULL)); //This sets the “seed” of the random number generator.
 int answer = std::rand() % 10;
 if(answer == 0){
  std::cout<<"It is certain.";
 }
 else if(answer==2){
   std::cout<<"Reply hazy, try again.";
 }
 else if(answer==3){
   std::cout<<"Ask again later.";
 }
 else if(answer==4){
   std::cout << "Better not tell you now.";
 }
 else if(answer==5){
   std::cout<<"Concentrate and ask again.";
 }
 else if(answer==6){
   std::cout<<"Don't count on it.";
 }
 else if(answer==7){
   std::cout<<"My reply is no.";
 }
 else if(answer==8){
   std::cout<<"My sources say no.";
 }
 else if(answer==9){
   std::cout<<"Outlook not so good.";
 }
 else {
  std::cout << "Very doubtful.\n";
}
}