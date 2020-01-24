#include<cmath>
#include<cstdio>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

struct players {
    int score;
    string name;
};

bool compare(players a, players b) {
    if(a.score == b.score) return a.name<b.name;
    else return a.score>b.score;
}
int main()
{
    int n;
    cin >> n;
    vector< players > players;
    string name;
    int score;
    for(int i = 0; i < n; i++){
        cin >> name >> score;
        players player;
        player.name = name, player.score = score;
        players.push_back(player);
    }
    sort(players.begin(), players.end(), compare);
    for(int i = 0; i < players.size(); i++) {
        cout << players[i].name << " " << players[i].score << endl;
    }
    return 0;
}