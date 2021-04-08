# Sử dụng `Shell Scripting`, quản lí tiến trình, tập tin nhật ký hệ thống

## 1. Cài đặt CentOS

> ![icons8-questions.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/04/08-22-03-47-icons8-questions.png) **Câu 1.** Thực hiện cài đặt `CentOS 6` (*hoặc `CentOS 7`, `8`*) vào máy tính cá nhân (*hoặc máy ảo*) của bạn (*KHÔNG cần chụp màn hình minh hoạ*)

 Giải

Link file ISO [CentOS 8](https://www.centos.org/download/)

---

## 2. Quản trị với `shell scripting`

> ![icons8-questions.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/04/08-22-03-47-icons8-questions.png) **Câu 2.1**. Thực hiện các lệnh bên dưới và cho biết kết quả của chúng (*Chụp màn hình minh hoạ*![icons8screenshotpng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/17-20-16-22-icons8-screenshot.png))
> 
> ```shell
> $ hostname
> $ hostname -I
> $ whoami
> $ df -H
> $ ps -eo pid,%mem,%cpu,comm --sort -rss
> ```

Giải

> ![icons8-questions.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/04/08-22-03-47-icons8-questions.png) **Câu 2.2**. Viết `shell script` có tên `info.sh` thực hiện tất cả lệnh ở `2.1` (*Chụp màn hình minh hoạ*![icons8screenshotpng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/17-20-16-22-icons8-screenshot.png))

Giải

> ![icons8-questions.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/04/08-22-03-47-icons8-questions.png) **Câu 2.3**. Viết `shell script` có tên `backup.sh` thực hiện :
> 
> - In ra ngày giờ hiện tại
> 
> - Nén toàn bộ thư mục `/home` thành tập tin `/tmp/<YYYY-MM-DD>.tar` (*YYYY-MM-DD* là ngày hiện tại, ví dụ : 2020-04-22.tar)
> 
> - In thông tin đầy đủ của tập tin `/tpmn/<YYYY-MM-DD>.tar`
> 
> - In ra thông tin thông báo `"Sao lưu thành công!!!!"`
> 
> - Thực thi `backup.sh` để kiểm tra (*Chụp màn hình minh hoạ*![icons8screenshotpng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/17-20-16-22-icons8-screenshot.png))

---

## 3. Lên lịch công việc định kỳ với `cron`

`Cron` là một tiện ích trong `Linux` cho phép máy tính thiết lập thời gian biểu để thực hiện công việc một cách định kỳ. Một **file**  `crontab` chứa danh sách các lệnh sẽ được thực thi, kèm theo thông tin về thời điểm lặp lại việc thực thi. Để hiệu chỉnh **file** `crontab` với trình soạn thảo `nano`, ta dùng lệnh sau : 

```shell
$ export EDITOR=nano
$ crontab -e
```

 Cho biết cú pháp để thực hiện các yêu cầu từ **file** `crontab` : 

> ![icons8-questions.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/04/08-22-03-47-icons8-questions.png) **Câu 3.1**. Chạy lệnh `date` mỗi phút một lần, sau đó khi kết quả vào cuối tập tin `/tmp/date.txt` (*Chụp màn hình minh hoạ*![icons8screenshotpng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/17-20-16-22-icons8-screenshot.png))

Giải

> ![icons8-questions.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/04/08-22-03-47-icons8-questions.png) **Câu 3.2**. Thực thi `backup.sh` ở `2.3` vào `23:00 giờ ngày 10,20 và 30` **hằng tháng** (*Chụp màn hình minh hoạ*![icons8screenshotpng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/17-20-16-22-icons8-screenshot.png))

Giải

---

## 4. Thao tác với tiến trình

Tìm hiểu và thực hiện các yêu cầu sau : 

> ![icons8-questions.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/04/08-22-03-47-icons8-questions.png) **Câu 4.1**. Mở trình duyệt `Firefox`. Sau đó dùng lệnh `ps -aux` *hoặc* `pgrep` tìm **PID** của `Firefox`. 
> 
> Tiếp theo, dùng lệnh `kill` để tạm dừng tiến trình `Firefox` (*Chụp màn hình minh hoạ*![icons8screenshotpng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/17-20-16-22-icons8-screenshot.png)). Điều gì xảy ra khi bạn dịch chuyển cửa sổ `Firefox` *hoặc* nhấn chọn **menu** của nó ngay lúc này ?

Giải

> ![icons8-questions.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/04/08-22-03-47-icons8-questions.png) **Câu 4.2**. Dùng lệnh `kill` để phục hồi trạng thái trước đó của `Firefox` và quan sát kết quả (*Chụp màn hình minh hoạ*![icons8screenshotpng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/17-20-16-22-icons8-screenshot.png))

Giải

> ![icons8-questions.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/04/08-22-03-47-icons8-questions.png) **Câu 4.3**. Dùng lệnh `kill` để huỷ tiến trình `Firefox` (*Chụp màn hình minh hoạ*![icons8screenshotpng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/17-20-16-22-icons8-screenshot.png))

Giải

---

## 5. Tập tin log

Tìm hiểu và thực hiện yê cầu sau : 

> ![icons8-questions.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/04/08-22-03-47-icons8-questions.png) **Câu 5.1**. Tìm thông tin về người dùng, thời gian của lần **đăng nhập** sau cùng vào **hệ thống** (*Chụp màn hình minh hoạ*![icons8screenshotpng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/17-20-16-22-icons8-screenshot.png))

Giải

> ![icons8-questions.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/04/08-22-03-47-icons8-questions.png) **Câu 5.2**. Tạo một người dùng mới

Giải

> ![icons8-questions.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/04/08-22-03-47-icons8-questions.png) **Câu 5.3**. Tìm **thời gian** người dùng ở `5.2` được tạo ra (*Chụp màn hình minh hoạ*![icons8screenshotpng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/17-20-16-22-icons8-screenshot.png))

Giải


