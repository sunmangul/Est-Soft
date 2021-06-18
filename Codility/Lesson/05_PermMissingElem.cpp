int solution(vector<int> &A) {
    long int num = A.size() + 1;
    long int tot = num * (num + 1) / 2;
    long int res = 0;

    for(int i : A)
    {
        res += i;
    }

    res = tot - res;

    return res;
}
