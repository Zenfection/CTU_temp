# ![icons8-manager.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/17-20-04-53-icons8-manager.png) Quản lý tài khoản người dùng, ổ cứng và hệ thống tập tin ![EXPERT SYSTEM.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/17-20-05-27-EXPERT%20SYSTEM.png)

## 1. Cài đặt CentOS <img src="https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/17-20-13-14-icons8-centos.png" title="" alt="icons8-centos.png" width="40">

> <img src="https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/17-20-06-29-icons8-questions.png" title="" alt="icons8-questions.png" width="30"> **Câu 1.** Thực hiện cài đặt `CentOS 6` (*hoặc `CentOS 7`, `8`*) vào máy tính cá nhân (*hoặc máy ảo*) của bạn (*KHÔNG cần chụp màn hình minh hoạ*)

<details>
<summary><b><img src="https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/08-16-44-05-icons8-consultation.png" width ="40"> Giải</b></summary>

<br>

Link file ISO [CentOS 8](https://www.centos.org/download/)

</details>

---

## 2. Quản lí tài khoản <img src="https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/18-20-33-54-icons8-networking_manager.png" title="" alt="icons8-networking_manager.png" width="40">

Tìm hiểu và thực hiện các yêu cầu sau : 

> ![icons8-questions.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/17-20-14-01-icons8-questions.png) **Câu 2.1**. Sử dụng lệnh `adduser` và `passwd` để tạo một tài khoản mới với tên đăng nhập có dạng `masosinhvien` (*ví dụ: `B1909935`*)  (*Chụp màn hình minh hoạ*![icons8-screenshot.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/17-20-16-22-icons8-screenshot.png))
> 
> Quan sát để thấy rằng khi một tài khoản mới được tạo, thư mục cá nhân trong `/home` và nhóm cá nhân trong `/etc/group` ứng với tài khoản đó cũng được tạo theo.

<details>
<summary><b><img src="https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/08-16-44-05-icons8-consultation.png" width ="40"> Giải</b></summary>

<br>

- Sử dụng tài khoản `root` để tạo người dùng mới như sau : 

![8c66dc280146f318aa571.jpg](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/28-16-00-36-8c66dc280146f318aa571.jpg)

- Sử dụng lệnh `ls` hiển thị danh sách các file trong thư mục : 
  
  ![9a13345ce9321b6c42232.jpg](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/28-16-00-41-9a13345ce9321b6c42232.jpg)

- Sử dụng lệnh `cat` để xem nội dung bên trong file : 
  
  ![8c6c7d23a04d52130b5c4.jpg](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/28-16-00-34-8c6c7d23a04d52130b5c4.jpg)
  
  ![fd15315aec341e6a47253.jpg](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/28-16-29-14-fd15315aec341e6a47253.jpg)

</details>

> ![icons8-questions.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/17-20-14-01-icons8-questions.png) **Câu 2.2**. Mở file `/etc/shadow` và cho biết **mật khẩu** bạn vừa tạo cho tài khoản mới sử dụng giải thuật mã hoá nào ? Dựa vào đâu để biết điều đó ? (*Chụp màn hình minh hoạ*![icons8screenshotpng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/17-20-16-22-icons8-screenshot.png))

<details>
<summary><b><img src="https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/08-16-44-05-icons8-consultation.png" width ="40"> Giải</b></summary>

<br>

Sử dụng lệnh `cat` để xem nội dung bên trong file : 

![2a04a263790d8b53d21c.jpg](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/28-16-01-12-2a04a263790d8b53d21c.jpg)

![078991ee4a80b8dee191.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/28-16-32-01-078991ee4a80b8dee191.png)

==> ![icons8-centos.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/28-16-40-46-icons8-centos.png)`CentOS` sử dụng <img src="https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/28-16-40-55-sha512.png" title="" alt="sha512.png" width="30">`SHA512` để mã hoá mật khẩu, vì có ký hiệu `$6` trước dãy mật khẩu đã mã hoá 

</details>

> ![icons8questionspng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/17-20-14-01-icons8-questions.png) **Câu 2.3**. Thiết lập **ngày hết hạn** cho **tài khoản** ở `2.1` là ngày `31/12/2020` (*Chụp màn hình minh hoạ*![icons8screenshotpng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/17-20-16-22-icons8-screenshot.png))

<details>
<summary><b><img src="https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/08-16-44-05-icons8-consultation.png" width ="40"> Giải</b></summary>

<br>

Sử dụng `usermod -e` để đặt ngày hết hạn cho tài khoản và `chage -l` để hiển thị thông tin hết hạn tài khoản như sau : 

![f58088d2acbb5ee507aa.jpg](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/28-16-43-22-f58088d2acbb5ee507aa.jpg)

</details>

> ![icons8questionspng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/17-20-14-01-icons8-questions.png) **Câu 2.4**. Tạo một nhóm **người dùng** với tên nhóm là **mã lớp** của bạn. Thêm **tài khoản** ở `2.1` vào nhóm vừa tạo (*Chụp màn hình minh hoạ*![icons8screenshotpng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/17-20-16-22-icons8-screenshot.png))

<details>
<summary><b><img src="https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/08-16-44-05-icons8-consultation.png" width ="40"> Giải</b></summary>

<br>

Sử dụng  : 

- `groupadd <group>` : thêm nhóm người dùng
- `usermod -a -G <group> <user>`  : thêm người dùng vào nhóm
- `groups <user>` : Kiểm tra người dùng thuộc tất cả nhóm nào

![473b60074d6ebf30e67f.jpg](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/28-16-44-59-473b60074d6ebf30e67f.jpg) 

</details>

> ![icons8questionspng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/17-20-14-01-icons8-questions.png) **Câu 2.5**. Thực hiện khoá tài khoản ở `2.1`, sau đó đăng nhập thử và quan sát (*Chụp màn hình minh hoạ*![icons8screenshotpng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/17-20-16-22-icons8-screenshot.png))

Giải

> ![icons8questionspng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/17-20-14-01-icons8-questions.png) **Câu 2.6**. Mở khoá tài khoản ở `2.1` (*Chụp màn hình minh hoạ*![icons8screenshotpng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/17-20-16-22-icons8-screenshot.png))

Giải

---

## 3. Quyền root <img src="https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/18-20-40-22-icons8-rook.png" title="" alt="icons8-rook.png" width="40">

> ![icons8questionspng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/17-20-14-01-icons8-questions.png) **Câu 3.1**. Quyền `root` là gì > 

Giải

> ![icons8questionspng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/17-20-14-01-icons8-questions.png) **Câu 3.2**. Nêu các ưu điểm của việc dùng `sudo` so vời dùng `su` (*chuyển sang tài khoản `root`*)

Giải

> ![icons8questionspng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/17-20-14-01-icons8-questions.png) **Câu 3.3**. Mô tả các bước (*Chụp màn hình minh hoạ*![icons8screenshotpng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/17-20-16-22-icons8-screenshot.png)) để cấp quyền `sudo` cho tài khoản ở `2.1`. Sau đó cho một ví dụ để kiểm chứng xem tài khoản này đã thực sự được cấp quyền hay chưa (*Chụp màn hình minh hoạ*![icons8screenshotpng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/17-20-16-22-icons8-screenshot.png))

Giải

> ![icons8questionspng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/17-20-14-01-icons8-questions.png) **Câu 3.4**. Thu hồi quyền `root` của một tài khoản ở `2.1` (*Chụp màn hình minh hoạ*![icons8screenshotpng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/17-20-16-22-icons8-screenshot.png))

Giải

---

## 4. Đĩa và phân vùng ổ cứng <img src="https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/18-20-43-48-icons8-ssd.png" title="" alt="icons8-ssd.png" width="40">

> ![icons8questionspng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/17-20-14-01-icons8-questions.png) **Câu 4.1**. Thêm một ổ cứng vào máy ảo ![icons8-centos.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/18-20-45-54-icons8-centos.png) `CentOS`. Nếu đã cài ![icons8-centos.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/18-20-45-54-icons8-centos.png) `CentOS` trực tiếp vào máy tính cá nhân thì có thể sử dụng  1 ![icons8-usb_memory_stick.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/18-20-45-37-icons8-usb_memory_stick.png)`USB` để thay thế.

Giải

> ![icons8questionspng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/17-20-14-01-icons8-questions.png) **Câu 4.2**. Sử dụng lệnh `fdisk` và `mkfs` để tạo và **format** một phân vùng trên ổ cứng vừa mới thêm ở `4.1` (*Chụp màn hình minh hoạ*![icons8screenshotpng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/17-20-16-22-icons8-screenshot.png))

Giải

> ![icons8questionspng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/17-20-14-01-icons8-questions.png) **Câu 4.3**. Tạo thư mục mới có tên `/data` bằng tài khoản `root`. **Mount** phân vùng ổ cứng ở `4.2` tới thư mục `/data` (*Chụp màn hình minh hoạ*![icons8screenshotpng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/17-20-16-22-icons8-screenshot.png))

Giải

> ![icons8questionspng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/17-20-14-01-icons8-questions.png) **Câu 4.4**. Thực hiện lệnh `df -h` để xem kết quả (*Chụp màn hình minh hoạ*![icons8screenshotpng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/17-20-16-22-icons8-screenshot.png))

Giải

---

## 5. Phân quyền trên hệ thống tập tin <img src="https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/18-20-49-01-icons8-remove_key.png" title="" alt="icons8-remove_key.png" width="40">

> ![icons8questionspng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/17-20-14-01-icons8-questions.png) **Câu 5.1**. Tạo nhóm người dùng `quantri`, thêm người dùng ở `2.1` vào nhóm `quantri`

Giải

> ![icons8questionspng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/17-20-14-01-icons8-questions.png) **Câu 5.2**. Chuyển nhóm **chủ sỡ hữu** của thư mục `/data` sang `quantri`. Phân quyền cho thư mục `/data` là chủ sở hữu có toàn quyền `read`, `write` và `execute`, nhóm chủ sở hữu có quyền `read` và `execute`, những người khác không có quyền gì (*Chụp màn hình minh hoạ*![icons8screenshotpng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/17-20-16-22-icons8-screenshot.png))

Giải

> ![icons8questionspng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/17-20-14-01-icons8-questions.png) **Câu 5.3**. Dùng tài khoản `root` tạo tập tin `/data/file1.txt`. Sau đó dùng tài khoản ở `2.1` tạo tập tin `/data/file2.txt`. Quan sát và cho biết kết quả trong **2** trường hợp (*Chụp màn hình minh hoạ*![icons8screenshotpng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/17-20-16-22-icons8-screenshot.png))

Giải

> ![icons8questionspng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/17-20-14-01-icons8-questions.png) **Câu 5.4**. Dùng tài khoản `2.1` *mở* và *thay đổi* nội dung tập tin `/data/file1.txt`, cho biết kết quả (*Chụp màn hình minh hoạ*![icons8screenshotpng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/17-20-16-22-icons8-screenshot.png))

Giải

> ![icons8questionspng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/17-20-14-01-icons8-questions.png) **Câu 5.5**. cấp quyền cho tài khoản `2.1` có thể thay đổi nội dung tập tin `/data/file1.txt` (*Chụp màn hình minh hoạ*![icons8screenshotpng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/17-20-16-22-icons8-screenshot.png))

Giải

> ![icons8questionspng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/17-20-14-01-icons8-questions.png) **Câu 5.6**. Tạo thêm một tài khoản **mới**, dùng tài khoản này mở tập tin `/data/file1.txt`, cho biết quả kết quả (*Chụp màn hình minh hoạ*![icons8screenshotpng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/17-20-16-22-icons8-screenshot.png))

Giải
