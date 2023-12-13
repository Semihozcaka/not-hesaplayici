/******************************************************************************
**					SAKARYA ÜNİVERSİTESİ
**			         BİLGİSAYAR VE BİLİŞİM BİLİMLERİ FAKÜLTESİ
**				    BİLGİSAYAR MÜHENDİSLİĞİ BÖLÜMÜ
**				          PROGRAMLAMAYA GİRİŞİ DERSİ
**
**				ÖDEV NUMARASI…...: 1
**				ÖĞRENCİ ADI...............: Semih  Özçaka
**				ÖĞRENCİ NUMARASI.: G221210052
**				DERS GRUBU…………: (io) B grubu

******************************************************************************/
#include <iostream>
#include <iomanip>  
#include <math.h>
using namespace std;

//İmla hataları için kusura bakmayın teşekkürler.
    struct tarih {

        int gün, ay, yıl;
    };
    struct Ogrenci {
        string   adı, soyadı, no;
        float  ksınav1, ksınav2, odev1, odev2, proje, vize, final,başarıN;
    };
    Ogrenci ogrenciler[100];
    char yanıt;

    string ogrenciadı[30] = { "Ahmet","Berkay","Yusuf","Talha","Semih","Can","Emre","Yüksel","Mert","Barış","Mustafa","Kerem","Yunus","Sami","Ömer","Ayşe","Ece","Su","Çağla","Nevin","Azra","Pakize","Fatma","Zeliş","Buse","Zeynep","Sıla","Sümeyra","Merve","Ada" };
    string ogrencisoyadı[30] = { "Özçaka","Aktürk","Yaman","Baş","Aydemir","Arpacı","Koç","Büke","Arca","Kurt","Ölmez","Arıcı","Kula","Akdolan","Doğulu","Kuş","Çelik","Vural","Öz","Pehlivan","Karabaş","Demir","Soyöz","Dilaver","Bakır","Dülger","Özgöbek","Acar","Akdağ","Yaman" };
    int number = 0;
    int sayaç = 0;
    int sayı = 0;
    float yıliçi=0;
    float enB = 0;
    float enK = 100;
    float Nottoplam = 0;
    float ortalama = 0;
    float standartS = 0;
    float aralık1 = 0, aralık2 = 0;
    int sıra = 0;
    Ogrenci o1;
    tarih t1;
    
    
    float NotHarf(int m) {
        //100 ve 90 aralığındaki değerlere A harfini atıyor farklı aralıklara farklı harfler gelmesini sağlayan koşul
        if (m <= 100 && m >= 90)
        {
            "/n"; "/n"; "/n"; "/n"; cout << "AA";
        }
        else if ( 85<=m && m < 90)
        {
            "/n"; "/n"; "/n"; "/n"; cout << "BA";
        }
        else if (80 <= m && m < 85)
        {
            "/n"; "/n"; "/n"; "/n"; cout << "BB";
        }
        else if (75 <= m && m < 80)
        {
            "/n"; "/n"; "/n"; "/n"; cout << "CB";
        }
        else if (65 <= m && m < 75)
        {
            "/n"; "/n"; "/n"; "/n"; cout << "CC";
        }
        else if (55 <= m && m < 65)
        {
            "/n"; "/n"; "/n"; "/n"; cout << "DC";
        }
        else if (50 <= m && m < 55)
        {
            "/n"; "/n"; "/n"; "/n"; cout << "DD";
        }
        else if (40 <= m && m < 50)
        {
            "/n"; "/n"; "/n"; "/n"; cout << "FD";
        }
        else if (0 <= m && m < 40)
        {
            "/n"; "/n"; "/n"; "/n"; cout << "FF";
        }
        return m;
    }
    void kontrol(float m,string a) {
       float sayı;
        //min ve max aralığı kullanıcıdan aldığımız sayı değeri min max arasında mı diye kontrol eden koşul
        do {
            //değer doğru girildiyse döngüden çıkmayı sağlayan koşul
            if (m <= 100 && m >= 0) {
                break;
            }
            
            cout << a; cin >> sayı;
        } while (!(m < 0 || m>100));
        
    }
    void yazdır() {
            cout << "İsim" << setw(13) << "Soyisim" << setw(13) << "Başarı Notu" << endl;
            //ilk 20 öğrencinin ismi soy, ismi ve yıl sonu başarı puanını göstememize yarayan ve 20 kez dönen döngü
        for (int i = 0; i < 20; i++) {

            cout << ogrenciler[i].adı << setw(13) << ogrenciler[i].soyadı << setw(13) << ogrenciler[i].başarıN << endl;
        }
            cout << "Sonraki 20 kişinin gelmesi için 'E' tuşuna basın" << endl;
            cin >> yanıt;
            //kullanıcı sonraki 20 kişinin gelmesini isterse e butonunu algılayıp sonraki 20 lerin sıralanmasını sağlayan döngü
        while (yanıt == 'E' || yanıt == 'e') {
                // Eğer kullanıcı e değerini girmişse sayacı 1 artıran ve erkanı temizleyen koşul
            if (yanıt == 'E' || yanıt == 'e') {
                sayaç++;
                system("CLS");
                    //sayaç 5 e ulaştıysa veri vermeyi durduran koşul
                if (sayaç == 5)
                        break;
                        //20 ile 40 arasındaki öğrencilerin isim, soy isimve yıl sonu notunu yazdıran ve 20 kez dönen  döngü
               for (int i = 20; i < 40; i++) {
                    cout << ogrenciler[i].adı << setw(13) << ogrenciler[i].soyadı << setw(13) << ogrenciler[i].başarıN << endl;
               }


            }
                    //anlatılan işlemlerin tekrarı
                cout << "Sonraki 20 kişinin gelmesi için 'E' tuşuna basın" << endl;
                cin >> yanıt;
            if (yanıt == 'E' || yanıt == 'e') {
                    sayaç++;
                    system("CLS");
                if (sayaç == 5)
                    break;
                    for (int i = 40; i < 60; i++) {
                    cout << ogrenciler[i].adı << setw(13) << ogrenciler[i].soyadı << setw(13) << ogrenciler[i].başarıN << endl;
                    }



            }
            cout << "Sonraki 20 kişinin gelmesi için 'E' tuşuna basın" << endl;
            cin >> yanıt;
            if (yanıt == 'E' || yanıt == 'e') {
                sayaç++;
                system("CLS");
                if (sayaç == 5)
                    break;
                for (int i = 60; i < 80; i++) {
                    cout << ogrenciler[i].adı << setw(13) << ogrenciler[i].soyadı << setw(13) << ogrenciler[i].başarıN << endl;
                }



            }
            cout << "Sonraki 20 kişinin gelmesi için 'E' tuşuna basın" << endl;
            cin >> yanıt;
            if (yanıt == 'E' || yanıt == 'e') {
                sayaç++;
                system("CLS");
                if (sayaç == 5)
                    break;
                for (int i = 80; i < 100; i++) {
                    cout << ogrenciler[i].adı << setw(13) << ogrenciler[i].soyadı << setw(13) << ogrenciler[i].başarıN << endl;
                }



            }
        }
    }
    void enbüyük() {
        // dizinin başarınotu elemanına ulaşmamızı sağlayan ve 100 kez dönen  döngü
        for (int j = 0; j < 100; j++) {
            //başarı notu değerinin En büyük değeri ile karşılaştırılıp en büyük notu bulmamızı sağlayan koşul
            if (enB < ogrenciler[j].başarıN) {
                enB = ogrenciler[j].başarıN;
            }
        }
        cout << "En büyük not :" << enB << endl;
    }
    void enküçük(){
        // dizinin başarınotu elemanına ulaşmamızı sağlayan ve 100 kez dönen döngü
        for (int i = 0; i < 100; i++) {
            //başarı notu değerinin En küçük değeri ile karşılaştırılıp en küçük notu bulmamızı sağlayan koşul
            if (enK > ogrenciler[i].başarıN) {
                enK = ogrenciler[i].başarıN;
            }
        }
        cout << "En küçük not :" << enK << endl;
    }
    void notortalama(){
        //dizinin başarı notu elemanına ulaşıp onu not toplam değerine ekleyen ver sonunda ortalamayı bulmamıza yarıyan ve 100 kez dönen döngü
        for (int j = 0; j < 100; j++) {

            Nottoplam += ogrenciler[j].başarıN;
            ortalama = Nottoplam / 100;
        }
        
        cout << "sınıfın ortalaması :" << ortalama << endl;
        
    }
    void standartsapma() {
        //başarı notu üzerinden gerekli işlemleri yaparak standart sapmayı hesaplayan ve 100 kez dönen döngü
        for (int j = 0; j < 100; j++) {
            standartS = sqrt(pow((ogrenciler[j].başarıN - ortalama), 2) / 99);

        }
        cout << "Standart sapma=" << standartS << endl;
        
    }
    void aralık() {
        cout << "Alt limiti giriniz" << endl;
        cin >> aralık1;
        cout << "Üst limiti giriniz" << endl;
        cin >> aralık2;
        cout << "İsim" << setw(13) << "Soyisim" << setw(13) << "Başarı Notu" << endl;
        //dizinin verilerine erişip 100 kez dönen döngü
        for (int j = 0; j < 100; j++) {

                //aralıkları kullanıcıdan doğru almamızı sağlayan koşul
            if (aralık2 < aralık1) {
                cout << "Alt limit üst limitten büyük olamaz" << endl;
                //doğru aralıktaki verileri yazdıran koşul
            }if (ogrenciler[j].başarıN >= aralık1 && ogrenciler[j].başarıN <= aralık2) {
                cout << ogrenciler[j].adı << setw(13) << ogrenciler[j].soyadı << setw(13) << ogrenciler[j].başarıN << endl;
            }



        }
    }
    void ustlimit() {
        cout << "üst limiti giriniz" << endl;
        cin >> aralık1;
        cout << "İsim" << setw(13) << "Soyisim" << setw(13) << "Başarı Notu" << endl;
        //dizinin verilerine erişen ve 100 kez dönen döngü
        for (int i = 0; i < 100; i++) {

                //kullanıcıdan aldığımız aralığın altında not alan öğrencileri yazan koşul
            if (ogrenciler[i].başarıN < aralık1) {
                cout << ogrenciler[i].adı << setw(13) << ogrenciler[i].soyadı << setw(13) << ogrenciler[i].başarıN << endl;
            }
        }
    }
    void altlimit(){
        cout << "Alt limiti giriniz" << endl;
        cin >> aralık2;
        cout << "İsim" << setw(13) << "Soyisim" << setw(13) << "Başarı Notu" << endl;
        //dizinin verilerine erişen ve 100 kez dönen döngü 
        for (int i = 0; i < 100; i++) {

            //kullanıcıdan aldığımız aralığın üstünde not alan öğrencileri yazan koşul
            if (ogrenciler[i].başarıN > aralık1) {
                cout << ogrenciler[i].adı << setw(13) << ogrenciler[i].soyadı << setw(13) << ogrenciler[i].başarıN << endl;
            }
        }
    }

    
    int main()
    {
        
        setlocale(LC_ALL, "Turkish"); 
        
        
            cout << "------------------seçiminizi yapınız------------------------" << endl;
            cout << "1-Rastgele seçim" << endl;
            cout << "2-Manuel seçim" << endl;
            cin >> number;
            
        switch (number)
        {

                
            case 1:


                cout << "öğrencinin ismi" << setw(10) << "öğrencinin soy adı" << setw(10) << "öğrencinin yıl sonu notu" << endl;


                    //10 kez dönen ve başarı notuna 0-40 aralığında random değerler atayan döngü
                for (int j = 0; j >= 0 && j < 10; j++) {
                    ogrenciler[j].başarıN = rand() % 41;

                }
                //50 kez dönen ve başarı notuna 41-70 aralığında random değerler atayan döngü
                for (int j = 10; j >= 10 && j < 60; j++) {

                    
                    ogrenciler[j].başarıN = rand() % 30 + 41;
                }
                //15 kez dönen ve başarı notuna 71-80 aralığında random değerler atayan döngü
                for (int j = 60; j < 75 && j >= 60; j++) {


                    ogrenciler[j].başarıN = rand() % 10 + 71;
                }
                //25 kez dönen ve başarı notuna 81-100 aralığında random değerler atayan döngü
                for (int j = 75; j < 100 && j >= 75; j++) {
                    ogrenciler[j].başarıN = rand() % 20 + 81;
                }
                    //100 kez dönen ve tanımlanmış olan 30 isim,soy isim arasından random bir şekilde ad soy ad atıyan döngü
                for (int i = 0; i < 100; i++) {
                    ogrenciler[i].adı = ogrenciadı[rand() % 30];
                    ogrenciler[i].soyadı = ogrencisoyadı[rand() % 30];
                    cout << ogrenciler[i].adı << setw(13) << ogrenciler[i].soyadı << setw(13) << ogrenciler[i].başarıN << setw(13); NotHarf(ogrenciler[i].başarıN); cout << endl;
                }



              break;
            case 2:



                    //değerleri kullanıcıdan aldığımız dizinin elemanlarını tek tek açan döngü
                for (int i = 0; i < 100; i++) {



                    cout << "öğrencinin adı:"; cin >> o1.adı;
                    cout << "öğrencinin soyadı:"; cin >> o1.soyadı;
                    cout << "öğrencinin no:"; cin >> o1.no;
                    cout << "öğrencinin doğum yılı:"; cin >> t1.yıl;
                    cout << "öğrencinin doğum ayı:"; cin >> t1.ay;
                    cout << "öğrencinin doğum günü:"; cin >> t1.gün;
                    cout << "öğrencinin kısa sınav 1:"; cin >> ogrenciler[i].ksınav1; kontrol( ogrenciler[i].ksınav1, "öğrencinin kısa sınav 1:");
                    cout << "öğrencinin kısa sınav 2:"; cin >> ogrenciler[i].ksınav2; kontrol( ogrenciler[i].ksınav2, "öğrencinin kısa sınav 2:");
                    cout << "öğrencinin ödev 1:"; cin >> ogrenciler[i].odev1; kontrol( ogrenciler[i].odev1, "öğrencinin kısa sınav 1:");
                    cout << "öğrencinin ödev 2:"; cin >> ogrenciler[i].odev2; kontrol( ogrenciler[i].odev2, "öğrencinin kısa sınav 1:");
                    cout << "öğrencinin proje:"; cin >> ogrenciler[i].proje; kontrol( ogrenciler[i].proje, "öğrencinin kısa sınav 1:");
                    cout << "öğrencinin vize:"; cin >> ogrenciler[i].vize; kontrol( ogrenciler[i].vize, "öğrencinin kısa sınav 1:");
                    cout << "öğrencinin final:"; cin >> ogrenciler[i].final; kontrol( ogrenciler[i].final, "öğrencinin kısa sınav 1:");
                        yıliçi = o1.vize * .5 + o1.ksınav1 * .07 + o1.ksınav2 * .07 + o1.odev1 * .1 + o1.odev2 * .1 + o1.proje * .16;
                        ogrenciler[i].başarıN = yıliçi * .55 + o1.final * .45;
                            cout << "yıl içi başarı notu:" << yıliçi << endl;
                            cout << "yıl sonu başarı notu:" << ogrenciler[i].başarıN << endl;
                                NotHarf(ogrenciler[i].başarıN); cout << '\n';
                
                }



                break;
            default:
                cout << "lütfen iki seçenekten birini seçiniz" << endl;
        }
        

            cout << "--------------------Menü---------------------------------" << endl;
            cout << "1- 20 Öğrenci yazdır" << endl;
            cout << "2- sınıfın en yüksek notu " << endl;
            cout << "3- sınıfın en düşük notu" << endl;
            cout << "4- sınıfın ortalaması" << endl;
            cout << "5- sınıfın standart sapması" << endl;
            cout << "6- başarı notu belirli bir aralıkta olanlar" << endl;
            cout << "7- başarı notu belli bir değerin altında olan öğrenciler" << endl;
            cout << "8- başarı notu belli bir değerin üstünde olan öğrenciler" << endl;
            cin >> sayı;

        switch (sayı){
        
            case 1: 

             yazdır();
        
                break;
            case 2: 

            enbüyük();
        
                break;
            case 3: 
                enküçük();

        
               
               break;
            case 4:

              notortalama();

               
              break;
            case 5:

              standartsapma();

                
              break;
            case 6:

              aralık();

               
              break;
            case 7:

              ustlimit();
                break;
            case 8:
              altlimit();
                 break;
            default:
                cout << "lütfen geçerli bir sayı giriniz" << endl;
        }






    }