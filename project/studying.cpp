#include <iostream>
#include <time.h>
#include <limits.h>
using namespace std;
int main()
{
  srand((unsigned int)time(0));
  int num[25]={};
  for(int i=0; i<24; ++i)
  {
    num[i]=i+1;
  }

  //가장 마지막 칸은 공백으로 비워줌.
  //공백을 의미하는 값으로 특수한 값을 사용할건데 INT_MAX라는 값을 사용할것이다. 이것은 이미 정의되어있는 값으로 int로 표현할 수 있는 최대값이다
  num[24] = INT_MAX;

  //마지막 공백을 제외하고 1~24까지의 숫자만 서ㅕㄲ어준다. 즉 인덱스는 0~23번인덱스 까지만 섞어준다.

  int a,b,c;
  for(int i=0; i<100; ++i)
  {
    b=rand()%24;
    c=rand()%24;

    a=num[b];
    num[b]=num[c];
    num[c]=a;
  }

  //i for문이 세로줄을 의미
  for(int i=0; i<5; ++i)
  {
    //j for문이 가로줄을 의미
    for(int j=0; j<5; ++j)
    {
      //줄번호 * 가로개수 +칸번호
      if(num[i*5+i]==INT_MAX)
        cout<<"*\t";
      else
        cout<<num[i*5+j]<<"\t";
    }
    cout<<endl;
  }
  
  return 0;
}
//19.04
