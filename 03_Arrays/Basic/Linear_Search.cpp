//Linear Search algorithm

int ls(int a[],int n,int k){
for(int i=0;i<n;i++){
if(a[i]==k){
return i;
}
else{
return -1;
}
}
}