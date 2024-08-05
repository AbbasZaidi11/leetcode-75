class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int m=flowerbed.size();
        
        if(m==1 && flowerbed[0]==1 && n!=0){return false;}
        if(m==1 && flowerbed[0]==0 && n<=1 ){return true;}
        else if(m==1 && flowerbed[0]==0 && n>1){return false;}
        for(int i{0};i<m;i++){
            if(n==0){break;}
            if(i==0 && i+1<m && flowerbed[i]==0 &&   flowerbed[i+1]==0){
                flowerbed[i]=1;
                n--;
            }
            else if(i==m-1 && i-1>=0 && flowerbed[i]==0 && flowerbed[i-1]==0){
                flowerbed[i]=1;
                n--;
            }else if(flowerbed[i]==0 && i-1>=0 && i+1<=m && flowerbed[i-1]==0 && flowerbed[i+1]==0){
                flowerbed[i]=1;
                n--;
            }

        }
        if(n==0){return true;}
        return false;
    }
};
