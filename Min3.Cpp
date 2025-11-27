// DemFrom1to5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int a, n;
	cout << "Nhap n: " ;
    cin >> n;
    for(int i = 0; i<=n;i++)
    {
        if (i % 5 == 0)
        {
            cout << i <<"\n";
        }

	}
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve_stdin() {
    int N;

    // 1. Đọc số lượng người tham gia N từ bàn phím
    if (!(cin >> N)) {
        // Xử lý trường hợp nhập lỗi
        return;
    }

    // Khai báo vector để lưu trữ thời gian chạy
    vector<int> times;
    int time;

    // 2. Đọc N thời gian chạy từ bàn phím
    for (int i = 0; i < N; ++i) {
        if (cin >> time) {
            times.push_back(time);
        }
        else {
            // Trường hợp không đọc đủ N số
            break;
        }
    }

    // Kiểm tra đảm bảo có ít nhất 3 phần tử
    if (times.size() < 3) {
        cerr << "Dữ liệu nhập không đủ 3 số." << endl;
        return;
    }

    // 3. Sắp xếp toàn bộ vector theo thứ tự tăng dần
    sort(times.begin(), times.end());

    // 4. Xuất 3 phần tử nhỏ nhất (3 phần tử đầu tiên) ra màn hình (stdout)
    cout << times[0] << " " << times[1] << " " << times[2] << endl;
}

int main() {
    // Tăng tốc độ nhập xuất (IO) cho C++
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve_stdin();

    return 0;
}
