# ![Executive Male.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/05-19-06-19-Executive%20Male.png) Buổi thực hành 1 - Lập trình OOP ![Executive Female.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/05-19-07-40-Executive%20Female.png)

> ![icons8-questions.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/05-12-38-09-icons8-questions.png) **Bài 1:** Cài đặt lớp **Diem** (Điểm trong không gian 2 chiều) gồm: 
> 
> | ![icons8-package.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/05-23-20-42-icons8-package.png) Thuộc tính | ![icons8-data_quality.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/08-11-40-34-icons8-data_quality.png) Kiểu dữ liệu |
> | ---------------------------------------------------------------------------------------------------------------------------------- | ---------------------------------------------------------------------------------------------------------------------------------------------- |
> | x                                                                                                                                  | int                                                                                                                                            |
> | y                                                                                                                                  | int                                                                                                                                            |
> 
> | ![icons8-construction.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/08-11-36-40-icons8-construction.png) Hàm xây dựng | ![icons8-autograph.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/08-11-39-35-icons8-autograph.png) Tên hàm |
> | ---------------------------------------------------------------------------------------------------------------------------------------------- | ----------------------------------------------------------------------------------------------------------------------------------- |
> | + Hàm xây dựng mặc nhiên                                                                                                                       | `Diem()`                                                                                                                            |
> | + Hàm xây dựng có 2 tham số                                                                                                                    | `Diem(int,int)`                                                                                                                     |
> 
> | ![icons8-webhook.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/08-11-35-44-icons8-webhook.png) Phương thức | ![icons8-autograph.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/08-11-39-35-icons8-autograph.png) Tên Hàm |
> | ----------------------------------------------------------------------------------------------------------------------------------- | ----------------------------------------------------------------------------------------------------------------------------------- |
> | + Nhập toạ độ cho điểm từ bàn phím                                                                                                  | `void nhapDiem()`                                                                                                                   |
> | + Hiển thị ra màn hình toạ độ điểm theo dạng **(x,y)**                                                                              | `void hienThi()`                                                                                                                    |
> | + Đời điểm đi độ dời **(dx,dy)**                                                                                                    | `void doiDiem(int dx,int dy)`                                                                                                       |
> | + Lấy ra giá trị hoành độ của điểm                                                                                                  | `int giaTriX()`                                                                                                                     |
> | + Lấy ra giá trị tung độ của điểm                                                                                                   | `int giaTriY()`                                                                                                                     |
> | + Tính khoảng cách từ điểm đó đến gốc toạ độ                                                                                        | `float khoangCach()`                                                                                                                |
> | + Tính khoảng cách từ điểm đến 1 điểm khác                                                                                          | `khoangCach(Diem d)`                                                                                                                |
> 
> ![icons8-hand_with_pen.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/05-23-26-35-icons8-hand_with_pen.png) Viết lớp `SDDiem` có chứa hàm `main()` khai thác lớp vừa định nghĩa:
> 
> - Tạo ra điểm `A` toạ độ **(3,4)** ➨ Hiển thị toạ độ điểm `A` ra màn hình
> - Tạo ra điểm `B` với giá trị nhập từ `bàn phím` ➨ Hiển thị toạ độ điểm B ra màn hình
> - Tạo ra điểm `C` đối xuống với điểm B qua gốc toạ độ ➨Hiển thị toạ độ điểm `C` ra màn hình 
> - Hiển thị ra màn hình khoảng cách từ điểm `B` tới tâm `O`
> - HIển thị ra màn hình khoảng cách từ điểm `A` tới điểm `B`

<details>
<summary><b><img src="https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/05-12-35-26-E%20Learning.png"> Giải</b></summary>

<br>

```java
import java.util.Scanner;

public class Diem {
    private int x;
    private int y;

    public Diem() {}

    public Diem(int x, int y) {
        this.x = x;
        this.y = y;
    }

    public int getX() {
        return x;
    }
    public int getY() {
        return y;
    }
    public void setX(int x) {
        this.x = x;
    }
    public void setY(int y) {
        this.y = y;
    }

    public void nhapDiem() {
        Scanner sc = new Scanner(System.in);
        boolean done = true;
        while(done){
            try{
                System.out.print("Nhập x = ");
                int toado1 = Integer.parseInt(sc.nextLine());
                System.out.print("Nhập y = ");
                int toado2 = Integer.parseInt(sc.nextLine());
                
                this.x = toado1;
                this.y = toado2;
                done = false;
            }catch (Exception e) {
                System.out.println("Bạn đã nhập sai! Mời bạn nhập lại");
            }
        }
    }

    public void hienThi() {
        System.out.println("(" + this.x + "," + this.y + ")");
    }

    public void doiDiem(int dx, int dy) {
        this.x = this.x + dx;
        this.y = this.y + dy;
    }

    public float khoangCach() {
        // sqrt(x^2 + y^2)
        float sumSquare = (float) (Math.pow(this.x, 2) + Math.pow(this.y, 2));
        return (float) Math.sqrt(sumSquare);
    }

    public float khoangCach(Diem D) {
        // sqrt((x2 - x1)^2 + (y2 - y1)^2 )
        float sumSquare = (float) (Math.pow((D.x - this.x), 2) + Math.pow(D.y, this.y));
        return (float) Math.sqrt(sumSquare);
    }
}
```

```java
public class SDDiem {
    public static void main(String[] args) throws Exception {
        Diem A = new Diem(3,4);
        System.out.print("Điểm A ");
        A.hienThi();
        Diem B = new Diem();
        B.nhapDiem();
        System.out.print("Điểm B ");
        B.hienThi();

        Diem C = new Diem(-B.getX(),-B.getY());
        System.out.print("Điểm C ");
        C.hienThi();

        float distance_Original = B.khoangCach();
        System.out.println("Khoảng cách từ B tới O là " + distance_Original);
        float distance_Other = A.khoangCach(B);
        System.out.println("Khoảng cách từ A tới B là " + distance_Other);
    }
}
```

</details>

---

> ![icons8-questions.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/05-12-38-09-icons8-questions.png) **Bài 2:** Cài đặt lớp `Date` gồm : 
> 
> | ![icons8-package.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/05-23-20-42-icons8-package.png) Thuộc tính | ![icons8-data_quality.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/08-11-40-34-icons8-data_quality.png) Kiểu dữ liệu |
> | ---------------------------------------------------------------------------------------------------------------------------------- | ---------------------------------------------------------------------------------------------------------------------------------------------- |
> | ngay                                                                                                                               | int                                                                                                                                            |
> | thang                                                                                                                              | int                                                                                                                                            |
> | nam                                                                                                                                | int                                                                                                                                            |
> 
> | ![icons8-construction.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/08-11-36-40-icons8-construction.png) Hàm xây dựng | ![icons8-autograph.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/08-11-39-35-icons8-autograph.png) Tên hàm |
> | ---------------------------------------------------------------------------------------------------------------------------------------------- | ----------------------------------------------------------------------------------------------------------------------------------- |
> | Hàm xây dựng mặc nhiên                                                                                                                         | `Date()`                                                                                                                            |
> | Hàm xây dựng có 3 tham số                                                                                                                      | `Date(int,int,int)`                                                                                                                 |
> 
> | ![icons8-webhook.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/08-11-35-44-icons8-webhook.png) Phương thức | ![icons8-autograph.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/08-11-39-35-icons8-autograph.png) Tên hàm | ![Learning Material.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/05-23-05-25-Learning%20Material.png) Ví dụ |
> | ----------------------------------------------------------------------------------------------------------------------------------- | ----------------------------------------------------------------------------------------------------------------------------------- | ------------------------------------------------------------------------------------------------------------------------------------- |
> | + Hiển thị thông tin `ngày` ra màn hình                                                                                             | `void hienThiNgay()`                                                                                                                |                                                                                                                                       |
> | + Nhập giá trị từ `bàn phím`, nếu không hợp lệ yêu cầu nhập lại                                                                     | `void nhapDate()`                                                                                                                   |                                                                                                                                       |
> | + Kiểm tra xem ngày có **hợp lệ** không                                                                                             | `boolean hopLe()`                                                                                                                   | Ngày `31/06/2000` và `29/2/1999` không hợp lệ                                                                                         |
> | + Tính ra ngày hôm sau là ngày nào                                                                                                  | `Date ngayHomSau()`                                                                                                                 | `30/06/2007` ➨ `01/07/2007`                                                                                                           |
> | + Cộng 1 ngày với số ngày `n` nào đó                                                                                                | `Date congNgay(int n)`                                                                                                              | `15/06/2000` cộng thêm `20` ngày ➨ `05/07/2000`                                                                                       |

<details>
<summary><b><img src="https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/05-12-35-26-E%20Learning.png"> Giải</b></summary>

<br>

```java
import java.time.Year;
import java.util.Scanner;

public class Date{
    private int ngay;
    private int thang;
    private int nam;

    public Date(){}
    public Date(int ngay,int thang,int nam){
        this.ngay = ngay;
        this.thang = thang;
        this.nam = nam;
    }

    public void hienThiNgay(){
        System.out.println(this.ngay);
    }

    public void nhapDate(){
        Scanner sc = new Scanner(System.in);       
        boolean done = true;
        while (done) {
            try {
                System.out.print("Nhập ngày = ");
                int day = Integer.parseInt(sc.nextLine());
                System.out.print("Nhập tháng = ");
                int month = Integer.parseInt(sc.nextLine());
                System.out.print("Nhập năm = ");
                int year = Integer.parseInt(sc.nextLine());
                
                if(ngay <= 0 || thang <= 0 || nam <= 0){
                    throw new ArithemicException("Không để đặt số âm");
                }
                this.ngay = day;
                this.thang = month;
                this.nam = year;
                done = false;
            } catch (Exception e) {
                System.out.println("Bạn đã nhập sai! Mời bạn nhập lại");
            }
        }     
    }

    public boolean hopLe(){
        int day = this.ngay;
        int month = this.thang;
        int year = this.nam;

        if(month <= 0 || month > 12 || year < 0){
            return false;
        }
        if(month == 2){
            return day <= 28 + (Year.of(year).isLeap() ? 1 : 0);
        }
        return day <= (Set.of(4, 6, 9, 11).contains(month) ? 30 : 31);
    }

    public Date congNgay(int n){
        int[] maxDayInMonth = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
        Date newDate = new Date(this.ngay + n, this.thang, this.nam);
        
        if(Year.of(newDate.nam).isLeap()){
            maxDayInMonth[2] = 29;
        }
        while (newDate.ngay > maxDayInMonth[newDate.thang]) {
            newDate.ngay -= maxDayInMonth[newDate.thang];
            newDate.thang++;
            if(newDate.thang > 12){
                newDate.thang = 1;
                newDate.nam++;
            }
        }
        return newDate;
    }   

    public void ngayHomSau() {
        Date tempDate = this.congNgay(1);
        this.ngay = tempDate.ngay;
        this.thang = tempDate.thang;
        this.nam = tempDate.nam;
    }
}
```

</details>

---

> ![icons8-questions.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/05-12-38-09-icons8-questions.png) **Bài 3:** Cài đặt lớp `PhanSo` gồm : 
> 
> ![icons8-package.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/05-23-20-42-icons8-package.png) Các thuộc tính:  `tuso` và `mauso` kiểu số nguyên.
> 
> ![icons8-construction.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/08-11-36-40-icons8-construction.png) Các hàm xây dựng gồm: 
> 
> | Hàm xây dựng                    | Tên hàm                  |
> | ------------------------------- | ------------------------ |
> | + Hàm xây dựng mặc nhiên        | `PhanSo()`               |
> | + Hàm xây dựng gồm nhiều đối số | `PhanSo(int tu,int mau)` |
> 
> ![icons8-webhook.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/08-11-35-44-icons8-webhook.png) Các phương thức khác gồm : 
> 
> - Hàm nhập giá trị cho `1` phân số. Nếu phân số vừa nhập có mẫu số `= 0` thì **yêu cầu nhập lại.**
> 
> - Hàm hiển thị phân số theo dạng `tu / mau` hoặc `-tu/mau`.
>   
>   > ![Learning Material.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/05-23-05-25-Learning%20Material.png) *Yêu cầu:* nếu `tử = 0` ➨ chỉ in ra số `0`, nếu `mẫu =1` thì ➨ in ra `tử số`.
> 
> - Hàm `nghịch đảo` phân số (làm thay đổi giá trị phân số) ➨ `void nghichDao()`
> 
> - Hàm tính ra phân số `nghịch đảo` của 1 phân số (phân số sẽ giữ nguyên nhưng hàm trả ra giá trị là phân số nghịch đảo của nó) ➨ `PhanSo giaTriNghichDao()`
> 
> - Hàm tính ra `giá trị thực` của phân số.
>   
>   > ![Learning Material.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/05-23-05-25-Learning%20Material.png) *Ví dụ:* `1/2` ➨ `0.5`
> 
> - Hàm so sánh lớn hơn với phân số a ➨ `boolean lonHon(PhanSo a)`
> 
> - Hàm `cộng`, `trừ`, `nhân`, `chia` phân số với 1 `phân số a` (Kết quả của hàm là 1 phân số.)  ➨ `PhanSo cong(PhanSo a)`
> 
> - Hàm `cộng`, `trừ`, `nhân`, `chia` phân số với 1 số nguyên (Kết quả của hàm là 1 phân số.) ➨ `PhanSo cong(int a)`
>   
>   ![icons8-hand_with_pen.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/05-23-26-35-icons8-hand_with_pen.png) Viết lớp `SDPhanSo` có chứa hàm `main()` sử dụng lớp `PhanSo` : 
> 
> - Tạo phân số `a = 3/7`, `b = 4/9`. Hiển thị giá trị chúng ra màn hình
> 
> - Tạo 2 phân số `x` và `y`. Nhập giá trị cho `x` và `y` từ bàn phím.
> 
> - Hiển thị giá trị `nghịch đảo` của phân số `x` ra màn hình (*không làm thay đổi giá trị của `x`*)
> 
> - Tính tổng `x` và `y` và in kết quả ra màn hình 
> 
> - Nhập vào 1 danh sách gồm `n` phân số (*n : nhập từ bàn phím*)
> 
> - Tính tổng `n` phân số đó
> 
> - Tìm phân số `lớn nhất`  trong danh sách phân số trên.
> 
> - Sắp xếp danh sách phân số theo thứ tự tăng dần

<details>
<summary><b><img src="https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/05-12-35-26-E%20Learning.png"> Giải</b></summary>

<br>

```java
import java.util.Scanner;

public class PhanSo{
    private int tuso;
    private int mauso;

    public PhanSo(){}
    public PhanSo(int tuso,int mauso){
        this.tuso = tuso;
        this.mauso = mauso;
    }

    public void nhapPhanSo(){
        Scanner sc = new Scanner(System.in);
        boolean done = true;
        while(done){
            try {
                System.out.print("Nhập tử số  = ");
                int tu = Integer.parseInt(sc.nextLine());
                System.out.print("Nhập mẫu số  = ");
                int mau = Integer.parseInt(sc.nextLine());
                if(mau == 0){
                    throw new ArithmeticException("Mẫu số phải khác 0, Vui lòng nhập lại");
                }

                this.tuso = tu;
                this.mauso = mau;
                done = false;
            } catch (Exception e) {
                System.out.println("Nhập sai định dạng, vui lòng nhập lại");
            }
        }
    }

    public void hienThiPhanSo(){
        int tu = this.tuso * Math.signum(this.mauso);
        int mau = this.mauso * Math.signum(this.mauso);

        if(tu == 0){
            System.out.println("0");
        }
        else if(mau == 1){
            System.out.println(tu);
        }
        else{
            System.out.println(tu + "/" + mau);
        }
    }

    public void nghichDao(){
        int temp = this.tuso;
        this.tuso = this.mauso;
        this.mauso = temp;
    }

    public PhanSo giaTriNghichDao(){
        return new PhanSo(this.mauso, this.tuso);
    }

    public float giaTriThuc(){
        return (float) this.tuso / this.mauso;
    }

    public boolean lonHon(PhanSo pSo){
        return this.tuso/this.mauso - pSo.tuso/pSo.mauso > 0;
    }
    private int gcd(int a,int b) {
        if (b == 0)
            return a;
        return gcd(b, a % b);
    }
    private void rutGonPhanSo(){
        int ucln = gcd(this.tuso, this.mauso);
        this.tuso /= ucln;
        this.mauso /= ucln;
    }
    public PhanSo cong(PhanSo pSo){
        int tuso1 = this.tuso;
        int mauso1 = this.mauso;
        int tuso2 = pSo.tuso;
        int mauso2 = pSo.mauso;
        PhanSo tongPSo = new PhanSo();

        tongPSo.mauso = mauso1 * mauso2;
        tongPSo.tuso = (tuso1*mauso2) + (tuso2 * mauso1);
        tongPSo.rutGonPhanSo();
        return tongPSo;
    }
    public PhanSo tru(PhanSo pSo){
        int tuso1 = this.tuso;
        int mauso1 = this.mauso;
        int tuso2 = pSo.tuso;
        int mauso2 = pSo.mauso;
        PhanSo hieuPSo = new PhanSo();

        hieuPSo.mauso = mauso1 * mauso2;
        hieuPSo.tuso = (tuso1 * mauso2) - (tuso2 * mauso1);
        hieuPSo.rutGonPhanSo();
        return hieuPSo;
    }
    public PhanSo nhan(PhanSo pSo){
        int tuso1 = this.tuso;
        int mauso1 = this.mauso;
        int tuso2 = pSo.tuso;
        int mauso2 = pSo.mauso;
        PhanSo tichPSo = new PhanSo();

        tichPSo.tuso = tuso1 * tuso2;
        tichPSo.mauso = mauso1 * mauso2;
        tichPSo.rutGonPhanSo();
        return tichPSo;
    }
    public PhanSo chia(PhanSo pSo){
        int tuso1 = this.tuso;
        int mauso1 = this.mauso;
        int tuso2 = pSo.tuso;
        int mauso2 = pSo.mauso;
        PhanSo thuongPSo = new PhanSo();

        thuongPSo.tuso = tuso1 * mauso2;
        thuongPSo.mauso = mauso1 * tuso2;
        thuongPSo.rutGonPhanSo();
        return thuongPSo;
    }
}
```

```java
import java.util.ArrayList;
import java.util.Scanner;

public class SDPhanSo {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        PhanSo a = new PhanSo(3,7);
        PhanSo b = new PhanSo(4,9);
        a.hienThiPhanSo();
        b.hienThiPhanSo();

        a.lonHon(b);
        PhanSo x = new PhanSo();
        PhanSo y = new PhanSo();
        x.nhapPhanSo();
        y.nhapPhanSo();

        x.nghichDao();

        x.cong(y).hienThiPhanSo();

        System.out.print("Nhập n phân số = ");
        int n = sc.nextInt();
        ArrayList<PhanSo> dSachPhanSo = new ArrayList<PhanSo>();
        for (int i = 0; i < n; i++) {
            PhanSo pSo = new PhanSo();
            pSo.nhapPhanSo();
            dSachPhanSo.add(pSo);
        }

        PhanSo sumPhanSo = dSachPhanSo.get(0);
        for (int i = 1; i < n; i++) {
            sumPhanSo = sumPhanSo.cong(dSachPhanSo.get(i));
        }
        System.out.print("Tổng " + n + " phân số = ");
        sumPhanSo.hienThiPhanSo();

        PhanSo maxPhanSo = dSachPhanSo.get(0);
        for (int i = 1; i < n; i++) {
            if(dSachPhanSo.get(i).lonHon(maxPhanSo)){
                maxPhanSo = dSachPhanSo.get(i);
            }
        }
        System.out.print("Lớn nhất trong " + n  + " phân số là ");
        maxPhanSo.hienThiPhanSo();

        for (int i = 0; i < n-1 ; i++){
            for (int j = 0; j < n-i-1 ; j++){
                PhanSo temp1 = dSachPhanSo.get(j);
                PhanSo temp2 = dSachPhanSo.get(j + 1);
                if(temp1.lonHon(temp2)){
                    dSachPhanSo.set(j, temp2);
                    dSachPhanSo.set(j+1, temp1);
                }
            }
        } 
    }
}
```

</details>

| 🔙  [Bài thực hành 1](https://github.com/Zenfection/HPCTU/blob/main/LTHDT/buoi1.md) | [Bài thực hành 3](https://github.com/Zenfection/HPCTU/blob/main/LTHDT/buoi3.md) 🔜 |
| ----------------------------------------------------------------------------------- | ---------------------------------------------------------------------------------- |