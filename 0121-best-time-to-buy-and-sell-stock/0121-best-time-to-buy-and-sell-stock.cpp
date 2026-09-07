class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int minPrice = INT_MAX;

        int Diff = 0;

        for(size_t i = 0; i< prices.size() ; i++ ){
            if( prices[i] < minPrice){
                minPrice = prices[i];
            }else{
                Diff = max(Diff ,  prices[i] - minPrice);
            }
        }
        return Diff;

        
    }
};