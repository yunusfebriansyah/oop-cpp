#include <iostream>

using namespace std;

class Transaksi{

  public :
  Transaksi( Penjual *penjual, Pembeli *pembeli, Barang *barang )
  {

    cout << "Penjual : " << penjual->getNama() << ", Pembeli : " << pembeli->getNama() << ", Barang : " << barang->getNamaBarang() << ", Tipe Barang : " << barang->tampilJenisBarang() << "\n" << endl;
    int stokBaru = barang->getStokBarang() - 1;
    barang->setStokBarang(stokBaru);

  }

};