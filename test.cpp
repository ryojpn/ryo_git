#include <iostream>
#include <string>
using namespace std;


int main() {
  
std::string GameRecord;
cout << "棋譜を入力してください\n";
cin >> GameRecord;

std::string FaceOfBoard;
FaceOfBoard.insert(0,"bw");

int ReverseNum = 0;
int CountB = 0;
int CountW = 0;





  for(int i=0;i < GameRecord.size();++i){
    if(GameRecord[i] == 'L'){
      if(i%2 == 0){
       ReverseNum = FaceOfBoard.find("b");
        if(ReverseNum != string::npos){
        FaceOfBoard.replace(0,FaceOfBoard.find("b") + 1,FaceOfBoard.find("b") + 1,'b');
        }
        FaceOfBoard = "b" + FaceOfBoard;

      }else{
       ReverseNum = FaceOfBoard.find("w");
       if(ReverseNum != string::npos){
       FaceOfBoard.replace(0,FaceOfBoard.find("w") + 1,FaceOfBoard.find("w") + 1,'w');
        }
       FaceOfBoard = "w" + FaceOfBoard;
     }

  }else{
      if(i%2==0){
        ReverseNum = FaceOfBoard.find("b");
         if(ReverseNum != string::npos){
          FaceOfBoard.replace(FaceOfBoard.rfind("b") + 1,(FaceOfBoard.size() + 1) - (FaceOfBoard.rfind("b") + 1),FaceOfBoard.size() - (FaceOfBoard.rfind("b") + 1),'b');
        }
        FaceOfBoard = FaceOfBoard  + "b";
     }else{
       ReverseNum = FaceOfBoard.find("w");
         if(ReverseNum != string::npos){
         FaceOfBoard.replace(FaceOfBoard.rfind("w") + 1,(FaceOfBoard.size() + 1) - (FaceOfBoard.rfind("w") + 1),FaceOfBoard.size() - (FaceOfBoard.rfind("w") + 1),'w');
        }
        FaceOfBoard = FaceOfBoard + "w";
      }
    }
  }
  
  
  for(int i = 0;i < FaceOfBoard.size();++i)
  {
    if(FaceOfBoard[i] == 'b'){
      CountB += 1;
    }else
    {
      CountW += 1;
    }
  }
  cout << CountB << " " << CountW << endl;
  
}


