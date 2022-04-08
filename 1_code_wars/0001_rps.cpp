#include <string>

std::string rps(const std::string& p1, const std::string& p2)
{
  
  // all possible combinations:
  /*
  draw:
  rock - rock 
  paper - paper
  scrissors - scrissors
  
  P1:
  rock - scrissors - P1
  paper - rock - P1 
  scrissors - paper - P1
  
  P2:
  rock - paper - P2
  paper - scrissors - P2
  scrissors - rock - P2
  */
  
  
  if(p1 != p2) {
    if((p1 == "rock" && p2 == "scissors")
        || (p1 == "paper" && p2 == "rock")
        || (p1 == "scissors" && p2 == "paper")) {
      
      return "Player 1 won!";
    } else {
      return "Player 2 won!";
    }
  } else {
    return "Draw!";
  }
}
