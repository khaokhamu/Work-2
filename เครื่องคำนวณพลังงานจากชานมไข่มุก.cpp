#include <bits/stdc++.h>
using namespace std;
// มีไข่มุก 3 เเบบ H คือ ไข่มุกน้ำผึ้ง O คือ ไข่มุกดั่งเดิม J คือ ไข่มุกเยลลี่ 
// ชามี 3 ประเภท มี rose tea (R) เเละ taiwan tea (T) เเละ Macha tea (M)
// ระดับความหวาน มี 3 ระดับ หวานน้อย (1) , ปานกลาง(2), หวานมาก (3)


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    map<char, vector<int>> mp;
    mp['H'] = {5};
    mp['O'] = {3};
    mp['J'] = {2};
    mp['R'] = {12, 18, 25};
    mp['T'] = {15, 20, 30};
    mp['M'] = {10, 15, 20};

    char boba, tea;
    int gram, sweet, cc;
    cin >> boba >> gram >> tea >> sweet >> cc;
    cout << 1LL*gram*mp[boba][0] + 1LL*cc*mp[tea][sweet-1] << '\n';
}
/*ข้อมูลเข้า 
   H 10
   T 2 20 
  ข้อมูลออก
  1050 กิโลเเคลลอรี่*/