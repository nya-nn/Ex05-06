// Ex05-06.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
using namespace std;
#include"getVolumeSurface.h"

int main()
{
    const int BoxCount = 3;
    BOX boxes[BoxCount];
    bool sendable;
    for (int i = 0; i < BoxCount; i++) {
        cout << "幅を入力:";
        cin >> boxes[i].x;
        cout << "高さを入力:";
        cin >> boxes[i].y;
        cout << "奥行きを入力:";
        cin >> boxes[i].z;

        getVolumeSurface(&boxes[i]);
        cout << "体積は" << boxes[i].volume << endl;
        cout << "表面積は" << boxes[i].surface << endl;

        sendable=isSendable(&boxes[i]);
        if (sendable) {
            cout << boxes[i].packSize << "サイズで送ることができます"<<endl;
        }
        else {
            cout << "宅急便では送ることができません"<<endl;
        }
    }
    int e;
    return 0;
}
