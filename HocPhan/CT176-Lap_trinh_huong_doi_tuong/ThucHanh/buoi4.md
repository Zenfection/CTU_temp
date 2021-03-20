# ![Executive Malepng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/05-19-06-19-Executive%20Male.png) Buổi thực hành 4 - Lập trình OOP ![Executive Femalepng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/05-19-07-40-Executive%20Female.png)

> ![icons8-questions.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/05-12-38-09-icons8-questions.png) **Bài 1:** Cài đặt lớp `DiemMau` (*Diểm có màu*) **thừa kế** từ lớp `Diem` (*định nghĩa trong* [buổi 2](https://github.com/Zenfection/HPCTU/blob/main/LTHDT/buoi2.md), bổ sung thêm : 
> 
> | ![icons8-package.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/05-23-20-42-icons8-package.png) Thuộc tính | ![icons8-data_quality.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/08-11-40-34-icons8-data_quality.png) Kiểu dữ liệu |
> | ---------------------------------------------------------------------------------------------------------------------------------- | ---------------------------------------------------------------------------------------------------------------------------------------------- |
> | - màu                                                                                                                              | String                                                                                                                                         |
> 
> | ![icons8-construction.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/08-11-36-40-icons8-construction.png) Hàm xây dựng | ![icons8autographpng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/08-11-39-35-icons8-autograph.png) Tên hàm |
> | ---------------------------------------------------------------------------------------------------------------------------------------------- | --------------------------------------------------------------------------------------------------------------------------------- |
> | + Mặc nhiên                                                                                                                                    | `DiemMau()`                                                                                                                       |
> | + 3 đối số                                                                                                                                     | `DiemMau(int,int,String)`                                                                                                         |
> 
> | ![icons8-webhook.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/08-11-35-44-icons8-webhook.png) Phương thức | ![icons8autographpng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/08-11-39-35-icons8-autograph.png) Tên hàm |
> | ----------------------------------------------------------------------------------------------------------------------------------- | --------------------------------------------------------------------------------------------------------------------------------- |
> | + Gán giá trị màu cho điểm                                                                                                          | `void ganMau(String mau)`                                                                                                         |
> | + Nhập màu                                                                                                                          | `void nhapMau()`                                                                                                                  |
> | + Hiển thị màu                                                                                                                      | `void hienThiMau()`                                                                                                               |
> | ....                                                                                                                                | ....                                                                                                                              |
> 
> Viết lớp `SDDiemMau` có hàm `main()` thực hiện các công việc sau : 
> 
> - Tạo một điểm màu `A` có toạ độ là `(5,10)` và màu là trắng. Hiển thị thông tin ra màn hình
> - Tạo một điểm màu tổng quát `B`. Nhập giá trị từ bàn phím cho điểm `B`. Dời điểm `B` đi 1 độ dời `10,8`. Hiển thị toạ độ điểm B ra màn hình. Gán màu mới cho điểm `B` là màu `Vàng`.

<details>
<summary><b><img src="https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/05-12-35-26-E%20Learning.png"> Giải</b></summary>

<br>

Lớp `Diem` trong **bài 1** [buổi 2](https://github.com/Zenfection/HPCTU/blob/main/LTHDT/buoi2.md)

```java
import java.util.Scanner;

public class DiemMau extends Diem{
    private String mau;

    public DiemMau(){}
    public DiemMau(int x,int y,String mau){
        super(x, y);
        this.mau = mau;
    }

    public void ganMau(String mau) {
        this.mau = mau;
    }

    public void nhapDiemMau(){
        Scanner sc = new Scanner(System.in);
        boolean done = true;
        while (done) {
            try {
                System.out.print("Nhập toạ độ điểm 1 : ");
                int diem1 = Integer.parseInt(sc.nextLine());
                System.out.print("Nhập toạ độ điểm 2 : ");
                int diem2 = Integer.parseInt(sc.nextLine());
                System.out.print("Nhập màu : ");
                String color = sc.nextLine();

                this.setX(diem1);
                this.setY(diem2);
                this.mau = color;
                done = false;
            } catch (Exception e) {
                System.out.println("Sai định dạng, vui lòng nhập lại");
            }
        }
    }

    public void hienThiDiemMau(){
        System.out.println("(" + this.getX() + "," + this.getY() + ") - " + this.mau);
    }
}
```

```java
public class SDDiemMau {
    public static void main(String[] args) {
        DiemMau A = new DiemMau(5,10,"trắng");
        A.hienThiDiemMau();

        DiemMau B = new DiemMau();
        B.nhapDiemMau();
        B.doiDiem(10, 8);
        B.hienThiDiemMau();
        B.ganMau("vàng");
        B.hienThiDiemMau();
    }
}
```

</details>

---

> ![icons8-questions.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/05-12-38-09-icons8-questions.png) **Bài 2:** Cài đặt lớp `SinhVienCNTT` (*Sinh viên công nghệ thông tin*) **thừa kế** từ lớp `SinhVien` (*đã định nghĩa trong* [buổi 3](https://github.com/Zenfection/HPCTU/blob/main/LTHDT/buoi3.md)), bổ sung thêm :
> 
> | ![icons8-package.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/05-23-20-42-icons8-package.png) Thuộc tính | ![icons8-data_quality.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/08-11-40-34-icons8-data_quality.png) Kiểu dữ liệu |
> | ---------------------------------------------------------------------------------------------------------------------------------- | ---------------------------------------------------------------------------------------------------------------------------------------------- |
> | - taikhoan                                                                                                                         | String                                                                                                                                         |
> | - matkhau                                                                                                                          | String                                                                                                                                         |
> | - email                                                                                                                            | String                                                                                                                                         |
> 
> | ![icons8-construction.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/08-11-36-40-icons8-construction.png) Hàm xây dựng | ![icons8autographpng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/08-11-39-35-icons8-autograph.png) Tên hàm |
> | ---------------------------------------------------------------------------------------------------------------------------------------------- | --------------------------------------------------------------------------------------------------------------------------------- |
> | + Mặc nhiên                                                                                                                                    | `SinhVienCNTT()`                                                                                                                  |
> | + 4 đối số                                                                                                                                     | `SinhVienCNTT(SinhVien,String,String,String)`                                                                                     |
> 
> | ![icons8-webhook.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/08-11-35-44-icons8-webhook.png) Phương thức | ![icons8autographpng](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/08-11-39-35-icons8-autograph.png) Tên hàm |
> | ----------------------------------------------------------------------------------------------------------------------------------- | --------------------------------------------------------------------------------------------------------------------------------- |
> | + Nhập thông tin Sinh Viên CNTT                                                                                                     | `void nhapSVCNTT()`                                                                                                               |
> | + Nạp đè phương thức `toString()` để xuất ra thông tin của một sinh viên `CNTT`                                                     | `void hienThiSVCNTT()`                                                                                                            |
> | + Đổi mật khẩu                                                                                                                      | `void doiMatKhau(String newpass)`                                                                                                 |
> | + Lấy ra địa chỉ email của Sinh Viên                                                                                                | `String getEmail()`                                                                                                               |
> 
> Viết lớp `SDSVCNTT` có hàm `main()` thực hiện các công việc sau : 
> 
> - Tạo một danh sách gồm `n` sinh viên CNTT. Nhập thông tin cho danh sách đó.
> - Nhập vào một địa chỉ `email`. Tìm tài khoản  của sinh viên đó có địa chỉ `email` trên. Hiển thị kết quả học tập của Sinh Viên đó.

<details>
<summary><b><img src="https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/05-12-35-26-E%20Learning.png"> Giải</b></summary>

<br>

Lớp `SinhVien` trong **bài 3** trong [buổi 3](https://github.com/Zenfection/HPCTU/blob/main/LTHDT/buoi3.md)

```java
import java.util.Scanner;

public class SinhVienCNTT extends SinhVien{
    private String taikhoan;
    private String matkhau;
    private String email;

    public SinhVienCNTT(){}
    public SinhVienCNTT(SinhVien sv,String taikhoan,String matkhau,String email){
        this.setMaSV(sv.getMaSV());
        this.setDiemHP(sv.getDiemHP());
        this.setHoTen(sv.getHoTen());
        this.setHpDangKy(sv.getHpDangKy());
        this.setNgaySinh(sv.getNgaySinh());
        this.setTenHPDangKy(sv.getTenHPDangKy());
        this.taikhoan = taikhoan;
        this.matkhau = matkhau;
        this.email = email;
    }
    
    //--Start : Getter/Setter --
    public String getTaikhoan() {return taikhoan;}
    public String getMatkhau() {return matkhau;}
    public String getEmail() {return email;}
    public void setTaikhoan(String taikhoan) {this.taikhoan = taikhoan;}
    public void setMatkhau(String matkhau) {this.matkhau = matkhau;}
    public void setEmail(String email) {this.email = email;}
    //--End : Getter/Setter --

    public void nhapSVCNTT(){
        Scanner sc = new Scanner(System.in);
        boolean done = true;
        while (done) {
            try {
                System.out.print("Nhập tài khoản : ");
                String account = sc.nextLine();
                System.out.print("Nhập mật khẩu : ");
                String password = sc.nextLine();
                System.out.print("Nhập Email : ");
                String diachimail = sc.nextLine();

                SinhVien sv = new SinhVien();
                sv.nhapSinhVien();

                this.taikhoan = account;
                this.matkhau = password;
                this.email = diachimail;
                this.setMaSV(sv.getMaSV());
                this.setDiemHP(sv.getDiemHP());
                this.setHoTen(sv.getHoTen());
                this.setHpDangKy(sv.getHpDangKy());
                this.setNgaySinh(sv.getNgaySinh());
                this.setTenHPDangKy(sv.getTenHPDangKy());

                done = false;
            } catch (Exception e) {
                System.out.println("Nhập sai định dạng, mời nhập lại");
            }
        }
    }
}
```

```java
import java.util.ArrayList;
import java.util.Scanner;

public class SDSinhVienCNTT {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Nhập số sinh viên : ");
        int n = sc.nextInt();
        ArrayList<SinhVienCNTT> dsSVCNTT = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            System.out.println("Nhập thông tin sinh viên " + (i+1));
            SinhVienCNTT svcntt = new SinhVienCNTT();
            svcntt.nhapSVCNTT();
            dsSVCNTT.add(svcntt);
        }

        System.out.print("Nhập địa chỉ mail : ");
        String diachimail = sc.nextLine();
        for (SinhVienCNTT svCNTT: dsSVCNTT) {
            if(svCNTT.getEmail().equals(diachimail)){
                svCNTT.inThongTinSV();
            }
        }
    }
}
```

</details>

---

> ![icons8-questions.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/05-12-38-09-icons8-questions.png) **Bài 3:** Một nông trại có nuôi một số con vật như sau : `bò`,`heo`,`dê`. Tất cả các con vật trên đều có những thông tin chung như : `giống`,`màu lông`,`cân nặng`... nhưng tiếng kêu của các con vật là khác nhau.
> 
> Thiết kế sơ đồ thừa kế gồm các lớp : 
> 
> - Lớp `ConVat` gồm các thông tin chung của các con vật nêu trên và phương thức `Keu()`
> - Các lớp `Bo`,`Heo`,`De` thừa kế từ lớp `ConVat` và nạp đè phương thức `Keu()`.
> 
> Viết lớp `SDConVat` chứa hàm `main()` thực hiện công việc sau : 
> 
> - Tạo ra `n` con vật bất kỳ gồm 3 loại trên. Nhập thông tin cho các con vật.
> - Cho `n` con vật đó kêu.
> 
> Giả sử nông trại bổ sung thêm 1 con vật nuôi khác là `Gà`. Hãy thêm lớp `Ga` vào thiết kế chương trình của mình và thực hiện lại. Quan sát kết quả.

<details>
<summary><b><img src="https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/05-12-35-26-E%20Learning.png"> Giải</b></summary>

<br>

```java
import java.util.Scanner;

public abstract class ConVat {

    private String giong;
    private String mau;
    private float cannang;
    
    public ConVat(){}
    
    //-- Start : Getter/Setter --
    public String getGiong() {return giong;}
    public float getCannang() {return cannang;}
    public String getMau() {return mau;}
    public void setGiong(String giong) {this.giong = giong;}
    public void setCannang(float cannang) {this.cannang = cannang;}
    public void setMau(String mau) {this.mau = mau;}
    //-- End : Getter/Setter --
    public abstract void tiengKeu();

    public void nhapConVat(){
        Scanner sc = new Scanner(System.in);
        boolean done = true;
        while (done) {
            try {
                System.out.print("Nhập giống con vật : ");
                String species = sc.nextLine();
                System.out.print("Nhập màu con vật : ");
                String colorSkin = sc.nextLine();
                System.out.print("Nhập cân nặng con vật : ");
                float weight = Float.parseFloat(sc.nextLine());

                this.giong = species;
                this.mau = colorSkin;
                this.cannang = weight;
                done = false;
            } catch (Exception e) {
                System.out.println("Nhập sai định dạng, mời nhập lại");
            }
        }
    }
    
    public void hienThiConVat(){
        System.out.println("Thông tin con vật : " + this.giong + " - " + this.mau + " - " + this.cannang + "kg");
    }
}
```

```java
public class Bo extends ConVat{
    @Override
    public void tiengKeu() {
        System.out.println("Con bò kêu : ụm bò..bò..ò");
    }
}
```

```java
public class Heo extends ConVat{
    @Override
    public void tiengKeu() {
        System.out.println("Con heo kêu : Éc..éc..éc");
    }
}
```

```java
public class De extends ConVat{
    @Override
    public void tiengKeu() {
        System.out.println("Con dê kêu : be..be..be");
    }  
}
```

```java
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class SDDongVat{
    public static void nhapdsConVat(int n,List<ConVat> dsCVat){
        Scanner sc = new Scanner(System.in);
        while (dsCVat.size() != n) {
            try {
                System.out.print("Nhập loại con vật (bò/heo/dê) : ");
                String convat = sc.nextLine();
                if(convat.equalsIgnoreCase("bò")){
                    Bo conBo = new Bo();
                    conBo.nhapConVat();
                    dsCVat.add(conBo);
                }
                else if(convat.equalsIgnoreCase("heo")){
                    Heo conHeo = new Heo();
                    conHeo.nhapConVat();
                    dsCVat.add(conHeo);
                }
                else if(convat.equalsIgnoreCase("dê")){
                    De conDe = new De();
                    conDe.nhapConVat();
                    dsCVat.add(conDe);
                }
                else{
                    System.out.println("Con vật hiện không có trong danh sách:");
                }
            } catch (Exception e) {
                System.out.println("Nhập sai định dạng, mời nhập lại");
            }
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<ConVat> dsConVat = new ArrayList<>();
        System.out.print("Nhập số con vật : ");
        int n = sc.nextInt();
    
        nhapdsConVat(n, dsConVat);

        for (ConVat cVat : dsConVat) {
            cVat.tiengKeu();
        }
        
        sc.close();
    }
}
```

</details>

| 🔙  [Bài thực hành 3](https://github.com/Zenfection/HPCTU/blob/main/LTHDT/buoi3.md) | [Bài thực hành 5](https://github.com/Zenfection/HPCTU/blob/main/LTHDT/buoi5.md) 🔜 |
| ----------------------------------------------------------------------------------- | ---------------------------------------------------------------------------------- |