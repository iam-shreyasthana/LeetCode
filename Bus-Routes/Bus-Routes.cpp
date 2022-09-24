/*
    #815 Bus Routes
    https://leetcode.com/problems/bus-routes/
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numBusesToDestination(vector<vector<int>>& routes, int source, int target) {
        
        unordered_map<int, vector<int>> busMap;
        
        queue<int> route_queue;
        unordered_set<int> stop_visited;
        unordered_set<int> bus_visited;
        
        for(int i = 0; i < routes.size(); i++){
            
            vector<int> stops = routes[i];
            
            for(int j = 0; j < stops.size(); j++){
                int busStopNumber = routes[i][j];
                busMap[busStopNumber].push_back(i);
            }
            
        }
        
        route_queue.push(source);
        int level = 0;
            
        while(!route_queue.empty()){
            int queueSize = route_queue.size();
            for(int i = 0; i < queueSize; i++){
                
                int currBusStop = route_queue.front();
                route_queue.pop();
                
                if(currBusStop == target){
                    return level;
                }
                
                vector<int> buses = busMap[currBusStop];
                
                for(int bus: buses){
                    if(bus_visited.find(bus) == bus_visited.end()){
                        
                        for(int busStop : routes[bus]){
                            if(stop_visited.find(busStop) == stop_visited.end()){
                                stop_visited.insert(busStop);
                                route_queue.push(busStop);
                            }
                        }
                    }
                    
                    bus_visited.insert(bus);
                }
            }
            level++;   
        }    
        return -1;
    }
};