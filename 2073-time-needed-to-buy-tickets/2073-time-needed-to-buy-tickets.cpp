class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int time = 0;
        while(tickets[k] > 0){
            for(int i = 0; i< tickets.size() ; ++i){
                if(tickets[i] > 0){
                --tickets[i];
                ++time;
            
            if( i ==k && tickets[k] == 0){
                return time;
            }
         }
      }
    }
    return time;
}
};
