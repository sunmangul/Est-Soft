vector<int> solution(vector<int> &A, int K) {
    if(A.size() == 0)
    {
        return A;
    }

    while(K)
    {
        int temp = A.back();
        A.pop_back();
        A.insert(A.begin, temp);
    }
    return A;
}