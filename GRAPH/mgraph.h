//
//  mgraph.h
//  GRAPH
//
//  Created by PRO on 2018-03-25.
//  Copyright © 2018 AIR. All rights reserved.
//

#ifndef mgraph_h
#define mgraph_h

#define maxv 10

using namespace std;

typedef struct MGrahp{
    char vertexes[maxv];
    int edges[maxv][maxv];
    int num_ver;
    int num_edg;
}mgraph;

bool visited[maxv];

void initial(mgraph &g){
    
    g.num_ver = 0;
    g.num_edg = 0;
    for(int i = 0;i < maxv; i ++){
        g.vertexes[i] = ' ';
    }
    for(int i = 0;i < maxv; i ++){
        for(int j = 0; j < maxv; j ++){
            g.edges[i][j] = 0;
        }
    }
}

int locate(mgraph g,char c){
    for(int i = 0;i < g.num_ver;i ++){
        if(g.vertexes[i] == c)
            return i;
    }
    return -1;
}


void creare(mgraph &g){
   
    cout<<"num of vertexes"<<endl;
    cin>>g.num_ver;
    cout<<"num of edges"<<endl;
    cin>>g.num_edg;
    cout<<"vertexes"<<endl;
    for(int i = 0;i < g.num_ver;i ++){
        cin>>g.vertexes[i];
    }
    cout<<"edges"<<endl;
    for(int i = 0;i < g.num_edg;i ++){
        char ver1,ver2;
        int locate1,locate2,weight;
        cin>>ver1;
        cin>>ver2;
        cin>>weight;
        locate1 = locate(g, ver1);
        locate2 = locate(g, ver2);
        g.edges[locate1][locate2] = weight;
    }
}

void print(mgraph g){
    cout<<"  ";
    for(int i = 0;i < g.num_ver;i ++){
        cout<<g.vertexes[i]<<" ";
    }
    cout <<endl;
    
    for(int i = 0;i < g.num_ver;i ++){
        cout<<g.vertexes[i]<<" ";
        for(int j = 0;j < g.num_ver;j ++){
            cout<<g.edges[i][j]<<" ";
        }
        cout<<endl;
    }
}


void auto_create(mgraph &g){
    g.num_ver = 8;
    g.num_edg = 9;
    
    g.vertexes[0] = 'r';
    g.vertexes[1] = 's';
    g.vertexes[2] = 't';
    g.vertexes[3] = 'u';
    g.vertexes[4] = 'v';
    g.vertexes[5] = 'w';
    g.vertexes[6] = 'x';
    g.vertexes[7] = 'y';
    g.edges[0][1] = 1;
    g.edges[1][0] = 1;
    g.edges[0][4] = 1;
    g.edges[4][0] = 1;
    g.edges[1][5] = 1;
    g.edges[5][1] = 1;
    g.edges[2][5] = 1;
    g.edges[5][2] = 1;
    g.edges[2][6] = 1;
    g.edges[6][2] = 1;
    g.edges[5][6] = 1;
    g.edges[6][5] = 1;
    g.edges[2][3] = 1;
    g.edges[3][2] = 1;
    g.edges[3][6] = 1;
    g.edges[6][3] = 1;
    g.edges[6][7] = 1;
    g.edges[7][6] = 1;
    g.edges[3][7] = 1;
    g.edges[7][3] = 1;
}

#endif /* mgraph_h */

