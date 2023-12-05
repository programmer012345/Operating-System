
#include <stdio.h>

int size = 8;

void FCFS(int arr[], int head)
{
	int i = 0;
	int seek_count = 0;
	int distance, cur_track;

	for (i = 0; i < size; i++) {
		cur_track = arr[i];
		distance = abs(cur_track - head);
		seek_count += distance;
		head = cur_track;
	}
	
	printf("Total number of seek operations = %d\n",seek_count);


	printf("Seek Sequence is ");

	for (i = 0; i < size; i++) {
		printf("%d ",arr[i]);
	}
	printf("\n");
}
int main()
{


	int arr[] = { 30,85,90,100,105,110,135,145 };
	int head = 95;

	FCFS(arr, head);

	return 0;
}

