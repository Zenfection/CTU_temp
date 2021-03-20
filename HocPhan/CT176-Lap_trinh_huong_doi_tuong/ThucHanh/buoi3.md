# ![Executive Male.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/05-19-06-19-Executive%20Male.png) Buổi thực hành 3 - Lập trình OOP ![Executive Female.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/05-19-07-40-Executive%20Female.png)

> ![icons8-questions.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/05-12-38-09-icons8-questions.png) **Bài 1** : cài đặt lớp `Gach` (*gạch lót nền*) như sau : 
> 
> | ![icons8-package.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/05-23-20-42-icons8-package.png) Thuộc tính | ![icons8-data_quality.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/08-11-40-34-icons8-data_quality.png) Kiểu dữ liêu | ![icons8-consultation.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/08-16-33-30-icons8-consultation.png) Giải thích |
> | ---------------------------------------------------------------------------------------------------------------------------------- | ---------------------------------------------------------------------------------------------------------------------------------------------- | -------------------------------------------------------------------------------------------------------------------------------------------- |
> | - maso                                                                                                                             | String                                                                                                                                         | Mã số                                                                                                                                        |
> | - mau                                                                                                                              | String                                                                                                                                         | màu                                                                                                                                          |
> | - soLuong                                                                                                                          | int                                                                                                                                            | số lượng viên gạch trong 1 hộp                                                                                                               |
> | - chieudaiGach                                                                                                                     | int                                                                                                                                            | chiều dài viên gạch (*tính theo `cm`*)                                                                                                       |
> | - chieurongGach                                                                                                                    | int                                                                                                                                            | chiều ngang viên gạch (*tính theo `cm`*)                                                                                                     |
> | - giaBan                                                                                                                           | long                                                                                                                                           | giá bán `1` hộp                                                                                                                              |
> 
> | ![icons8-construction.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/08-11-36-40-icons8-construction.png) Hàm xây dựng | ![icons8-autograph.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/08-11-39-35-icons8-autograph.png) Tên hàm |
> | ---------------------------------------------------------------------------------------------------------------------------------------------- | ----------------------------------------------------------------------------------------------------------------------------------- |
> | + Mặc nhiên                                                                                                                                    | `Gach()`                                                                                                                            |
> | + Hàm xây dựng 6 tham số                                                                                                                       | `Gach(String,String,int,int,int,long)`                                                                                              |
> 
> | ![icons8-webhook.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/08-11-35-44-icons8-webhook.png) Phương thức          | ![icons8-autograph.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/08-11-39-35-icons8-autograph.png) Tên hàm |
> | -------------------------------------------------------------------------------------------------------------------------------------------- | ----------------------------------------------------------------------------------------------------------------------------------- |
> | + Nhập thông tin cho 1 hộp gạch                                                                                                              | `void nhapGach()`                                                                                                                   |
> | + Hiển thị thông tin của 1 hộp gạch                                                                                                          | `void hienthiGach()`                                                                                                                |
> | + Tính giá bán lẻ của 1 viên gạch (*biết rằng giá bán lẻ cao hơn bán nguyên hộp là `20%`*)                                                   | `float giaBanLe()`                                                                                                                  |
> | + Tính **diện tích** nền tối đa có thể lót được hộp gạch                                                                                     | `float dienTichNen()`                                                                                                               |
> | + Tính **số lượng** hộp gạch ít nhất cần có khi lót 1 nền có diện tích là `D*N`  (*Quy định lót đúng chiều gạch , không cho xoay viên gạch*) | `int soLuongHop(int D,int N)`                                                                                                       |
> 
> ![icons8-hand_with_pen.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/05-23-26-35-icons8-hand_with_pen.png) Viết lớp `SDGach` có chứa hàm `main()` thực hiện các công việc sau : 
> 
> - Nhập 1 danh sách gồm `n` gạch lót nền (*với `n` được nhập từ bàn phím*)
> - Hiển thị ra màn hình thông tin các loại gạch vừa nhập
> - Hiển thị ra màn hình loại gạch có chi phí thấp nhất (*giá tiền/đơn vị diện tích*)
> - Tính ra chi phí mua gạch khi ta lót 1 diện tích có chiều ngang là `5m` và chiều dài là `20m`, khi ta dùng từng loại gạch trong danh sách trên.

<details>
<summary><b><img src="https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/05-12-35-26-E%20Learning.png"> Giải</b></summary>

<br>

```java
import java.util.Scanner;

public class Gach{
    private String maso;
    private String mau;
    private int soluong;
    private int chieudaiGach;
    private int chieurongGach;
    private long giaBan;

    public Gach(){}
    public Gach(String maso,String mau,int soluong,int chieudaiGach,int chieurongGach,long giaBan){
        this.maso = maso;
        this.mau = mau;
        this.soluong = soluong;
        this.chieudaiGach = chieudaiGach;
        this.chieurongGach = chieurongGach;
        this.giaBan = giaBan;
    }

    public long getGiaBan() {
        return giaBan;
    }
    public void nhapGach(){
        Scanner sc = new Scanner(System.in);
        boolean done = true;
        while (done) {
            try {
                System.out.print("Nhập mã số : ");
                String id = sc.nextLine();
                System.out.print("Nhập màu : ");
                String color = sc.nextLine();
                System.out.print("Nhập số lượng : ");
                int amount = Integer.parseInt(sc.nextLine());
                System.out.print("Nhập chiều dài Gạch : ");
                int longGach = Integer.parseInt(sc.nextLine());
                System.out.print("Nhập chiều rộng Gạch: ");
                int widthGach = Integer.parseInt(sc.nextLine());
                System.out.print("Nhập giá bán : ");
                long price = Long.parseLong(sc.nextLine());
    
                this.maso = id;
                this.mau = color;
                this.soluong = amount;
                this.chieudaiGach = longGach;
                this.chieurongGach = widthGach;
                this.giaBan = price;
                done = false;
            } catch (Exception e) {
                System.out.println("Nhập sai định dạng, mời nhập lại");
            }
        }
    }
    
    public void hienThiGach(){
        System.out.println("Mã số : " + this.maso);
        System.out.println("Màu : " + this.mau);
        System.out.println("Số lượng : " + this.soluong + " cái");
        System.out.println("Chiều dài : " + this.chieudaiGach + "cm");
        System.out.println("Chiều rộng : " + this.chieurongGach + "cm");
        System.out.println("Giá bán : " + this.giaBan + "đ");
    }

    public float giaBanLe(){
        return (float) (this.giaBan * 120) / 100;
    }

    public float dienTichNen(){
        return (float) this.chieudaiGach * this.chieurongGach * this.soluong;
    }

    public int soLuongHop(int D,int N){
        int vienDai = (int) Math.ceil((double) D / this.chieudaiGach);
        int vienRong = (int) Math.ceil((double) N / this.chieurongGach);

        return (int) Math.ceil((double) vienDai * vienRong / this.soluong);
    }
}
```

```java
import java.util.ArrayList;
import java.util.Scanner;

public class SDGach {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        System.out.print("Nhập n = ");
        int n = sc.nextInt();
        ArrayList<Gach> dsGach = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            Gach g = new Gach();
            g.nhapGach();
            dsGach.add(g);
        }

        for (Gach gach : dsGach) {
            System.out.print("\n");
            gach.hienThiGach();
        }

        int min = 0;
        for (int i = 1; i < dsGach.size(); i++) {
            float price1 = dsGach.get(min).getGiaBan() / dsGach.get(min).dienTichNen();
            float price2 = dsGach.get(i).getGiaBan() / dsGach.get(i).dienTichNen();
            if(price1 > price2){
                min = i;
            }
        }
        System.out.println("--- Gạch rẻ nhất là ---");
        dsGach.get(min).hienThiGach();

        // thiếu câu 4
        sc.close();
    }
}

```

</details>

---

> ![icons8-questions.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/05-12-38-09-icons8-questions.png) **Bài 2:** Cài đặt lớp `DoanThang` (*đoạn thẳng*) gồm :
> 
> | ![icons8-package.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/05-23-20-42-icons8-package.png) Thuộc tính | ![icons8-data_quality.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/08-11-40-34-icons8-data_quality.png)Kiểu dữ liệu |
> | ---------------------------------------------------------------------------------------------------------------------------------- | --------------------------------------------------------------------------------------------------------------------------------------------- |
> | - d1                                                                                                                               | int                                                                                                                                           |
> | - d2                                                                                                                               | int                                                                                                                                           |
> 
> | ![icons8-construction.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/08-11-36-40-icons8-construction.png) Hàm xây dựng | ![icons8-autograph.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/08-11-39-35-icons8-autograph.png) Tên hàm |
> | ---------------------------------------------------------------------------------------------------------------------------------------------- | ----------------------------------------------------------------------------------------------------------------------------------- |
> | + Mặc nhiên                                                                                                                                    | `DoanThang()`                                                                                                                       |
> | + 2 tham số                                                                                                                                    | `DoanThang(Diem,Diem)`                                                                                                              |
> | + 4 tham số                                                                                                                                    | `DoanThang(int ax,int ay,int bx,int by)`                                                                                            |
> 
> | ![icons8-webhook.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/08-11-35-44-icons8-webhook.png) Phương thức | ![icons8-autograph.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/08-11-39-35-icons8-autograph.png) Tên hàm |
> | ----------------------------------------------------------------------------------------------------------------------------------- | ----------------------------------------------------------------------------------------------------------------------------------- |
> | + Nhập toạ độ của đoạn thẳng                                                                                                        | `void nhapDoanThang()`                                                                                                              |
> | + Hiển thị giá trị 2 đầu mút của đoạn thẳng                                                                                         | `void hienThiDoanThang()`                                                                                                           |
> | + Tịnh tiến đoạn thẳng đi 1 độ dời (*dx,dy*) nào đó                                                                                 | `void tinhTien(int dx,int dy)`                                                                                                      |
> | + Tính độ dài đoạn thẳng.                                                                                                           | `float doDaiDoanThang()`                                                                                                            |
> | + Tính góc của đoạn thẳng với trục hoành                                                                                            | `double gocDoanThang()`                                                                                                             |
> 
> ![icons8-hand_with_pen.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/05-23-26-35-icons8-hand_with_pen.png) Viết lớp `SDDoanThang` có chứa hàm `main()` thực hiện các công việc sau : 
> 
> - Tạo 2 điểm là `A(2,5)` , `B(20,35)`. Tạo đoạn thẳng `AB`. Tịnh tiến `AB` đi đoạn `(5,3)`
> - Tạo một đoạn thẳng bất kỳ `CD`. Nhập giá trị cho đoạn `CD` đó.
> - Hiển thị ra màn hình độ dài `CD`, góc `CD` với trục hoành

<details>
<summary><b><img src="https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/05-12-35-26-E%20Learning.png"> Giải</b></summary>

<br>

```java
public class Diem {
    private int x;
    private int y;

    public Diem(){}
    public Diem(int x,int y){
        this.x = x;
        this.y = y;
    }

    public int getX() {
        return x;
    }
    public int getY() {
        return y;
    }
}
```

```java
import java.util.Scanner;

public class DoanThang{
    private int d1;
    private int d2;

    public DoanThang(){}
    public DoanThang(Diem a,Diem b){
        //vector(AB) = (xB - xA; yB-yA)
        this.d1 = b.getX() - a.getX();
        this.d2 = b.getY() - a.getY();
    }
    public DoanThang(int ax,int ay,int bx,int by){
        // vector(AB) = (xB - xA; yB-yA)
        this.d1 = bx - ax;
        this.d2 = by - ay;
    }

    public void nhapDoanThang(){
        Scanner sc= new Scanner(System.in);
        boolean done = true;
        while (done) {
            try {
                System.out.print("Nhập toạ độ điểm 1 : ");
                int diem1 = Integer.parseInt(sc.nextLine());
                System.out.print("Nhập toạ độ điểm 1 : ");
                int diem2 = Integer.parseInt(sc.nextLine());

                this.d1 = diem1;
                this.d2 = diem2;
                done = false;
            } catch (Exception e) {
                System.out.println("Nhập sai định dạng, mời nhập lại");
            }
        }
    }

    public void hienThiDoanThang(){
        System.out.println("(" + this.d1 + "," + this.d2 + ")");
    }

    public void tinhTien(int dx,int dy){
        this.d1 += dx;
        this.d2 += dy;
    }

    public float doDaiDoanThang(){
        // AB(x,y) = sqrt(x^2 + y^2)
        return (float) Math.sqrt(Math.pow(this.d1, 2) + Math.pow(this.d2, 2));
    }
    public double gocDoanThang(){
        double OA = Math.abs(this.d1);
        double OB = Math.abs(this.d2);
        double tanA = OB/OA;
        double arctanA = Math.atan(tanA);
        return 180 - Math.toDegrees(arctanA);
    }    
}
```

```java
public class SDDoanThang {
    public static void main(String[] args) throws Exception {
        Diem A = new Diem(3,0);
        Diem B = new Diem(0, 3);

        DoanThang AB = new DoanThang(A, B);
        AB.hienThiDoanThang();
        AB.tinhTien(5, 3);

        DoanThang CD = new DoanThang();
        CD.nhapDoanThang();
        System.out.println("Độ dài đoạn CD = " + CD.doDaiDoanThang());
        System.out.println("Góc CD với trục hoành = " + CD.gocDoanThang() + " độ");
    }
}
```

</details>

---

> ![icons8-questions.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/05-12-38-09-icons8-questions.png) **Bài 3:** Cài đặt lớp `SinhVien` (*sinh viên*) gồm : 
> 
> | ![icons8-package.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/05-23-20-42-icons8-package.png) Thuộc tính | ![icons8-data_quality.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/08-11-40-34-icons8-data_quality.png) Kiễu dữ liệu | ![icons8-consultation.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/08-16-33-30-icons8-consultation.png) Giải thích |
> | ---------------------------------------------------------------------------------------------------------------------------------- | ---------------------------------------------------------------------------------------------------------------------------------------------- | -------------------------------------------------------------------------------------------------------------------------------------------- |
> | - maSV                                                                                                                             | String                                                                                                                                         | Mã số Sinh Viên                                                                                                                              |
> | - hoTen                                                                                                                            | String                                                                                                                                         | Họ tên                                                                                                                                       |
> | - ngaySinh                                                                                                                         | Date                                                                                                                                           | Ngày Sinh                                                                                                                                    |
> | - hpDangKy                                                                                                                         | int                                                                                                                                            | số lượng HP đăng ký                                                                                                                          |
> | - tenHPDangKy                                                                                                                      | mảng String                                                                                                                                    | tên các học phần đăng ký                                                                                                                     |
> | - diemHP                                                                                                                           | mảng String                                                                                                                                    | điểm của các học phần                                                                                                                        |
> 
> | ![icons8-construction.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/08-11-36-40-icons8-construction.png) Hàm xây dựng | ![icons8-autograph.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/08-11-39-35-icons8-autograph.png) Tên hàm |
> | ---------------------------------------------------------------------------------------------------------------------------------------------- | ----------------------------------------------------------------------------------------------------------------------------------- |
> | + Mặc nhiên                                                                                                                                    | `SinhVien()`                                                                                                                        |
> | + 6 tham số                                                                                                                                    | `SinhVien(String,String,Date,int,String,String[])`                                                                                  |
> 
> | ![icons8-webhook.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/08-11-35-44-icons8-webhook.png) Phương thức | ![icons8-autograph.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/08-11-39-35-icons8-autograph.png) Tên hàm |
> | ----------------------------------------------------------------------------------------------------------------------------------- | ----------------------------------------------------------------------------------------------------------------------------------- |
> | + Nhập thông tin cơ bản của Sinh Viên                                                                                               | `void nhapSV()`                                                                                                                     |
> | + Nhập điểm cho các học phần của sinh viên                                                                                          | `void nhapDiemHP()`                                                                                                                 |
> | + Xuất ra chuỗi là thông tin sinh viên (*dùng `toString()`*)                                                                        | `void inThongTinSV()`                                                                                                               |
> | + Tính ra điểm trung bình của sinh viên theo thang điểm `4`                                                                         | `float diemHP()`                                                                                                                    |
> | + Đăng ký thêm 1 học phần cho sinh viên                                                                                             | `void dangKyHP()`                                                                                                                   |
> | + Xoá 1 học phần của sinh viên                                                                                                      | `void xoaHP`                                                                                                                        |
> 
> ![icons8-hand_with_pen.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/05-23-26-35-icons8-hand_with_pen.png) Viết lớp `SDSinhVien` có chứa hàm `main()` gồm : 
> 
> - Tạo sinh viên `a`. Nhập thông tin sinh viên `a`. Đăng ký thêm cho sinh viên `a` 1 học phần là `LTHDT`. Hiển thị thông tin của `a`.
> - Tìm các sinh viên bị cảnh cáo học vụ
> - Tìm sinh viên có điểm trung bình cao nhất lớp.
> - Hiển thị danh sách sinh viên theo thứ tự `Alphabet` của Tên

<details>
<summary><b><img src="https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/05-12-35-26-E%20Learning.png"> Giải</b></summary>

<br>

```java
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Date;
import java.util.List;
import java.util.Scanner;

public class SinhVien{
    private String maSV;
    private String hoTen;
    private Date ngaySinh;
    private int hpDangKy;
    private String[] tenHPDangKy;
    private String[] diemHP;
    
    public SinhVien(){}
    public SinhVien(String maSV,String hoTen,Date ngaySinh,int hpDangKy,String[] tenHPDangKy,String[] diemHP){
        this.maSV = maSV;
        this.hoTen = hoTen;
        this.ngaySinh = ngaySinh;
        this.hpDangKy = hpDangKy;
        this.tenHPDangKy = tenHPDangKy;
        this.diemHP = diemHP;
    }
    //--Start : Getter/Setter --
    public String[] getDiemHP() {return diemHP;}
    public String getHoTen() {return hoTen;}
    public int getHpDangKy() {return hpDangKy;}
    public String getMaSV() {return maSV;}
    public Date getNgaySinh() {return ngaySinh;}
    public String[] getTenHPDangKy() {return tenHPDangKy;}

    public void setDiemHP(String[] diemHP) {this.diemHP = diemHP;}
    public void setHoTen(String hoTen) {this.hoTen = hoTen;}
    public void setHpDangKy(int hpDangKy) {this.hpDangKy = hpDangKy;}
    public void setMaSV(String maSV) {this.maSV = maSV;}
    public void setNgaySinh(Date ngaySinh) {this.ngaySinh = ngaySinh;}
    public void setTenHPDangKy(String[] tenHPDangKy) {this.tenHPDangKy = tenHPDangKy;}
    //--End: Getter/Setter --

    public void nhapSinhVien(){
        Scanner sc = new Scanner(System.in);
        boolean done = true;
        while (done) {
            try {
                System.out.print("Nhập mã Sinh Viên : ");
                String id = sc.nextLine();
                System.out.print("Nhập họ tên : ");
                String name = sc.nextLine();
                System.out.print("Nhập ngày sinh (cách nhau bởi /) : ");
                String d = sc.nextLine();
                SimpleDateFormat dfm = new SimpleDateFormat("dd/MM/yyyy");
                Date date = dfm.parse(d);
                System.out.print("Số lượng học phần đăng ký : ");
                int amountHP = Integer.parseInt(sc.nextLine());

                String[] nameHP = new String[amountHP];
                for (int i = 0; i < amountHP; i++) {
                    System.out.print("Nhập tên học phần " + (i+1) +" : ");
                    String temp = sc.nextLine();
                    nameHP[i] = temp;
                }

                String[] scoreHP = new String[amountHP];
                for (int i = 0; i < amountHP; i++) {
                    System.out.print("Nhập điểm học phần " + nameHP[i] + " : ");
                    String temp = sc.nextLine();
                    scoreHP[i] = temp;
                }

                this.maSV = id;
                this.hoTen = name;
                this.ngaySinh = date;
                this.hpDangKy = amountHP;
                this.tenHPDangKy = nameHP;
                this.diemHP = scoreHP;
                done = false;
            } catch (Exception e) {
                System.out.println("Sai định dạng, mời bạn nhập lại");
            }
        }
    }

    public void inThongTinSV(){
        System.out.println("MSSV : " + this.maSV);
        System.out.println("Họ và Tên : " + this.hoTen);
        SimpleDateFormat dfm = new SimpleDateFormat("dd/MM/yyyy");
        System.out.println("Ngày sinh : " + dfm.format(this.ngaySinh));
        System.out.println("Đã đăng ký " + this.hpDangKy + " học phần gồm : ");
        for (int i = 0; i < this.hpDangKy; i++) {
            System.out.println(this.tenHPDangKy[i] + " ==> điểm  " + this.diemHP[i]);
        }
    }

    // public float diemTB(){
        
    // }

    public void dangkyHP(){
        Scanner sc = new Scanner(System.in);
        List<String> nameHP = new ArrayList<String>(Arrays.asList(this.tenHPDangKy));
        List<String> scoreHP = new ArrayList<String>(Arrays.asList(this.diemHP));
        boolean done = true;
        while (done) {
            try {
                System.out.print("Nhập tên học phần cần thêm : ");
                String tenHP = sc.nextLine();
                System.out.print("Nhập điểm học phần : ");
                String diem = sc.nextLine();

                nameHP.add(tenHP);
                scoreHP.add(diem);

                this.tenHPDangKy = nameHP.toArray(new String[0]);
                this.diemHP = scoreHP.toArray(new String[0]);
                this.hpDangKy++;
                done = false;
            } catch (Exception e) {
                System.out.println("Sai định dạng");
            }
        }
    }

    public void xoaHP(){
        Scanner sc = new Scanner(System.in);
        List<String> nameHP = new ArrayList<String>(Arrays.asList(this.tenHPDangKy));
        List<String> scoreHP = new ArrayList<String>(Arrays.asList(this.diemHP));
        boolean done = true;
        while (done) {
            try {
                System.out.print("Nhập thứ tự học phần muốn xoá (bắt đầu từ 0) : ");
                int n = Integer.parseInt(sc.nextLine());
                nameHP.remove(n);
                scoreHP.remove(n);

                this.tenHPDangKy = nameHP.toArray(new String[0]);
                this.diemHP = scoreHP.toArray(new String[0]);
                this.hpDangKy--;
                done = false;
            } catch (Exception e) {
                System.out.println("Sai định dạng, mời bạn nhập lại");
            }
        }
    }
}
```

```java

```

</details>

| 🔙  [Bài thực hành 2](https://github.com/Zenfection/HPCTU/blob/main/LTHDT/buoi2.md) | [Bài thực hành 4](https://github.com/Zenfection/HPCTU/blob/main/LTHDT/buoi4.md) 🔜 |
| ----------------------------------------------------------------------------------- | ---------------------------------------------------------------------------------- |