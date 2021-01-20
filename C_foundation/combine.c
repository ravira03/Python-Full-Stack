#include<stdio.h>
void print_array(int* arr,int n){
    int i;
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");
}
int sum_array(int* arr,int n){
    int i,sum=0;
    for(i=0;i<n;i++)
        sum+=arr[i];
    return sum;
}
void combination(int* ls,int* res,int id,int n,
                int* temp,int tid){
    int i;
    //print_array(temp,tid);
    if(tid!=0 && sum_array(temp,tid)%2==0)
        (*res)++;
    for(i=id;i<n;i++){
        temp[tid]=ls[i];
        combination(ls,res,i+1,n,temp,tid+1);
    }
}
int main(){
    int i,n,count=0;
    scanf("%d",&n);
    int arr[n],temp[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    combination(arr,&count,0,n,temp,0);
    printf("%d\n",count);
    return 0;
}