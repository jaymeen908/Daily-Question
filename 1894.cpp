class solution {
    public:
    int chalkReplacer(vector<int> &chalk, int k ){
        int n = chalk.size();
        long long totalChalkSum = 0;

        for(int &chalkReq : chalk){ // total chalk require in one interation
            totalChalkSum += chalkReq; //O(n)
        }

        int remainChalk = k%totalChalkSum;

        //number of full interation are possible = k/totalChalkSum

        for(int i = 0; i < n; i++){
            if(remainChalk < chalk[i]){
                return i;

            }
            remainChalk -= chalk[i];

        }
        return -1;
    }
};