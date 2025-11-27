# 📚 ĐỀ BÀI THI LẬP TRÌNH: MIN3

## I. 📝 Mô Tả Bài Toán

Có **$N$** bạn đã tham gia cuộc thi chạy. Thời gian chạy của tất cả các bạn được tổng hợp trong một danh sách.

> **Lưu ý:** Không có 2 bạn nào có thời gian chạy giống nhau.

Nhiệm vụ là chọn ra **3 bạn có thời gian chạy nhỏ nhất** để trao giải.

---

## II. 📥 Dữ Liệu Vào (Tệp: `Min3.inp`)

Dữ liệu đầu vào gồm hai dòng:

1.  **Dòng 1:** Chứa một số nguyên **$N$** (số lượng người tham gia).
    * Ràng buộc: $3 \le N \le 10^5$.
2.  **Dòng 2:** Chứa **$N$** số nguyên $A_0, A_1, ..., A_{N-1}$ (thời gian chạy).
    * Ràng buộc: $1 \le A_i \le 10^4$.

---

## III. 📤 Dữ Liệu Ra (Tệp: `Min3.out`)

Xuất ra **ba số nhỏ nhất** trong danh sách, theo **thứ tự thời gian chạy tăng dần**, mỗi số cách nhau bởi một dấu cách.

---

## IV. ✨ Ví Dụ Minh Họa

| Tệp | Nội dung |
| :---: | :---: |
| **Min3.inp** | 5 <br> 150 120 180 170 90 |
| **Min3.out** | 90 120 150 |

---

## V. ⚙️ Ràng Buộc (Subtasks)

| Subtask | Điều kiện $N$ | Tỷ lệ điểm |
| :---: | :---: | :---: |
| **Subtask 1** | $3 \le N \le 5$ | 50% |
| **Subtask 2** | $3 \le N \le 10^5$ | 50% |
