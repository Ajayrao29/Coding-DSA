//Second Largest element in array

int seclargestelement(int a[],int n){
int largest=-1;
int seclargest =-1;
for(int i=0;i<n;i++){
if(a[i]>largest){
seclargest=largest;
largest=a[i];
}
else if(a[i]<largest && a[i]>seclargest){
seclargest=a[i];
}
}
return seclargest;
}

//Time Complexity: O(n)
//Space Complexity: O(1)