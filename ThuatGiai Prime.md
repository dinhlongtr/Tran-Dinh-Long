# 💡 THUẬT GIẢI: PRIMES (Sàng Eratosthenes)

## I. Mục Tiêu

Đếm số lượng số nguyên tố trong một danh sách có $N$ phần tử, với giới hạn giá trị tối đa của phần tử là $M = 10^6$.

## II. Phương Pháp: Sàng Eratosthenes (Tiền xử lý) + Duyệt Danh Sách

Phương pháp này tối ưu nhất cho ràng buộc đã cho, với độ phức tạp tổng cộng là $O(M \log(\log M) + N)$.

### 1. ⚙️ Sàng Eratosthenes (Tiền xử lý)

Bước này xác định tất cả các số nguyên tố từ 2 đến $10^6$ và lưu kết quả vào một mảng boolean (gọi là `isPrime`).

* **1.1. Khởi tạo:** Khai báo hằng số $M = 10^6$ và một mảng `isPrime[0...M]`. Ban đầu, gán `isPrime[i] = TRUE` cho mọi $i \ge 2$.
    * Đặt `isPrime[0] = FALSE` và `isPrime[1] = FALSE$.
* **1.2. Lặp và Sàng:** Duyệt từ $p = 2$ cho đến khi $p^2 \le M$.
    * Nếu `isPrime[p]` là **TRUE** (tức $p$ là số nguyên tố):
        * Duyệt qua các bội số của $p$ (bắt đầu từ $p^2$) và đặt `isPrime[i] = FALSE`.
        * $i = p^2, p^2+p, p^2+2p, \dots$ cho đến khi $i \le M$.

### 2. 🔢 Duyệt Danh Sách và Đếm

* **2.1. Nhập liệu:**
    * Đọc số lượng phần tử $N$.
    * Khởi tạo biến đếm `count = 0`.
* **2.2. Đếm:** Lặp $N$ lần (duyệt qua từng số $A_i$):
    * Đọc số $X$ (là giá trị $A_i$).
    * **Kiểm tra:** Nếu $X \le M$ và `isPrime[X]` là **TRUE**:
        * Tăng `count` lên 1.
* **2.3. Xuất:** Ghi giá trị `count` ra đầu ra (`Primes.out`).

---

> **Độ phức tạp:**
> * Sàng: $O(M \log \log M)$
> * Đếm: $O(N)$
> * Tổng cộng: $O(M \log \log M + N)$
