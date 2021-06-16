int solution(int X, int Y, int D) {
    int num = Y - X;                    //Y에서 X를 빼줌으로써
    int res = num/D;
    return num%D == 0? res : res + 1;
}
