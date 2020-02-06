#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<string, pair<int, int>>a,
			 pair<string, pair<int, int>> b) {
	if (a.second.first == b.second.second) {
		return a.second.second > b.second.second;
	}
	else {
		return a.second.second < b.second.second;
	}
}

int main(void) {
	/*
		정렬할 항목이 두 가지 이하이면
		VECTOR와 PAIR를 이용하고
		두 가지 이상이면
		CLASS를 정의해서 정렬하는게 효과적이다.
	*/
	vector<pair<string, pair<int, int> > > v;
	v.push_back(pair<string, pair<int, int>>("Kevin", pair<int, int>(90, 19961222)));
	v.push_back(pair<string, pair<int, int>>("Tommy", pair<int, int>(70, 19951011)));
	v.push_back(pair<string, pair<int, int>>("Hong", pair<int, int>(80, 19911111)));
	v.push_back(pair<string, pair<int, int>>("James", pair<int, int>(77, 19941130)));
	v.push_back(pair<string, pair<int, int>>("Johnson", pair<int, int>(68, 19900304)));

	sort(v.begin(), v.end(), compare);
	for (int i = 0; i < v.size(); i++) {
		cout << v[i].first << ' ';
	}
}