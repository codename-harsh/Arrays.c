#include<stdio.h>
#include<string.h>
int main(){
int n; puts("Enter the number of cities : ");
scanf("%d",&n); char temp[20];
char city[n][20]; // iska matlab n rows hai yani n cities hai jinka max space 20 chars hai //
// input //
puts("Enter the cities : ");
for(int i =0; i < n; i++){
    scanf("%s",city[i]);
}
/*Abhi apne ko sorting krna hai using bubble sorting logi ofc cuz its easy peasy and we'll compare the first character of the city wo bhi uss character ka ascii code compare hoga hehe and one more logic strcmp = 0 if dono same hua , <0 if pehla pehle hi and dusra dusre number pe ho but >0 if pehla dusre pe and dusra pehle pe */
for(int i=0;i<n-1;i++){
for(int j=i+1;j<n;j++){
if(strcmp(city[i],city[j])>0){
strcpy(temp,city[i]); strcpy(city[i],city[j]); strcpy(city[j],temp);
            }
        }
    }
    puts("The sorted list of cities are as folows :");
    for(int i=0;i<n;i++){
        printf("%s \n",city[i]);
    }
    return 0;
}