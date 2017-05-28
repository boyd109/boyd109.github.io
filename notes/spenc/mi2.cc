#include <bits/stdc++.h>

char grid[25][25];
bool visited[25][25];

int N, M;

void dfs(int i, int j){
	if (i < 0 || i >= N || j < 0 || j >= M)
		return;
	if (grid[i][j] == '0')
		return;
	if (visited[i][j])
		return;
	visited[i][j] = 1;
	dfs(i-1, j);
	dfs(i+1, j);
	dfs(i, j-1);
	dfs(i, j+1);
}

int main (){
	int N, M;
	while (cin >> M >> N){
		if (N == -1)
			break;
		for (int i = 0; i < N; i++){
			string s;
			cin >> s;
			for (int j = 0; j < M; j++){
				grid[i][j] = s[j];
			}
		}
		int ans = 0;
		memset(visited, 0, sizeof visited);
		for (int i = 0; i < N; i++){
			for (int j = 0; j < M; j++){
				if(!visited[i][j] && grid[i][j] != '0'){
					dfs(i,j);
					ans++;
				}
			}
		}
	}
	cout << ans << endl;

}