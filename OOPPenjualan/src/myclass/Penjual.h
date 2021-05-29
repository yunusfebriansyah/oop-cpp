#include <iostream>

using namespace std;


class Penjual : public User{

  // property
  private :
    int lamaKerjaPerTahun;

  // method
  public :

  virtual string tampilJenisUser()
  {
    return "Ini Penjual";
  };

    // Method Constructor
    Penjual( string nama = "tidak ada nama", int umur = 0, string jenisKelamin = "tidak ada jk", int lamaKerjaPerTahun = 0 ) : User(nama, umur, jenisKelamin)
    {
      Penjual::lamaKerjaPerTahun = lamaKerjaPerTahun;
    }

    // Method Wajib
    void cetakInfoUser()
    {
      User::cetakInfoUser();
      cout << ", Lama Kerja : " << Penjual::lamaKerjaPerTahun << "tahun\n" << endl;
    }

    // Method Setter
    void setLamaKerjaPerTahun(int lamaKerjaPerTahun){
      Penjual::lamaKerjaPerTahun = lamaKerjaPerTahun;
    }

    // Method Getter

    int getLamaKerjaPerTahun(){
      return Penjual::lamaKerjaPerTahun;
    }

};