#include<iostream>
using namespace std;

int main(){
    int row,column;
    cout<<"Enter the number of row and columns: "<<endl;
    cin>>row>>column;
    int matrix[10][20],matrx2[10][20],result[10][20];
    for (int i=0;i<row;i++){
        for (int j=0;j<column;j++){
            cout<<"Enter the elements of the first matrix: "<<endl;
            cin>>matrix[i][j];
        }
    }
    for (int i=0;i<row;i++){
        for (int j=0;j<column;j++){
            cout<<"Enter the elements of the second matrix: "<<endl;
            cin>>matrx2[i][j];
        }
    }
    for (int i=0;i<row;i++){
        for (int j=0;j<column;j++){
            result [i][j]=matrix[i][j]+matrx2[i][j];
        }
    }
    for (int i=0;i<row;i++){
        for (int j=0;j<column;j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
   
    return 0;
}
