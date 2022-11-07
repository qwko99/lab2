#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<string, pair<int, int>> m;
    int student, mid, end;
    string name;

    cout << "학생 수를 입력해주세요 : ";
    scanf("%d", &student);

    for (int i = 0; i < student; i++)
    {
        printf("이름을 입력해주세요! : ");
        cin >> name;
        cout << "중간과 기말을 입력해주세요! : ";
        scanf("%d %d", &mid, &end);
        m.insert(pair(name, pair(mid, end)));
    }

    for (auto iter : m)
    {
        cout << " 이름 : " << iter.first << " 중간성적 : " << iter.second.first << " 기말성적 : " << iter.second.second << endl;
    }
}
