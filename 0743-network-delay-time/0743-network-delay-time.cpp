class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int,int>>>adj(n+1);
        for(auto it:times){
            adj[it[0]].push_back({it[1],it[2]});
        }
        vector<int>dist(n+1,INT_MAX);
        dist[k]=0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({0,k});
        while(!pq.empty()){
            auto [dis,node]=pq.top();
            pq.pop();
           for(auto [x,y]:adj[node]){
              if(dis+y<dist[x]){
                 dist[x]=dis+y;
                 pq.push({dist[x],x});
              }
           }
        }
        int maxi=0;
        for(int i=1;i<dist.size();i++){
            if(dist[i]==INT_MAX) return -1;
           maxi=max(maxi,dist[i]);
        }
        return maxi;
    }
};