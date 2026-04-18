# Report 1 Page – FIT4012 Lab 1

## 1. Mục tiêu
Hiểu và cài đặt thành công các khái niệm cơ bản trong lý thuyết thông tin và mật mã học: tính toán Entropy (độ đo sự bất định của thông tin), Redundancy (độ dư thừa thông tin) của một chuỗi ký tự, và áp dụng thuật toán Euclid mở rộng để tìm nghịch đảo Modulo.

## 2. Cách làm
- Đọc hiểu chương trình entropy mẫu.
- Bổ sung hàm tính redundancy.
- Hoàn thiện hàm mod_inverse().
- Chạy thử trên nhiều test case.

## 3. Kết quả chính
### 3.1 Entropy và redundancy
| Input | Entropy | Redundancy | Nhận xét |
|---|---:|---:|---|
| aaaa | 0 |0%  |Chuỗi chỉ có 1 loại ký tự, hoàn toàn có thể dự đoán trước nên không mang thông tin mới.  |
| abcd | 2 |0%  | Các ký tự phân bố đều, lượng thông tin đạt tối đa ($H = H_{max}$), không có sự dư thừa. |
| hello world | 2.845 | 5.15% |Các ký tự xuất hiện không đều (ví dụ chữ 'l' lặp lại nhiều lần), dẫn đến có một tỷ lệ nhỏ thông tin dư thừa.  |

### 3.2 Modulo inverse
| a | m | Kết quả mong đợi | Kết quả chương trình |
|---:|---:|---|---|
| 3 | 7 | 5 | 5 |
| 10 | 17 | 12 | 12 |
| 6 | 9 | Không tồn tại |Không tồn tại  |

## 4. Kết luận
Qua bài lab này, em đã nắm vững cách đánh giá lượng thông tin của một dữ liệu thông qua Entropy và Redundancy, cũng như hiểu rõ cơ chế hoạt động của thuật toán Euclid mở rộng. Khó khăn lớn nhất là việc xử lý kết quả nghịch đảo modulo bị âm trong C++, nhưng đã được giải quyết triệt để bằng công thức `(x % m + m) % m`. Việc tự tay code lại các công thức toán học giúp em hiểu sâu hơn bản chất thay vì chỉ áp dụng lý thuyết.
