#include <bits/stdc++.h>

int N, M;
//white : 1, black : 0
int chessBoard[50][50];


int solve(){
	int minCnt = 10000;
	int cntBlack = 0;
	int cntWhite = 0;
	bool isUpperLeftEndWhite;
	for(int i = 0; i < N-8+1; i++){
		for(int j = 0; j < M-8+1; j++){
			cntBlack = 0;
			cntWhite = 0;
			isUpperLeftEndWhite = chessBoard[i][j];
			for(int k = i; k < i+8; k++){
				for(int l = j; l < j+8; l++){
					if( ((l+k)%2) != ((i+j)%2) ){
						if(chessBoard[k][l] == chessBoard[i][j]){
							if(isUpperLeftEndWhite){
								cntWhite++;
							}else{
								cntBlack++;
							}
						}else{
							if(isUpperLeftEndWhite){
								cntBlack++;
							}else{
								cntWhite++;
							}
						}
					}else{
						if(chessBoard[k][l] != chessBoard[i][j]){
							if(isUpperLeftEndWhite){
								cntWhite++;
							}else{
								cntBlack++;
							}
						}else{
							if(isUpperLeftEndWhite){
								cntBlack++;
							}else{
								cntWhite++;
							}
						}
					}
				}
				
			}
			if(cntBlack < minCnt){
				minCnt = cntBlack;
			}
			if(cntWhite < minCnt){
				minCnt = cntWhite;
			}
		}
		
	}
	
	return minCnt;
}

int main(){
	std::cin >> N >> M;
	std::string a;
    for(int i = 0; i < N; i++){
    	std::cin >> a;
		for(int j = 0; j < M; j++){
            if(a[j] == 'W'){
				chessBoard[i][j] = 1;
			}
        }
    }
	
	std::cout << solve() << std::endl;
	
	// for(int k = 0; k < N; k++){
	// 	for(int l = 0; l < M; l++){
	// 		std::cout << chessBoard[k][l];
	// 	}
	// 	std::cout << std::endl;
	// }
	
}