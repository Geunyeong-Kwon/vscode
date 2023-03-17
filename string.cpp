#include<iostream>
#include<string>
using namespace std;

int main(){
    string movie("Top Gun"); // string movie == "Top Gun"
    string answer("Tom Cruise"); // string answer == "Tom Cruise"
    string input; 

    cout << movie + "의 주인공은?"; //+로 문자열 연결
    cout << "(힌트 : 첫글자는 " << answer[0] << ")? "; //answer.at(0) 해도 됨

    getline(cin,input); //string 타입의 문자열 입력 받기 위해 제공되는 전역함수

    if(input == answer) //string은 char 배열과는 달리 이퀄기호 이용해서 비교 가능
    cout << "맞았습니다.";
    else
    cout << "틀렸습니다. " + answer + "입니다." << endl;
     
    return 0;
}