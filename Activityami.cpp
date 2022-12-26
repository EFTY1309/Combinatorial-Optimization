#include<bits/stdc++.h>
using namespace std;
void printMaxActivities(int s[], int f[],string dscr[],int n)
{
int i, j;
int Count=1;



// The first activity always gets selected
i = 0;
//cout << dscr[i]<<"\n";
//printf("%s %d ",dscr[i] i);

// Consider rest of the activities
for (j = 1; j < n; j++) {
// If this activity has start time greater than or
// equal to the finish time of previously selected
// activity, then select it
if (s[j] > f[i]) {
//cout << dscr[j]<<"\n";
Count++;
i = j;
}
}
cout << "Maximum "<<Count <<" activities are possible\n";
printf("Following activities are selected\n");
i=0;
cout << dscr[i]<<"\n";
    for (j = 1; j < n; j++) {
// If this activity has start time greater than or
// equal to the finish time of previously selected
// activity, then select it
if (s[j] > f[i]) {
cout << dscr[j]<<"\n";
Count++;
i = j;
}
}
}

// Driver code
int main()
{
    cout << "Enter the number of activities: \n";
int n;
cin >>n;
cout << "Enter the description: \n";
int s[n],f[n];
string dscr[n];

for(int i=0;i<n;i++){
        cin >> dscr[i];
        cin >> s[i];
        cin >> f[i];

}

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(f[i]>f[j]){
                int temp=f[i];
                f[i]=f[j];
                f[j]=temp;

                temp=s[i];
                s[i]=s[j];
                s[j]=temp;

                string st=dscr[i];
                dscr[i]=dscr[j];
                dscr[j]=temp;
            }
        }
    }

// Function call
printMaxActivities(s, f,dscr, n);

    printf("\n");
}

