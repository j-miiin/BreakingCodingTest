#include <iostream>

using namespace std;

int N;
int res = -1;

void dfs(int num, int kg) {
	if (kg > N)
		return;

	if (kg == N) {
		res = num;
		return;
	}
	
	dfs(num + 1, kg + 3); // 3kg ����
	dfs(num + 1, kg + 5); // 5kg ����	
}

int main() {
	cin >> N;

	dfs(0, 0);

	cout << res;

	return 0;
}