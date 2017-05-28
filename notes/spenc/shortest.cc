#include <bits/stdc++.h>

using namespace std;

// Incomplete

int main(){
	int N;
	cin >> N;
	vector< vector < int > > adjList;
	adjList.resize(N);
	int x;
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			cin >> x;
			if (x == 1){
				adjList[i].push_back(j);
			} 
		}
	}
	queue<pair< int, int > > q;
	q.push(make_pair(0, 0));
	while(!q.empty()){
		int u = q.front().first;
		int d = q.front().second;

		if(u == N-1){}
		q.pop();

		for (auto v : adjList[u]){
			if(!visited[v]){
				visited[v] = 1;

			}
		}
	}
}