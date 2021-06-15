int solution(vector<int> &A) {
    int temp = 0;

    for (int i = 0; i <= int(A.size()); i++)
    {
        temp = temp ^ A[i];
    }   

    return temp;
}