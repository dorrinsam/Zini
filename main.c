#include <stdio.h>
#include <stdlib.h>

int main()
{
int m, n, i, j, count = 0;
scanf("%d%d", &m, &n);

int a[m][n];

for(i = 0; i < m; i++){
       for( j = 0; j < n; j++){
             scanf("%d", &a[i][j]);
					  }
                  }
for(i = 1; i < m - 1; i++){
       for(j = 1; j < n - 1; j++){

	if((a[i][j] > a[i][j + 1] && a[i][j] > a[i][j - 1] && a[i][j] < a[i + 1][j]  && a[i][j] < a[i - 1][j]) || (a[i][j] < a[i][j + 1] && a[i][j] < a[i][j - 1] && a[i][j] > a[i + 1][j]  && a[i][j] > a[i - 1][j])){
		      count++;
              }
       }
}

					printf("%d", count);
return 0;
}
