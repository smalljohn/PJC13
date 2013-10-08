
int main(){
	int width, height, hLine, vLine, lWidth, i, j;
	char c1, c2;
	printf ("Zadej sirku: ");
	scanf("%d", &width);
	getchar();

	printf ("Zadej prvni znak: ");
	scanf("%c", &c1);
	getchar();

	printf ("Zadej druhy znak: ");
	scanf("%c", &c2);
	getchar();

	height = width * 2 / 3;
	hLine = height / 2;
	vLine = width / 4;
	lWidth = width / 10;

	for(i = 0; i < height; i++){
		for(j = 0; j < width; j++){
			if((i >= (hLine - lWidth/2) && i <= (hLine + lWidth/2)) || (j >= (vLine - lWidth/2) && j <= (vLine + lWidth/2))){
				putchar(c1);
			}else{
				putchar(c2);
			}
		
		}
		printf("\n");
	}
	getchar();
	getchar();
}