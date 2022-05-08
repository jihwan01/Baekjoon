#include <bits/stdc++.h>


int main(){
	int x,y,w,h;
	std::cin >> x >> y >> w >> h;
	
	int minDist = 1000;
	
	if(minDist > std::min(x, w-x)){
		minDist = std::min(x, w-x);
	}
	if(minDist > std::min(y, h-y)){
		minDist = std::min(y, h-y);
	}
	std::cout << minDist << std::endl;
	
	return 0;
}