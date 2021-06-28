int solution(vector<int> &A) {
    int N = A.size();

    if(N==2) return abs(A[0]-A[1]);
    if(N==1) return abs(A[0]);

    long long Sum = 0;
    long long LeftSum = 0;
    long long RightSum = 0;
    long long temp = 0;
    long long d;


    for (int i = 0; i < N; i++){
        Sum += (long long) A[i];
        }
    for (int i = 0; i < N - 1; i++){
        LeftSum += (long long) A[i];
        RightSum = Sum - LeftSum;
        d = abs(RightSum - LeftSum);

        if (!(i)){
            temp = d;
            }
        else{
              if (d <= temp) temp = d;
            }
        }

    return temp;
}
