#include <iostream>

using namespace std;

class User{

  private :
    string nama;
    int umur;
    string jenisKelamin;

  public :
  virtual string tampilJenisUser() = 0;

  User( string nama = "tidak ada nama", int umur = 0, string jenisKelamin = "tidak ada jk" )
    {
      User::nama = nama;
      User::umur = umur;
      User::jenisKelamin = jenisKelamin;
    }

  void cetakInfoUser()
  {
    cout << "Nama User : " << User::nama << ", Umur User : " << User::umur << "tahun, Jenis Kelamin : " << User::jenisKelamin;
  }

  // Method Setter
    void setNama(string nama){
      User::nama = nama;
    }

    void setUmur(int umur){
      User::umur = umur;
    }

    void setJenisKelamin(string jenisKelamin){
      User::jenisKelamin = jenisKelamin;
    }

    // Method Getter
    string getNama(){
      return User::nama;
    }

    int getUmur(){
      return User::umur;
    }

    string getJenisKelamin(){
      return User::jenisKelamin;
    }



};