#include <iostream>
#include <cmath>
using namespace std;
string pass="aA090";//suppose that this is vicitim password
string AllPossibleCharacters="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
                             "1234567890";
void BruteForce(string Selection,int length,bool found=false){
    cout<<Selection<<endl;
    if(Selection==pass){
        cout<<"Password Found:"<<Selection<<endl;
        found = true;
        return;
    }
    if((int)Selection.size() == length)
        return;
    for(int i=0;i<(int)AllPossibleCharacters.size();i++){
        if(found)
            return;
        BruteForce(Selection+AllPossibleCharacters[i],length,found);
    }
}

int main(){
    BruteForce("",5);
    return 0;
}
