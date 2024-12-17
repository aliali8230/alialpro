#include <iostream>
using namespace std; 

int main(){
  int bangun=1;
  while(bangun==1 || bangun==2 || bangun==3 || bangun==4){
  cout << "pilih bangun datar yang ingin digambar\n";
  cout << "1. persegi berongga\n"; 
  cout << "2. persegi penuh\n"; 
  cout << "3. segitiga sama kaki\n";
  cout << "4. belah ketupat\n"; 
  cout << "5. keluar\n"; 
  cout << "masukan pilihan (1/2/3/4/5) : "; cin >> bangun;
  if (bangun==1) { 
   int p;
cout<<"sisi : ";cin>>p;
for (int i=1; i<=p; i++){
  for(int j=1; j<=p; j++){
    if(i==1 || i==p || j==1 || j==p){
      cout<<"*";
    } else cout<<" ";
  } 
  cout<<endl;
}}
else if (bangun==2) { 
    int sisidalam,sisiluar,n; 
    cout << "masukan ukuran (tinggi/sisi) : ";  cin>> n;
 for ( sisiluar=1;sisiluar<=n;sisiluar++){
  for (sisidalam =1;sisidalam<=n;sisidalam++) {
    cout << "*";
  }
  cout <<endl;
 } }
 else if (bangun==3) {
  int t; cout << "masukan ukuran (tinggi/sisi) : "; 
cin>>t;
for(int i=1; i<=t; i++){
  for(int j=1; j<=t-i; j++){
    cout<<" ";
  }
  for(int k=1; k<=i; k++){
    cout<<"* ";
  }
  cout<<endl;
}
 }
 else if (bangun==4) {
  int t; cout << "masukan ukuran (tinggi/sisi ) : ";
cin>>t;
for(int i=1; i<=t; i++){
  for(int j=1; j<=t-i; j++){
    cout<<" ";
  }
  for(int k=1; k<=i; k++){
    cout<<"* ";
  }
  cout<<endl;
}
for(int i=1; i<=t; i++){
  for(int j=1; j<=i; j++){
    cout<<" ";
  }
  for(int k=0; k<t-i; k++){
    cout<<"* ";
  }
  cout<<endl;
}
}
else cout<<"keluar program";
  }
}