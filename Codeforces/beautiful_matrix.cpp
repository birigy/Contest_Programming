#include <cstdio>
using namespace std;

int abs(int x){ return x < 0 ? -x : x; }

int main(){
    for(int i=0;i<5;i++) 
		for(int j=0;j<5;j++){
			int x; 
			scanf("%d",&x);
			if(x == 1){
				printf("%d\n",abs(i-2) + abs(j-2));
				return 0;
			}
		}
    return 0;
}
