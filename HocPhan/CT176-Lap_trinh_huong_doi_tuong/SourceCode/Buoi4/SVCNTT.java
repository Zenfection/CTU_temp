package use.buoi4;

import java.util.Scanner;

import use.buoi3.*;
public class SVCNTT extends SinhVien{
	private String taikhoan;
	private String matkhau;
	private String email;
	
	public SVCNTT(){}
	public SVCNTT(String taikhoan,String matkhau,String email){
		super();
		this.taikhoan = taikhoan;
		this.matkhau = matkhau;
		this.email = email;
	}
	
	//Start: Getter-Setter
	public String getTaikhoan() {return taikhoan;}
	public void setTaikhoan(String taikhoan) {this.taikhoan = taikhoan;}
	public String getMatkhau() {return matkhau;}
	public void setMatkhau(String matkhau) {this.matkhau = matkhau;}
	public String getEmail() {return email;}
	public void setEmail(String email) {this.email = email;}
	//End
	
	public boolean checkEmail(String email){
		return email.contains("@") && email.contains(".com");
	}
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
	                
	                if(!checkEmail(diachimail)){
	                	System.out.println("Email không chuẩn, mời nhập lại");
	                	continue;
	                }

//	                SinhVien sv = new SinhVien();
//	                sv.nhapSinhVien();
	                
	                this.taikhoan = account;
	                this.matkhau = password;
	                this.email = diachimail;
	                super.nhapSinhVien();
//	                this.setMaSV(sv.getMaSV());
//	                this.setDiemHP(sv.getDiemHP());
//	                this.setHoTen(sv.getHoTen());
//	                this.setHpDangKy(sv.getHpDangKy());
//	                this.setNgaySinh(sv.getNgaySinh());
//	                this.setTenHPDangKy(sv.getTenHPDangKy());

	                done = false;
	            } catch (Exception e) {
	                System.out.println("Nhập sai định dạng, mời nhập lại");
	            }
	        }
	    }
	}
