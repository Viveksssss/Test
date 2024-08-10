#include<bits/stdc++.h>
using namespace std;
void InsertSort(std::vector<int>&array,int n){
    int i , j , temp;
    for(i=1;i<n;i++){
        if(array[i]<array[i-1]){
            temp = array[i];
            for(j = i-1;j>=0&&array[j]>temp;j--){
                array[j+1] = array[j];
            }
            array[j+1] = temp;
        }
    }//0 1 2 3 4 
}


int main(){

        int n;
        cin >> n;
        std::vector<int>vec(n);
        for(int i = 0;i<n;i++){
               cin >> vec[i];
        }

        InsertSort(vec,n);

        for(auto p :vec){
                cout << p<<" ";
        }
        return 0;
}
