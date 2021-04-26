# ![NETWORK.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/04/26-12-06-18-NETWORK.png) Cấu hình mạng và cài đặt `SSH`,`FTP`,`Web Server` ![Legacy System.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/04/26-12-07-38-Legacy%20System.png)

## <img src="https://raw.githubusercontent.com/Zenfection/Image/master/2021/04/11-13-29-34-icons8-centos.png" title="" alt="icons8-centos.png" width="40"> 1. Cài đặt CentOS

> ![icons8questionspng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/04/08-22-03-47-icons8-questions.png) **Câu 1.** Thực hiện cài đặt `CentOS 6` (*hoặc `CentOS 7`, `8`*) vào máy tính cá nhân (*hoặc máy ảo*) của bạn và thực hiện lệnh `ifconfig -a` để xem cấu hình mạng hiện tại của máy (*Chụp màn hình minh hoạ*![icons8screenshotpng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/17-20-16-22-icons8-screenshot.png))

Giải

---

## <img src="https://raw.githubusercontent.com/Zenfection/Image/master/2021/04/26-12-12-58-icons8-wired_network.png" title="" alt="icons8-wired_network.png" width="40">2.Cấu hình mạng

Một máy tính được kết nối tới mạng cần phải được thiết lập các thông số cho phù hợp. Các thông số này được lưu lại trong file cấu hình trong `Linux`. Thực hiện các công việc sau (*Chụp màn hình minh hoạ*![icons8screenshotpng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/17-20-16-22-icons8-screenshot.png))

> ![icons8questionspng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/04/08-22-03-47-icons8-questions.png) **Câu 2.1**: Đổi cấu hình `card mạng` của máy ảo sang `Bridged Adapter`
> 
> - Khắc phục lỗi `card mạng` chỉ hiển thị `"not selected"` + `"no bridged network adapter is current selected"`. 
>   
>   Click chuột phải vào `card mạng` của máy `Window 10` ⇨ chọn `"Open NetWork and Internet Settings"`  ⇨`"Change adapter options"` ⇨ Click chuột phải vào `card mạng` ⇨ `Properties` ⇨ Click chọn `Vitural NDIS6 Bridged Networking` ⇨ Chọn `"OK"`
>   
>   <img src="https://lh5.googleusercontent.com/fG-BULssU2BjjHpdtCNQ2CJMxp2LKr556uvdybQ7FK-XwSSLjfjuRakjMgRXNCsc3_L2fbgsxC7ZSsN3fQXu0m2GG1nWxKSSAxU89mUyLqHIbPdQzv5PdoJ0jdYN_Af9jSJ7T8i8" title="" alt="" width="332">

Giải

> ![icons8questionspng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/04/08-22-03-47-icons8-questions.png) **Câu 2.2**: Cầu hình kết nối `Ethernet` (*IP,net mask...*)
> 
> `nano /etc/sysconfig/network-scripts/ifcfg-XXX`
> 
> (*XXX là tên giao tiếp mạng, ví dụ: `eth0`*)
> 
> ```shell
> DEVICE=<tên card mạng>
> IPADDR=<địa chỉ IP>
> NETMASK=<mặt nạ mạng>
> GATEWAY=<địa chỉ của GATEWAY>
> DNS1=<địa chỉ DNS server 1>
> DNS2=<địa chỉ DNS server 2>
> ONBOOT=yes
> ```

Giải

> ![icons8questionspng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/04/08-22-03-47-icons8-questions.png) Câu **2.3**: Để khởi động lại dịch vụ mạng, thực hiện lệnh:
> 
> ```shell
> $ service network restart
> ```

Giải

> ![icons8questionspng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/04/08-22-03-47-icons8-questions.png) **Câu 2.4**: Để kiểm tra kết nối mạng, sử dụng lệnh:
> 
> ```shell
> ping <IP của máy vật lý>
> ping google.com
> ```

Giải

---

## <img src="https://raw.githubusercontent.com/Zenfection/Image/master/2021/04/26-12-25-51-icons8-network.png" title="" alt="icons8-network.png" width="40">3.Thông tin kết nối mạng

Thực hiện lệnh `ifconfig -a` (*Chụp màn hình minh hoạ*![icons8screenshotpng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/17-20-16-22-icons8-screenshot.png)), quan sát và tìm hiểu ý nghĩa các thông tin có trong kết quả trả về. Trả lời các câu hỏi 

> ![icons8questionspng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/04/08-22-03-47-icons8-questions.png) **Câu 3.1**: Địa chỉ `MAC`, địa chỉ `IP`, địa chỉ mạng, địa chỉ `boardcast` của kết nối `eth0`

Giải

> ![icons8questionspng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/04/08-22-03-47-icons8-questions.png) **Câu 3.2**: Nối kết `eth0` đã gửi và nhận bao nhiêu gói tin ? 

Giải

---

## <img src="https://raw.githubusercontent.com/Zenfection/Image/master/2021/04/26-12-27-59-icons8-ssh.png" title="" alt="icons8-ssh.png" width="40">4.Điều khiển từ xa với SSH

`SSH` (*Secure Shell*) là một giao thức mạng có **mã hoá** được dùng để thực hiện các giao dịch **an toàn** giữa `client` và `server` trên nền tảng **không an toàn**. Trong thực tế, người quản trị hệ thống thường điều khiển các `server Linux` từ xa thông qua kết nối `SSH`.

Có thể chọn một thiếp lập `SSH` trong hai lựa chọn sau:

- `Vitrual Machine` (*Máy ảo*) : là máy bị điều khiển. Máy này cần được cài `SSH Server` như `OpenSSH`, và chạy dịch vụ tương ứng ở cổng nào đó (*Thông thường là cổng `22`*) để **lắng nghe** các **yêu cầu kết nối**.

- `Physical Machine` (*Máy thật*) : Là máy ra lệnh điều khiển. Đối với `Linux` hệ thống có sẵn một lệnh `ssh` để thực hiện kết nối. Đối với `Windows`, ta cần cài thêm `SSH Client` như `PuTTY` hay `Mobaxterm`.

==> Thực hiện các yêu cầu sau : 

> ![icons8questionspng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/04/08-22-03-47-icons8-questions.png) **Câu 4.1** Cài đặt `SSH Server` trên **máy ảo**
> 
> Thiết lập mạng và ghi lại các địa chỉ `IP`. Đảm bảo rằng bạn có thể truy cập Internet từ máy ảo : 
> 
> ```shell
> $ yum install openssh-server # cài đặt openssh
> $ service sshd start         # chạy ssh server 
> $ service sshd status        # kiểm tra ssh server chạy chưa
> ```

Giải

> ![icons8questionspng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/04/08-22-03-47-icons8-questions.png) **Câu 4.2** Cài đặt `SSH Server` trên **máy vật lý**
> 
> - Nếu sử dụng ![icons8-windows8.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/04/26-12-36-59-icons8-windows8.png) `Window 10` : Cài đặt [**PuTTY**](https://putty.org/), nhập các thông số và thực hiện **kết nối**
> 
> - Nếu sử dụng ![icons8-linux.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/04/26-12-37-07-icons8-linux.png) `Linux` : 
>   
>   ```shell
>   $ ssh <username>@<serveraddress> # kết nối ssh server
>   ```
>   
>   ==> Sử dụng lệnh `ifconfig -a` để kiểm tra và quản sát.

Giải

---

## <img src="https://raw.githubusercontent.com/Zenfection/Image/master/2021/04/26-12-41-19-icons8-ftp.png" title="" alt="icons8-ftp.png" width="40"> 5. Cài đặt và cấu hình dịch vụ FTP

Thực hiện các yêu cầu sau kèm (*Chụp màn hình minh hoạ*![icons8screenshotpng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/17-20-16-22-icons8-screenshot.png))

> ![icons8questionspng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/04/08-22-03-47-icons8-questions.png) **Câu 5.1**: Cài đặt dịch vụ `FTP` trên máy `CentOS` bằng lệnh 
> 
> ```shell
> $ yum install vsftpd
> ```

Giải

> ![icons8questionspng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/04/08-22-03-47-icons8-questions.png) **Câu 5.2**: Thực hiện lệnh sau cho phép người dùng kết nối vào dịch vụ `FTP` : 
> 
> ```bash
> $ setsebool -P ftp_home_dir on
> ```

Giải

> ![icons8questionspng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/04/08-22-03-47-icons8-questions.png) **Câu 5.3**: Cấu hình dịch vụ `FTP` như sau : 
> 
> ```bash
> $ nano /etc/vsftpd/vsftpd.conf 
> $ anonymous_enable=NO
> $ local_enable=YES # đã được bật sẵn trong file cấu hình
> $ chroot_local_user=YES
> ```

Giải

> ![icons8questionspng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/04/08-22-03-47-icons8-questions.png) **Câu 5.4**: Khởi động lại dịch vụ `FTP` bằng lệnh sau : 
> 
> ```bash
> $ service vsftpd start
> ```

Giải

> ![icons8questionspng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/04/08-22-03-47-icons8-questions.png) **Câu 5.5**: Tắt tường lửa bằng lệnh như sau : 
> 
> ```bash
> $ service iptables stop
> ```

Giải

> ![icons8questionspng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/04/08-22-03-47-icons8-questions.png) **Câu 5.6**: Trên máy vật lý thực hiện tạo file `index.html` với nội dung sau : 
> 
> ```html
> <!doctype html>
> <html>
> <head>
>     <meta charset="utf-8">
>     <title>Tổng công ty bánh kẹo Lương Sơn Bạc</title>
> </head>
> 
> <body>
>     <H1>Welcome!<H1> 
>     <marquee>Designed by B1234567</marquee>
> </body>
> </html>
> ```

Giải

> ![icons8questionspng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/04/08-22-03-47-icons8-questions.png) **Câu 5.7**: Tải và thực thi một phần mềm `FTP client` (*Ví dụ:* <img src="https://raw.githubusercontent.com/Zenfection/Image/master/2021/04/26-12-49-19-icons8-filezilla.png" title="" alt="icons8-filezilla.png" width="30"> [FileZilla](https://filezilla-project.org/) hoặc <img src="https://raw.githubusercontent.com/Zenfection/Image/master/2021/04/26-12-49-39-WinSCP_Logo.png" title="" alt="WinSCP_Logo.png" width="30"> [WinSCP](https://winscp.net/eng/download.php) ) để kết nối đến dịch vụ `FTP` trên máy `CentOS`. Sau đó **upload file** `index.html` lên máy `CentOS`

Giải

---

## <img src="https://raw.githubusercontent.com/Zenfection/Image/master/2021/04/26-12-52-31-icons8-server.png" title="" alt="icons8-server.png" width="40"> 6. Cài đặt Apache web server

Một máy chủ `web` (*web server*) là một chương trình chờ đợi các yêu cầu truy cập tài nguyên từ một `web client` (*trình duyệt web*). Thông thường. nó sẽ lắng nghe ở cổng `80`, nhưng cũng có thể cổng **khác** (đó là lý do tại sao một số `URL` bao gồm số hiệu cổng). Để có thể sinh ra được các trang web với nội dung động, bạn cần có các chương trình hoặc các dịch vụ khác cài đặt vào máy chủ `web`. `Apache` là một trong những công nghệ máy chủ `web` phổ biến nhất, các tập tin cấu hình của `Apache` nằm trong thư mục `/etc/httpd/conf`.

Thực hiện các yêu cầu sau kèm (*Chụp màn hình minh hoạ*![icons8screenshotpng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/17-20-16-22-icons8-screenshot.png))

> ![icons8questionspng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/04/08-22-03-47-icons8-questions.png) **Câu 6.1**: Cài đặt `Apache web server`
> 
> ```bash
> $ yum install httpd     # cài đặt Apache
> $ service httpd start   # chạy Apache
> $ service iptables stop # tắt tường lửa
> ```
> 
> Trên **máy vật lý**, mở trình duyệt web và truy cập vào địa chỉ `http://<Địa chỉ IP CentOS>` để kiểm chứng trang web vừa tạo.

Giải

> ![icons8questionspng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/04/08-22-03-47-icons8-questions.png) **Câu 6.2**: Nếu bạn muốn tạo một trang `web` của riêng mình, đầu tiên bạn cần phải đặt chúng vào thư mục `/var/www/html`, đây là nơi chứa các tài nguyên máy do máy chủ `web` quản lý và cho phép `web client` truy cập vào. Tạo thư mục `/var/www/html/myweb`, sao chép file `index.html` ở câu `5.7` vào thư mục `/var/www/html/myweb`

Giải

> ![icons8questionspng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/04/08-22-03-47-icons8-questions.png) **Câu 6.3**: **Trên máy vật lý**, mở trình duyệt `web` và truy cập vào địa chỉ `http://<Địa chỉ IP máy CentOS>/myweb` để kiểm chứng trang web vừa tạo.

Giải

 
