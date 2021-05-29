#include <iostream>
#include "myclass/User.h"
#include "myclass/Penjual.h"
#include "myclass/Pembeli.h"
#include "myclass/Accessories.h"
#include "myclass/Transaksi.h"
using namespace std;

int main()
{

  Keyboard keyboard1("Vortex Series VX 7", 1000000, 97, "RGB", 87, "Outemu Blue");
  Keyboard keyboard2("Keychron K2", 1200000, 27, "RGB", 84, "Gateron Brown");
  Keyboard keyboard3("Rexus Daxa M84 Pro", 1500000, 11, "RGB", 84, "Gateron Red");

  keyboard1.cetakInfoBarang();
  keyboard2.cetakInfoBarang();
  keyboard3.cetakInfoBarang();

  Processor proc1("AMD Ryzen 5 3600", 3000000, 21, 3.6, 4.2);
  Processor proc2("Intel Core i5 10400", 2400000, 12, 2.9, 4.3);
  proc1.cetakInfoBarang();
  proc2.cetakInfoBarang();

  // instansiasi object Penjual
  Penjual penjual1("Udin", 21, "Laki-laki", 2);
  penjual1.cetakInfoUser();

  // Instansiasi object Pembeli
  Pembeli pembeli1("Siti", 19, "Perempuan", "081234435678", "Jakarta");

  pembeli1.cetakInfoUser();

  Transaksi trs1(&penjual1, &pembeli1, &keyboard1);
  Transaksi trs2(&penjual1, &pembeli1, &proc1);

  cout << proc1.getStokBarang() << endl;


}