//Largest element in array

int largest(int a[],int n){
int max=a[0];
for(int i=1;i<n;i++){
if(a[i]>max){
max=a[i];
}
}
return max;
}

//Time Complexity: O(n)
//Space Complexity: O(1)