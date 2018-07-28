#include<iostream>
using namespace std;
// Still incomplete
int main(){
    int totalStreets,K;
    cin>>totalStreets;
    cin>>K;

    int totalProduct;
    int streetWeights[totalStreets];
    for(int i=0;i<totalStreets;i++){
        cin>>streetWeights[i];
    }
    totalProduct = streetWeights[0];
    int currStreet = 0;
    while(currStreet<totalStreets){
        int jump;
        if(jump)
        totalProduct*=streetWeights[currStreet];
    }
    // for(int i=0;i<totalStreets;i++){
    //     newWeight, oldWeight
    //     if(totalProduct*(streetWeights[i]+k
    //     streetWeights[i]+k
    // }
    return 0;
}