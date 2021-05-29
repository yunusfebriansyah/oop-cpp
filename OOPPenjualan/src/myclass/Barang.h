#include <iostream>
using namespace std;
// class barang
class Barang
{
  // property / attribute
  private :
    string namaBarang;
    int hargaBarang;
    int stokBarang;
  
  public :

    virtual string tampilJenisBarang() = 0;

    // Constructor
    Barang( string namaBarang = "tidak ada nama", int hargaBarang = 0, int stokBarang = 0 )
    {
      Barang::namaBarang = namaBarang;
      Barang::hargaBarang = hargaBarang;
      Barang::stokBarang = stokBarang;
    }

    // Destructor
    // ~Barang()
    // {
    //   cout << "Sudah selesai menggunakan object Barang" << endl;
    // }

    // Method Wajib
    // method tambah stok barang
    void tambahStok()
    {
      stokBarang += 1;
      cout << "Stok berhasil ditambahkan menjadi : " << stokBarang << "\n" << endl;
    }

    void tambahStok(int jmlTambah)
    {
      stokBarang += jmlTambah;
      cout << "Stok berhasil ditambahkan menjadi : " << stokBarang << "\n" << endl;
    }

    // method kurangi stok barang
    void kurangiStok()
    {
      stokBarang -= 1;
      cout << "Stok berhasil dikurang menjadi : " << stokBarang << "\n"  << endl;
    }

    void kurangiStok(int jmlKurang)
    {
      stokBarang -= jmlKurang;
      cout << "Stok berhasil dikurang menjadi : " << stokBarang << "\n"  << endl;
    }

    // method cek stok barang
    // cek dong stok barangnya!!!
    bool cekStok()
    {
      if( stokBarang > 0 )
      {
        return true;
      }else{
        return false;
      }
    }

    // bisa cek stok masih ada kan?? stok sudah gak ada kan??
    bool cekStok( bool status )
    {
      if( status ){
        // stok masih ada kan??
        if( stokBarang > 0 )
        {
          return true;
        }else{
          return false;
        }

      }else{
        // stok sudah abis
        if( stokBarang > 0 )
        {
          return false;
        }else{
          return true;
        }
      }
      
    }

    // method cetak informasi barang
    void cetakInfoBarang()
    {
      cout << "Nama Barang : " << Barang::namaBarang << ", Harga Barang : Rp." << Barang::hargaBarang << ", Stok Barang : " << Barang::stokBarang << "pcs.";
    }

    // Method Setter
    void setNamaBarang( string namaBarang )
    {
      Barang::namaBarang = namaBarang;
    }

    void setHargaBarang( int hargaBarang )
    {
      Barang::hargaBarang = hargaBarang;
    }

    void setStokBarang( int stokBarang )
    {
      Barang::stokBarang = stokBarang;
    }

    // Method Getter
    string getNamaBarang()
    {
      return Barang::namaBarang;
    }

    int getHargaBarang()
    {
      return Barang::hargaBarang;
    }

    int getStokBarang()
    {
      return Barang::stokBarang;
    }





};