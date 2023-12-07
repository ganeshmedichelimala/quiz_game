#include<iostream>
int main(){
  std :: string questions[] = {"1. What year was C++ invented? :", 
                                "2. Who invented C++? : ",
                                "3. What is precedecessor of C++? :", 
                                "4. Is the Earth flat? : "};
  std :: string options[][4] = {{"A. 1965", "B. 1975", "C. 1985", "D. 1989"},
                                {"A. Guidon van Rossun", "B. Bjarne Stroustrup", "C. John Carmack", "D. Mark Zuckerburg"},
                                {"A. C", "B. C+", "C. C--","D. B++"},
                                {"A. Yes", "B. NO", "C. Somtimes", "D. What's Earth"}};
  char anwserKey[] ={'C', 'B', 'A', 'B'};
  int size = sizeof(questions)/sizeof(questions[0]);
  char guess;
  int score = 0;


  for (int i = 0 ; i < size ; i++){
    std :: cout << "*****************\n";
    std :: cout << questions[i]<<"\n";
    std :: cout << "******************\n";
    for ( int j = 0; j < sizeof(options[0])/sizeof(options[i][0]); j++){
      std :: cout << options[i][j] << "\n";
    }
    std :: cin >> guess;
    guess = toupper(guess);
    if (guess == anwserKey[i]){
      std :: cout << "CORRECR\n";
      score++;
    }
    else{
      std :: cout << "WRONG\n";
      std :: cout << "Answer : "<<anwserKey[i] << "\n";
    }
  }
  std :: cout << "Your Score : " << score;
  return 0;
}