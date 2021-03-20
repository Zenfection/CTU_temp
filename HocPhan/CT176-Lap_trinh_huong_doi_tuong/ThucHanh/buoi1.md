# ![Executive Male.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/05-19-06-19-Executive%20Male.png)Buổi thực hành 1 - Lập trình OOP ![Executive Female.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/05-19-07-40-Executive%20Female.png)

> ![icons8-questions.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/05-12-38-09-icons8-questions.png) **Bài 1 :** Đặt các biến môi trường để có thể biên dịch và thực thi chương trình Java bằng cơ chế dòng lệnh. Dùng 1 trình soạn thảo văn bản bất kỳ để biên soạn chương trình Hello Java ở trên. Kiểm tra việc biên dịch và thực thi bằng cơ chế dòng lệnh.

<details>
<summary><b><img src="https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/05-12-35-26-E%20Learning.png"> Giải</b></summary>

<br>

Làm theo Guide sau : [Cài đặt Java](https://github.com/Zenfection/Java/blob/master/Java%20Basic/2.CaiDat.md)

</details>

---

> ![icons8-questions.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/05-12-38-09-icons8-questions.png) **Bài 2** : Dùng Eclipse (hoặc Netbeans) soạn thảo và thực thi chương trình HelloJava dùng để hiển thị ra màn hình câu “Hello Java”.

<details>
<summary><b><img src="https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/05-12-35-26-E%20Learning.png"> Giải</b></summary>

<br>

Tạo project Java và tạo 1 file `BT_2.java`

```java
public static void main(String[] args) {
    System.out.println("Hello World");
}
```

</details>

---

>  ![icons8-questions.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/05-12-38-09-icons8-questions.png) **Bài 3 :** Viết chương trình nhận vào đối số dòng lệnh là 1 danh sách các số thực. Hiển thị số lớn nhất và tổng của các số thực có trong danh sách đó. Chú ý loại trừ các số thực nhập vào không đúng định dạng.

<details>
<summary><b><img src="https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/05-12-35-26-E%20Learning.png"> Giải</b></summary>

<br>

```java
public static float[] inputList(int n){
    Scanner sc = new Scanner(System.in);
    float[] floatNumber = new float[n];
    float x;
    try {
        for (int i = 0; i < n; i++) {
            System.out.print("Nhập x" + i + " =");
            float as = Float.parseFloat(sc.nextLine());
            floatNumber[i] = x;
        }
    } catch (Exception e) {
        System.out.println("Bạn định dạng không phải số thực");
    }
    return floatNumber;
}
```

```java
public static float maxNumber(float[] List){
    float max = List[0];
    for (float item : List) {
        if(max < item){
            max = item;
        }
    }
    return max;
}
```

```java
public static float sumNumber(float[] List){
    float sum = 0;
    for (float item : List) {
        sum += item;
    }
    return sum;
}
```

</details>

---

> ![icons8-questions.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/05-12-38-09-icons8-questions.png) **Bài 4:** Viết chương trình nhập vào 2 số nguyên a và b. Tính tổng và hiển thị ra màn hình. Nếu số nhập vào không đúng định dạng thì hiển thị thông báo lỗi, yêu cầu nhập lại.

<details>
<summary><b><img src="https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/05-12-35-26-E%20Learning.png"> Giải</b></summary>

<br>

```java
public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int a,b;
    try {
        System.out.print("Nhập a = ");
        a = sc.nextInt();
        System.out.print("Nhập b = ");
        b = sc.nextInt();
        System.out.println("Tổng a và b là " + (a+b));
    } catch (Exception e) {
        System.out.println("Bạn nhập sai định dạng số nguyên");
    }
}
```

</details>

---

> ![icons8-questions.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/05-12-38-09-icons8-questions.png) **Bài 5:** Viết chương trình giải phương trình trong đó gồm 2 hàm static giải phương trình bậc 1 (2 tham số) và giải phương trình bậc 2 (3 tham số).

<details>
<summary><b><img src="https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/05-12-35-26-E%20Learning.png"> Giải</b></summary>

<br>

```java
public static void PT_bac1(float a,float b){
    if(a == 0){
        if(b == 0)
            System.out.println("Phương trình vô số nghiệm");
        else
            System.out.println("Phương trình vô nghiệm");
    }
    else{
        System.out.println("Phương trình có nghiệm x = " + (-b/a));
    }
}
```

```java
public static void PT_bac2(float a,float b,float c){
    if(a == 0){
        PT_bac1(b,c);
    }
    else{
        double delta = (Math.pow(b, 2) - 4 * a * c);
        if(delta < 0)
            System.out.println("Phương trình vô nghiệm");
        else if(delta == 0)
            System.out.println("Phương trình có nghiệm kép x = " + (-b / (2 * a)));
        else{
            double x1 = (-b + Math.sqrt(delta)) / (2 * a);
            double x2 = (-b - Math.sqrt(delta)) / (2 * a);
            System.out.println("Phương trình có 2 nghiệm phân biệt");
            System.out.println("x1 = " + x1);
            System.out.println("x2 = " + x2);
        }
    }
}
```

</details>

---

> ![icons8-questions.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/05-12-38-09-icons8-questions.png) **Bài 6:** Viết chương trình nhập vào 1 số nguyên. Kiểm tra xem số đó có phải là số nguyên tố không? Hiển thị số nguyên đó ra màn hình dưới dạng số nhị phân.

<details>
<summary><b><img src="https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/05-12-35-26-E%20Learning.png"> Giải</b></summary>

<br>

```java
public static boolean checkPrime(int n){
    if(n < 2)
        return true;
    else{
        for (int i = 2; i <= Math.sqrt(n); i++) {
            if(n % i == 0){
                return false;
            }
        }
    }
    return true;
}
```

```java
public static String numberToBinary(int n){
    return Integer.toBinaryString(n);
}
```

</details>

---

> ![icons8-questions.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/05-12-38-09-icons8-questions.png) **Bài 7:** Viết chương trình nhập vào 1 chuỗi họ tên. Hiển thị ra tên của họ tên đó. Nên thiết kế chương trình gồm 1 hàm dùng để tách tên và hàm main

<details>
<summary><b><img src="https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/05-12-35-26-E%20Learning.png"> Giải</b></summary>

<br>

```java
public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.print("Nhập họ và tên : ");
    String fullName = sc.nextLine();
    String[] splitFullName = fullName.split(" ");
    int length = splitFullName.length;
    System.out.println("Tên của bạn là : " + splitFullName[length - 1]);
    sc.close();
}
```

</details>

---

> ![icons8-questions.png](https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/05-12-38-09-icons8-questions.png) **Bài 8:** Viết chương trình thực hiện các công việc sau:
> 
> - Nhập vào 1 danh sách các số nguyên.
> - Nhập vào 1 số nguyên **x** bất kỳ. Đếm xem trong danh sách có bao nhiêu số **x**.
> - Sắp xếp danh sách theo thứ tự tăng dần.
> - Hiển thị danh sách ra màn hình.

<details>
<summary><b><img src="https://raw.githubusercontent.com/Zenfection/Image/master/2021/03/05-12-35-26-E%20Learning.png"> Giải</b></summary>

<br>

```java
public static int[] inputList(int n){
    Scanner sc = new Scanner(System.in);
    int[] intNumber = new int[n];
    for (int i = 0; i < n; i++) {
        System.out.println("Nhập i" + i + "= ");
        int x = sc.nextInt();
        intNumber[i] = x;
    }
    return intNumber;
}
```

```java
public static int countFind(int x,int[] List){
    int find = 0;
    for (int i : List) {
        if(i == x){
            find++;
        }
    }
    return find;
}
```

```java
public static void sortAscending(int[] List){
    Arrays.sort(List);
}
```

```java
public static void printList(int[] List){
    for (int i : List) {
        System.out.print(i+" ");
    }
}
```

</details>

| 🏠 [Mục lục](https://github.com/Zenfection/HPCTU) | [Bài thực hành 2](https://github.com/Zenfection/HPCTU/blob/main/LTHDT/buoi2.md) 🔜 |
| ------------------------------------------------- | -------------------------------------------------------------------------------------- |
