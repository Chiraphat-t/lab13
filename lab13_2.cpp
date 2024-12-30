#include <iostream>
#include <cmath>
using namespace std;

const int N = 30;
const int M = 70;

void updateImage(bool [][M],int,int,int);

void showImage(const bool [][M]);

int main()
{
    bool image[N][M] = {};
    int s,x,y;
    do{
        showImage(image);
        cout << "Input your brush size and location: ";
        cin >> s >> x >> y;
        updateImage(image,s,x,y);
    }while(s != 0 || x != 0 || y != 0);
    return 0;
}

void updateImage(bool m[][M],int s,int x,int y){
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            double z= sqrt(pow((i-x),2)+pow((j-y),2));
            if(z<=s-1){
                m[i][j]=1;
            }

        }
    }

}


void showImage(const bool m[][M]){

cout << "------------------------------------------------------------------------\n";

    for(int i=0;i<N;i++){
    
        for(int j=-1; j<=M ; j++){
            if(j==-1||j==M){
                cout << "|";
            }
            else if(m[i][j]==1){
                cout << "*";
            }
            else if(m[i][j]==0){
                cout << " ";
            }
        }
        cout << endl;
    }

cout << "------------------------------------------------------------------------";  
cout << endl;  
}

