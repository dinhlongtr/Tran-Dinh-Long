# 📚 ĐỀ BÀI THI LẬP TRÌNH

## 📌 Câu 3. Primes (2.5 điểm)

### I. Mô Tả Bài Toán

Lớp 9A tổ chức trò chơi nhỏ trong giờ sinh hoạt: Cô giáo chuẩn bị một danh sách số tự nhiên. Sau đó, cô giáo yêu cầu các bạn tìm xem trong các số đó, có bao nhiêu số nguyên tố (số chỉ chia hết cho 1 và chính nó).

> **Lưu ý:** 1 không phải là số nguyên tố.

Hãy giúp cô giáo đếm xem có bao nhiêu số nguyên tố trong danh sách các số mà cô giáo đã chuẩn bị.

### II. Dữ Liệu Vào (Tệp văn bản `Primes.inp`)

1.  **Dòng đầu tiên:** Chứa số nguyên **$n$** ($1 \le n \le 10^6$), số lượng số mà cô giáo đã chuẩn bị.
2.  **Dòng thứ hai:** Chứa $n$ số nguyên $A_0, A_1, ..., A_{n-1}$ ($1 \le A_i \le 10^6$, $0 \le i < n$), là danh sách các số.

### III. Dữ Liệu Ra (Tệp văn bản `Primes.out`)

* Một số nguyên duy nhất là **số lượng số nguyên tố** có trong danh sách.

### IV. Ví Dụ

| `Primes.inp` | `Primes.out` |
| :---: | :---: |
| 5 | 3 |
| 1 2 3 6 5 | |

**Giải thích:** Trong danh sách có 3 số nguyên tố là 2, 3, 5.

### V. Ràng Buộc (Subtasks)

| Subtask | Điều kiện $n$ | Điều kiện $A_i$ | Tỷ lệ điểm |
| :---: | :---: | :---: | :---: |
| **Subtask 1** | $1 \le n \le 5$ | $1 \le A_i \le 10$ | 30% |
| **Subtask 2** | $1 \le n \le 1000$ | $1 \le A_i \le 1000$ | 20% |
| **Subtask 3** | $1 \le n \le 10^6$ | $1 \le A_i \le 10^4$ | 30% |
| **Subtask 4** | $1 \le n \le 10^6$ | $1 \le A_i \le 10^6$ | 20% |
