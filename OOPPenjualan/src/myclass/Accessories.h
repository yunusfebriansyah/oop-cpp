#include <iostream>
#include "Barang.h"
using namespace std;

class Keyboard : public Barang{

  // Property dari Keyboard
  private :
    string backlight;
    int banyakKeys;
    string tipeSwitch;

  public :
  // method

  virtual string tampilJenisBarang()
  {
    return "Ini keyboard";
  }

    // constructor
    Keyboard( string namaBarang = "tidak ada nama", int hargaBarang = 0, int stokBarang = 0, string backlight = "tidak ada backlight", int banyakKeys = 0, string tipeSwitch = "linear" ) : Barang(namaBarang, hargaBarang, stokBarang)
    {
      Keyboard::backlight = backlight;
      Keyboard::banyakKeys = banyakKeys;
      Keyboard::tipeSwitch = tipeSwitch;
    }

    // setter & getter
    void setBacklight( string backlight )
    {
      Keyboard::backlight = backlight;
    }

    string getBacklight()
    {
      return Keyboard::backlight;
    }

    void setBanyakKeys( int banyakKeys )
    {
      Keyboard::banyakKeys = banyakKeys;
    }

    int getBanyakKeys()
    {
      return Keyboard::banyakKeys;
    }

    void setTipeSwitch( string switipeSwitch )
    {
      Keyboard::tipeSwitch = switipeSwitch;
    }

    string getTipeSwitch()
    {
      return Keyboard::tipeSwitch;
    }

    // overriding
    void cetakInfoBarang()
    {
      Barang::cetakInfoBarang();
      cout << ", Backlight : " << Keyboard::backlight << ", Banyak Keys : " << Keyboard::banyakKeys << ", Tipe Switch : " << Keyboard::tipeSwitch << "\n" << endl;
    }


};


class Processor : public Barang{

  // Property dari Keyboard
  private :
    float frekuensiDasar;
    float turboBoost;
    
  public :
  // method

  virtual string tampilJenisBarang()
  {
    return "Ini processor";
  }
    // constructor
    Processor( string namaBarang = "tidak ada nama", int hargaBarang = 0, int stokBarang = 0, float frekuensiDasar = 0, float turboBoost = 0 ) : Barang(namaBarang, hargaBarang, stokBarang)
    {
      Processor::frekuensiDasar = frekuensiDasar;
      Processor::turboBoost = turboBoost;
    }
    // setter & getter
    void setFrekuensiDasar( float frekuensiDasar )
    {
      Processor::frekuensiDasar = frekuensiDasar;
    }

    float getFrekuensiDasar()
    {
      return Processor::frekuensiDasar;
    }

    void setTurboBoost( float turboBoost )
    {
      Processor::turboBoost = turboBoost;
    }

    float getTurboBoost()
    {
      return Processor::turboBoost;
    }

    // overriding
    void cetakInfoBarang()
    {
      Barang::cetakInfoBarang();
      cout << ", Frekuensi Dasar : " << Processor::frekuensiDasar << ", Turbo Boost : " << Processor::turboBoost << "\n" << endl;
    }

};