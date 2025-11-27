## 📌 Câu 4. Pair (2.5 điểm)

### I. Mô Tả Bài Toán

Cho hai danh sách số nguyên **$A$** và **$B$** có số phần tử lần lượt là $n$ và $m$.

Với mỗi phần tử $B_k$ ($0 \le k < m$), bạn hãy **đếm số cặp số $(i, j)$** thỏa mãn điều kiện sau:

$$A_i - A_j \le B_k \quad (0 \le i < n, 0 \le j < n, i \ne j)$$

### II. Dữ Liệu Vào (Tệp văn bản `Pair.inp`)

1.  **Dòng đầu tiên:** Chứa hai số nguyên $n$ và $m$ ($1 \le n, m \le 5 \cdot 10^3$).
2.  **Dòng thứ hai:** Chứa $n$ số nguyên $A_0, A_1, ..., A_{n-1}$ ($0 \le A_i \le 10^9$, $0 \le i < n$).
3.  **Dòng thứ ba:** Chứa $m$ số nguyên $B_0, B_1, ..., B_{m-1}$ ($0 \le B_k \le 10^9$, $0 \le k < m$).

### III. Dữ Liệu Ra (Tệp văn bản `Pair.out`)

* Gồm $m$ dòng, mỗi dòng chứa số cặp $(i, j)$ thỏa mãn $A_i - A_j \le B_k$.

### IV. Ví Dụ 1

| `Pair.inp` | `Pair.out` |
| :---: | :---: |
| 3 1 <br> 2 5 9 <br> 4 | 2 |

### V. Ví Dụ 2

| `Pair.inp` | `Pair.out` |
| :---: | :---: |
| 5 2 <br> 1 5 2 6 9 <br> 3 10 | 8 <br> 0 |

### VI. Ràng Buộc (Subtasks)

| Subtask | Điều kiện $n$ | Điều kiện $m$ | Điều kiện mảng $A$ | Tỷ lệ điểm |
| :---: | :---: | :---: | :---: | :---: |
| **Subtask 1** | $1 \le n \le 100$ | $m = 1$ | **$A$ đã được sắp xếp tăng** | 20% |
| **Subtask 2** | $1 \le n \le 100$ | $m = 100$ | **$A$ đã được sắp xếp tăng** | 20% |
| **Subtask 3** | $1 \le n, m \le 10^3$ | | $A$ không có điều kiện | 30% |
| **Subtask 4** | $1 \le n, m \le 5 \cdot 10^3$ | | $A$ không có điều kiện | 30% |
