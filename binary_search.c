#include <stdio.h>

int main()
{
	int n;
	printf("Enter the value of n:");
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<=n; i++) {
		printf("Enter the value of arr[%d]",i);
		scanf("%d",&arr[i]);
	}
	printf("The given array is:");
	for(int i=0; i<=n; i++) {
		printf("%d ",arr[i]);
	}
	printf("\n");
	int target;
	printf("Enter element to search:");
	scanf("%d",&target);
	int low =0;
	int high =n;
	int found =0;
	int index;
	while(low<=high) {
		int mid= low+(high-low)/2;
		if(target==arr[mid]) {
			found=1;
			index=mid;
			break;
		}
		else if (target>arr[mid]) {
			low=mid+1;
		}
		else {
			high = mid-1;
		}
	}
	if(found==1) {
		printf("Element %d found at index %d",target,index);
	}
	else {
		printf("ELement not found");
	}



	return 0;
}