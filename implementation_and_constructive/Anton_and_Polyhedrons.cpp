#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int total_faces = 0;
    string inp;
    
    while (n--)
    {
        cin >> inp;
        
        if(inp=="Icosahedron"){
            total_faces+=20;
        }else if(inp=="Dodecahedron"){
            total_faces+=12;
        }else if(inp=="Octahedron"){
            total_faces+=8;
        }else if(inp=="Cube"){
            total_faces+=6;
        }else if(inp=="Tetrahedron"){
            total_faces+=4;
        }
    }

    cout << total_faces << endl;
    
    return 0;
}