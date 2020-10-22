//Harry Potter Sorting Hat Quiz
//“A thousand years or more ago,
//When I was newly sewn,
//There lived four wizards of renown,
//Whose names are still well known.”

//The Hogwarts School of Witchcraft and Wizardry welcomes you! First-year students must go through //the annual Sorting Ceremony.

//The Sorting Hat is a talking hat at Hogwarts that magically determines which of the four school //Houses each new student belongs most to:

//gryffindor
//hufflepuff
//ravenclaw
//slytherin

# include <iostream>
int main()
{
  int gryffindor = 0, hufflepuff = 0, ravenclaw = 0, slytherin = 0;
  int answer1 = 0, answer2 = 0, answer3 = 0, answer4 = 0;
  std::cout << "The Sorting Hat Quiz!\n";
  std::cout << "Q1) When I'm dead, I want people to remember me as:\n\n  1) The Good\n  2) The Great\n  3) The Wise\n  4) The Bold\n";
  std::cin >> answer1;
  if(answer1 == 1){
    hufflepuff++;
  }
  else if (answer1 == 2){
    slytherin++;
  }
  else if (answer1 == 3){
    ravenclaw++;
  }
  else if (answer1 == 4){
    gryffindor++;
  }
  else{
    std::cout << "Invalid input";
  }
  std::cout << "Q2) Dawn or Dusk?\n\n  1) Dawn\n  2) Dusk\n";
  std::cin >> answer2;
  if(answer2 == 1){
    ravenclaw++;
    gryffindor++;
  }
  else if (answer2 == 2){
    hufflepuff++;
    slytherin++;
  }
  else{
    std::cout << "Invalid input";
  }
  std::cout << "Q3) Which kind of instrument most pleases your ear?\n\n  1) The violin\n  2) The trumpet\n  3) The piano\n  4) The drum\n";
  std::cin >> answer1;
  if(answer3 == 1){
    slytherin++;
  }
  else if (answer3 == 2){
    hufflepuff++;
  }
  else if (answer3 == 3){
    ravenclaw++;
  }
  else if (answer3 == 4){
    gryffindor++;
  }
  else{
    std::cout << "Invalid input";
  }
  std::cout << "Q4) Which road tempts you most?\n\n  1) The wide, sunny grassy lane\n  2) The narrow, dark, lantern-lit alley\n  3) The twisting, leaf-strewn path through woods\n  4) The cobbled street lined (ancient buildings)\n";
  std::cin >> answer1;
  if(answer4 == 1){
    hufflepuff++;
  }
  else if (answer4 == 2){
    slytherin++;
  }
  else if (answer4 == 3){
    gryffindor++;
  }
  else if (answer4 == 4){
    ravenclaw++;
  }
  else{
    std::cout << "Invalid input";
  }
  int max = 0;
  string house;
  if (gryffindor > max) {

  max = gryffindor;
  house = "Gryffindor";

}

if (hufflepuff > max) {

  max = hufflepuff;
  house = "Hufflepuff";

}

if (ravenclaw > max) {

  max = ravenclaw;
  house = "Ravenclaw";

}

if (slytherin > max) {

  max = slytherin;
  house = "Slytherin";

}

std::cout << house << "!\n";

}
