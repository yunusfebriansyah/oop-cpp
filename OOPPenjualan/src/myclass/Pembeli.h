#include <iostream>
using namespace std;


class Pembeli : public User
{

  // property
  private :
    string noTelp;
    string alamat;

  // method
  public :
  virtual string tampilJenisUser()
  {
    return "Ini Pembeli";
  };

    // Method Constructor
    Pembeli( string nama = "tidak ada nama", int umur = 0, string jenisKelamin = "tidak ada jk", string noTelp = "08xx", string alamat = "tidak ada alamat" ) : User ( nama, umur, jenisKelamin )
    {
      Pembeli::noTelp = noTelp;
      Pembeli::alamat = alamat;
    }

    // Method Wajib
    void cetakInfoUser()
    {
      User::cetakInfoUser();
      cout << ", No. Telepon : " << Pembeli::noTelp << ", Alamat : " << Pembeli::alamat << "\n" << endl;
    }

    // Method Setter

    void setNoTelp(string noTelp){
      Pembeli::noTelp = noTelp;
    }

    void setAlamat(string alamat){
      Pembeli::alamat = alamat;
    }

    // Method Getter
    string getNoTelp(){
      return Pembeli::noTelp;
    }

    string getAlamat(){
      return Pembeli::alamat;
    }



};