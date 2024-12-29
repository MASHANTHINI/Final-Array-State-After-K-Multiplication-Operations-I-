class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        priority_queue<pair<int,int> , vector<pair<int,int>>, greater<pair<int,int>> > q;
        for(int i=0;i<nums.size();i++){
            q.push(make_pair(nums[i],i));
        }
        for(int i=0;i<k;i++){
            auto a=q.top();
            q.pop();
            q.push(make_pair(a.first*multiplier,a.second));
        }
        while(!q.empty()){
            auto a=q.top();
            q.pop();
            nums[a.second]=a.first;
        }
        return nums;
    }
};
