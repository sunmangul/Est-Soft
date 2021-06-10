int solution(int N)
{
  int n = 0, cnt = 0, ret = 0, f1 = 0;
  
  do {
    n = N % 2;
    N /= 2;
    
    if (n == 1) { f1++ }
    if (f1 == 1 && n == 0) { cnt++; }
    else if (f1 == 2){
      if(ret < cnt)
      {
        ret = cnt;
        cnt = 0;
        f1 = 1;
      }
      else
      {
        cnt = 0;
        f1 = 1;
      }
    }
  }while (N > 0);
  
  return ret;
}
