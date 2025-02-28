#include <stdio.h>
#include <stdlib.h>

int main()
{
   float  konut_gun_ort_tuketim,max_su_tuk_ucreti,max_atik_su_ucreti,yuzde5,yuzde6,sayac1_1,sayac1_2,sayac1_3,sayac2_1,sayac2_2,sayac3_1,sayac4_1,konut1_1,konut1_2,konut1_3,konut2_1,konut2_2,konut3,konut4;
   float toplam_atik_su_ucreti,toplam_kdv_tutari,gun_farki1,gun_farki2,gun_farki3,gun_farki4,kdv_tutari,fatura_tutari,su_tuketim_ucreti,atik_su_ucreti;
   float toplam2,toplam_su_tuk_ucreti_1,toplam_su_tuk_ucreti_2,toplam_su_tuk_ucreti_3,toplam_su_tuk_ucreti_4,toplam_tuketim1,toplam_tuketim2,toplam_tuketim3,toplam_tuketim4,toplam_kisi;
   float max_tuketim_konut,konut_gunluk_ort_tuk,gunluk_ort_tuk1,gunluk_ort_tuk2,gunluk_ort_tuk3,gunluk_ort_tuk4,yuzde1,yuzde2,yuzde3,yuzde4,onceki_sayac,simdiki_sayac,gun_farki;
   int su_tuketim_miktari,max_su_tuk_miktari1,max_su_tuk_miktari2,toplam1,toplam_su_tuketim_miktari_1,toplam_su_tuketim_miktari_2,toplam_su_tuketim_miktari_3,toplam_su_tuketim_miktari_4,sayi1,sayi2,sayac1,sayac2,sayac3,sayac4,abone;
   char baska_abone,E,e,max_su_tuk_abone,max_atik_su_abone,konut,isyeri,kamu_kurumu,turistik_tesis;
   su_tuketim_miktari=0;
   sayac1=0,sayac2=0,sayac3=0,sayac4=0;
   sayi1=0,sayi2=0;
   toplam1=0,toplam2=0;
   toplam_atik_su_ucreti=0,toplam_kdv_tutari=0,toplam_su_tuketim_miktari_1=0,toplam_su_tuketim_miktari_2=0,toplam_su_tuketim_miktari_3=0,toplam_su_tuketim_miktari_4=0;
   max_su_tuk_miktari1=0,max_su_tuk_miktari2=0,max_su_tuk_ucreti=0,max_atik_su_ucreti=0,max_tuketim_konut=0;

   printf("\n********************ESKI Aylik Fatura Duzenleme Sistemi********************\n\n");

   do{
      do{
         printf("\nAbone tipinizi giriniz:");
         scanf("%d",&abone);
         if(abone!=1 && abone!=2 && abone!=3 && abone!=4){                           //Abone tipi 1 ile 4 arasý olmalýdýr.
         do{
            printf("\n  ****Hatali giris yaptiniz****\n\nGecerli abone tipi giriniz:");  //Abone tipi 4 çeþit olduðundan dolayý, aralýkta bulunmayanlar hatalý veri giriþi olarak kabul edelir.
            scanf("%d",&abone);
                }while(abone!=1 && abone!=2 && abone!=3 && abone!=4);
                }
                }while(abone!=1 && abone!=2 && abone!=3 && abone!=4);


     do{
        printf("Onceki sayac degeri giriniz:");
        scanf("%f",&onceki_sayac);
        if(onceki_sayac<0){
           printf("\n  ****Hatali giris yaptiniz****\n\nGecerli sayac giriniz:");           //Önceki sayac deðeri sýfýrdan 0 ya da 0'dan büyük tam sayý olmalýdýr.
           scanf("%d",&onceki_sayac);
               }
               }while(onceki_sayac<0);

      do{
         printf("Simdiki sayac degeri giriniz:");
         scanf("%f",&simdiki_sayac);
         if(simdiki_sayac<onceki_sayac){
         printf("\n  ****Hatali giris yaptiniz****\n\nGecerli sayac giriniz:");              //þimdiki sayac deðeri önceki sayac deðerine eþit ya da daha büyük olmalýdýr.
         scanf("%f",&simdiki_sayac);
             }
             }while(simdiki_sayac<onceki_sayac);

      do{
         printf("Onceki ve simdiki sayac okuma tarihleri arasinda gecen gun farki giriniz:");
         scanf("%f",&gun_farki);
         if(gun_farki<=0){
         printf("\n  ****Hatali giris yaptiniz****\n\nGecerli gun sayisi giriniz:");         //Gun farki 0'dan büyük tam sayi olmalýdýr.
         scanf("%f",&gun_farki);
             }
             }while(gun_farki<=0);

         printf("\n\n\n");
      switch(abone){
         case 1:printf("Abone Tipiniz:Konut\n");
               break;
         case 2: printf("Abone Tipiniz:Isyeri\n");
               break;
         case 3:printf("Abone Tipiniz:Kamu Kurumu\n");
               break;
         case 4:printf("Abone Tipiniz:Turistik Tesis\n");
               break;
                     }

         if(simdiki_sayac>=onceki_sayac){
            su_tuketim_miktari=simdiki_sayac-onceki_sayac;
            printf("Su Tuketim Miktari:%d ton\n",su_tuketim_miktari);
                 }

      switch(abone){
         case 1:

                gun_farki==gun_farki1;
                konut_gunluk_ort_tuk=su_tuketim_miktari/gun_farki;
                if(su_tuketim_miktari<=((13*gun_farki)/30)){

                sayac1_1=konut1_1++;

                su_tuketim_ucreti=su_tuketim_miktari*2.24;
                printf("Su Tuketim Ucreti:%.2f TL \n",su_tuketim_ucreti);

                atik_su_ucreti=su_tuketim_miktari*1.91;
                printf("Atik Su Ucreti:%.2f TL \n",atik_su_ucreti);

                kdv_tutari=(su_tuketim_ucreti+atik_su_ucreti)*0.08;                     //KDV tutarý hesaplanýrken ücretlerin toplamýnýn %8'i alýnýr.
                printf("KDV Tutari:%.2f TL \n",kdv_tutari);

                fatura_tutari=(su_tuketim_ucreti+atik_su_ucreti+kdv_tutari);
                printf("Fatura Tutari:%.2f TL \n",fatura_tutari);
                     sayi1++;

                     }

                else if(13*gun_farki<su_tuketim_miktari && su_tuketim_miktari<=20*gun_farki/30){

                sayac1_2=konut1_2++;

                su_tuketim_ucreti=13*gun_farki/30*2.24+(su_tuketim_miktari-13*gun_farki/30)*5.78;
                printf("Su Tuketim Ucreti:%.2f TL \n",su_tuketim_ucreti);

                atik_su_ucreti=su_tuketim_miktari*1.91;
                printf("Atik Su Ucreti:%.2f TL \n",atik_su_ucreti);

                kdv_tutari=(su_tuketim_ucreti+atik_su_ucreti)*0.08;
                printf("KDV Tutari:%.2f TL \n",kdv_tutari);

                fatura_tutari=(su_tuketim_ucreti+atik_su_ucreti+kdv_tutari);
                printf("Fatura Tutari:%.2f TL \n",fatura_tutari);
                }

                else if(su_tuketim_miktari>20*gun_farki/30){

                sayac1_3=konut1_3++;                                                    //Abone sayýsýnýn yuzdesini hesaplamak için girilen abone tipi kadar sayac deðeri artar.

                su_tuketim_ucreti=13*gun_farki/30*2.24+7*gun_farki/30*5.78+(su_tuketim_miktari-20*gun_farki/30)*9.33;
                printf("Su Tuketim Ucreti:%.2f TL \n",su_tuketim_ucreti);

                atik_su_ucreti=su_tuketim_miktari*1.91;
                printf("Atik Su Ucreti:%.2f TL \n",atik_su_ucreti);

                kdv_tutari=(su_tuketim_ucreti+atik_su_ucreti)*0.08;
                printf("KDV Tutari:%.2f TL \n",kdv_tutari);

                fatura_tutari=(su_tuketim_ucreti+atik_su_ucreti+kdv_tutari);
                printf("Fatura Tutari:%.2f TL \n",fatura_tutari);
                    }
                     if(abone=1){
                        sayac1++;                                                        //Abone sayýsýný hesaplatmak için sayac deðeri artýrýlýr.
                        gun_farki1=gun_farki1+gun_farki;
                        toplam_tuketim1=toplam_tuketim1+su_tuketim_miktari;
                        toplam_su_tuketim_miktari_1+=su_tuketim_miktari;
                        toplam_su_tuk_ucreti_1+=su_tuketim_ucreti;
                                 }

                     if(max_su_tuk_ucreti<su_tuketim_ucreti){
                        max_su_tuk_abone=1;
                        max_su_tuk_miktari1=su_tuketim_miktari;
                        max_su_tuk_ucreti=su_tuketim_ucreti;
                                  }

                     if(max_atik_su_ucreti<atik_su_ucreti){
                        max_atik_su_abone=1;
                        max_su_tuk_miktari2=su_tuketim_miktari;
                        max_atik_su_ucreti=atik_su_ucreti;
                                }

                    if(max_tuketim_konut<konut_gunluk_ort_tuk)
                             max_tuketim_konut=konut_gunluk_ort_tuk;

                     break;
         case 2:

                sayac2_1=konut2_1++;
                gun_farki==gun_farki2;                                                   //Ýstatistikler kýsmýný hesaplarken ayrý ayrý iþlem yapmasý için gun farki abone tipine eþitlenir.

                if(su_tuketim_miktari<=((10*gun_farki)/30)){

                su_tuketim_ucreti=su_tuketim_miktari*7.71;
                printf("Su Tuketim Ucreti:%.2f TL \n",su_tuketim_ucreti);

                atik_su_ucreti=su_tuketim_miktari*3.79;
                printf("Atik Su Ucreti:%.2f TL \n",atik_su_ucreti);

                kdv_tutari=(su_tuketim_ucreti+atik_su_ucreti)*0.08;
                printf("KDV Tutari:%.2f TL \n",kdv_tutari);

                fatura_tutari=(su_tuketim_ucreti+atik_su_ucreti+kdv_tutari);
                printf("Fatura Tutari:%.2f TL \n",fatura_tutari);
                     }

                else{

                sayac2_2=konut2_2;

                su_tuketim_ucreti=((10*gun_farki)/30)*7.71+((su_tuketim_miktari)-(10*(gun_farki/30)))*8.88;
                printf("Su Tuketim Ucreti:%.2f TL \n",su_tuketim_ucreti);

                atik_su_ucreti=su_tuketim_miktari*3.79;
                printf("Atik Su Ucreti:%.2f TL \n",atik_su_ucreti);

                kdv_tutari=(su_tuketim_ucreti+atik_su_ucreti)*0.08;
                printf("KDV Tutari:%.2f TL \n",kdv_tutari);

                fatura_tutari=(su_tuketim_ucreti+atik_su_ucreti+kdv_tutari);
                printf("Fatura Tutari:%.2f \n",fatura_tutari);
                     sayi2++;
                     }
                     if(abone=2){
                        sayac2++;
                        gun_farki2=gun_farki2+gun_farki;                                  //Günlük ortalama tüketim miktarý hesaplanýrken o abone sayýsýna ait gün farkýnýn tamamý ele alýnýr.
                        toplam_tuketim2=toplam_tuketim2+su_tuketim_miktari;
                        toplam_su_tuketim_miktari_2+=su_tuketim_miktari;
                        toplam_su_tuk_ucreti_2+=su_tuketim_ucreti;
                                }

                    if(max_su_tuk_ucreti<su_tuketim_ucreti){
                       max_su_tuk_abone=2;
                       max_su_tuk_miktari1=su_tuketim_miktari;
                       max_su_tuk_ucreti=su_tuketim_ucreti;
                                }

                   if(max_atik_su_ucreti<atik_su_ucreti){
                      max_atik_su_abone=2;
                      max_su_tuk_miktari2=su_tuketim_miktari;
                      max_atik_su_ucreti=atik_su_ucreti;
                                }
                  break;
         case 3:

               gun_farki==gun_farki3;
               sayac3_1=konut3++;

               su_tuketim_ucreti=su_tuketim_miktari*6.64;
               printf("Su Tuketim Ucreti:%.2f TL \n",su_tuketim_ucreti);

               atik_su_ucreti=su_tuketim_miktari*2.56;
               printf("Atik Su Ucreti:%.2f TL \n",atik_su_ucreti);

               kdv_tutari=(su_tuketim_ucreti+atik_su_ucreti)*0.08;
               printf("KDV Tutari:%.2f \n",kdv_tutari);

               fatura_tutari=(su_tuketim_ucreti+atik_su_ucreti+kdv_tutari);
               printf("Fatura Tutari:%.2f TL \n",fatura_tutari);
                    if(abone=3){
                        sayac3++;
                        gun_farki3=gun_farki3+gun_farki;
                        toplam_tuketim3=toplam_tuketim3+su_tuketim_miktari;               //3. abone tipine ait olan kullanýlmýþ toplam su tüketim miktarý artarak eklenir.
                        toplam_su_tuketim_miktari_3=su_tuketim_miktari;
                        toplam_su_tuk_ucreti_3+=su_tuketim_ucreti;
                                }

                    if(max_su_tuk_ucreti<su_tuketim_ucreti){
                       max_su_tuk_abone=3;
                       max_su_tuk_miktari1=su_tuketim_miktari;
                       max_su_tuk_ucreti=su_tuketim_ucreti;
                                }

                   if(max_atik_su_ucreti<atik_su_ucreti){
                      max_atik_su_abone=3;
                      max_su_tuk_miktari2=su_tuketim_miktari;
                      max_atik_su_ucreti=atik_su_ucreti;
                                }
                   break;
         case 4:

               gun_farki==gun_farki4;
               sayac4_1=konut4++;

               su_tuketim_ucreti=su_tuketim_miktari*5.78;
               printf("Su Tuketim Ucreti:%.2f TL \n",su_tuketim_ucreti);

               atik_su_ucreti=su_tuketim_miktari*1.91;
               printf("Atik Su Ucreti:%.2f TL \n",atik_su_ucreti);

               kdv_tutari=(su_tuketim_ucreti+atik_su_ucreti)*0.08;
               printf("KDV Tutari:%.2f TL \n",kdv_tutari);

               fatura_tutari=(su_tuketim_ucreti+atik_su_ucreti+kdv_tutari);
               printf("Fatura Tutari:%.2f TL \n",fatura_tutari);
                    if(abone=4){
                    sayac4++;
                    gun_farki4=gun_farki4+gun_farki;
                    toplam_tuketim4=toplam_tuketim4+su_tuketim_miktari;
                    toplam_su_tuketim_miktari_4=su_tuketim_miktari;                       //Su tuketim miktari toplam su tuketim miktarina atanýr.
                    toplam_su_tuk_ucreti_4=su_tuketim_ucreti;
                                }

                    if(max_su_tuk_ucreti<su_tuketim_ucreti){
                       max_su_tuk_abone=4;
                       max_su_tuk_miktari1=su_tuketim_miktari;
                       max_su_tuk_ucreti=su_tuketim_ucreti;
                                }

                   if(max_atik_su_ucreti<atik_su_ucreti){
                      max_atik_su_abone=4;
                      max_su_tuk_miktari2=su_tuketim_miktari;                             //Kullanýlan en yüksek su tuketim miktari maksimuma atanýr.
                      max_atik_su_ucreti=atik_su_ucreti;
                                }
                   break;
                                }
                  toplam_atik_su_ucreti+=atik_su_ucreti;                                 //9. istatistiksel soruda cevaba ulaþabilmek için, girilen her veride atýk su ücretinin miktarý artar.
                  toplam_kdv_tutari+=kdv_tutari;                                         //Ödenecek olan toplam kdv tutarý,her veri giriþinde toplanarak eklenir.

      printf("\n\n\n");
      printf("baska abone var mi? :");
      scanf("%c",&baska_abone);

        do{
         scanf("%c",&baska_abone);
        }while(baska_abone=='n');
         printf("\n");

      while(baska_abone!='E' && baska_abone!='e' && baska_abone!='h' && baska_abone!='H'){
        printf("Karakterleri yanlis girdiniz,lutfen gecerli karakter giriniz: ");
        scanf("%s",&baska_abone);
      }
        }while(baska_abone=='E'||baska_abone=='e');                                      //"Baþka abone var mý?" sorusunun sentinel deðeri yazýlýr.


        printf("\n\n                                      ********** ISTATIKSEL SONUCLAR **********");
        printf("\n\n");
        printf("Abone Tipi\t\t Abone Sayisi\t\t Yuzde\t\t Gunluk Ort Tuk\t\t\n");

        printf("Konut\t\t\t %d\t\t\t ",sayac1);
        toplam_kisi=sayac1+sayac2+sayac3+sayac4;
        yuzde1=(sayac1/toplam_kisi)*100;
        printf("%%%.2f\t\t",yuzde1);
        gunluk_ort_tuk1=toplam_tuketim1/gun_farki1;
        printf("     %.2f ton\n",gunluk_ort_tuk1);

        printf("Isyeri\t\t\t %d\t\t\t ",sayac2);
        toplam_kisi=sayac1+sayac2+sayac3+sayac4;
        yuzde2=(sayac2/toplam_kisi)*100;
        printf("%%%.2f\t\t",yuzde2);
        gunluk_ort_tuk2=toplam_tuketim2/gun_farki2;
        printf("     %.2f ton\n",gunluk_ort_tuk2);

        printf("Kamu Kurumu\t\t %d\t\t\t ",sayac3);
        toplam_kisi=sayac1+sayac2+sayac3+sayac4;
        yuzde3=(sayac3/toplam_kisi)*100;
        printf("%%%.2f\t\t",yuzde3);
        gunluk_ort_tuk3=toplam_tuketim3/gun_farki3;
        printf("     %.2f ton\n",gunluk_ort_tuk3);

        printf("Turistik Tesis\t\t %d\t\t\t ",sayac4);
        toplam_kisi=sayac1+sayac2+sayac3+sayac4;
        yuzde4=(sayac4/toplam_kisi)*100;
        printf("%%%.2f\t\t",yuzde4);
        gunluk_ort_tuk4=toplam_tuketim4/gun_farki4;
        printf("     %.2f ton\n",gunluk_ort_tuk4);

        printf("\n\n\nAylik su tuketim miktari,1.kademeyi asmayan konut abonelerinin:\n");
        printf("sayisi:%d\n",sayi1);
        yuzde5=konut1_1/(konut1_1+konut1_2+konut1_3)*100;
        printf("yuzdesi:%%%.2f\n",yuzde5);

         printf("\n\n\nAylik su tuketim miktari,1. kademeyi asan isyeri abonelerinin:\n");
        printf("sayisi:%d\n",sayi2);
        yuzde6=konut2_1/(konut2_1+konut2_2)*100;
        printf("yuzdesi:%%%.2f\n",yuzde6);

        printf("\n\n\nGunluk ortalama su tuketim miktari en yuksek olan konut tipi abonenin gunluk ortalama su tuketim miktari:%.2f ton",max_tuketim_konut);

        printf("\n\nAylik su tuketim ucreti en yuksek olan abonenin:\n");

        if(max_su_tuk_abone==1){
           printf("abonenin tipi:Konut\n",max_su_tuk_abone);
                               }
        else if(max_su_tuk_abone==2){
                printf("abonenin tipi:Isyeri\n",max_su_tuk_abone);
                                    }
        else if(max_su_tuk_abone==3){
                printf("abonenin tipi:Kamu Kurumu\n",max_su_tuk_abone);
                                    }

        printf("aylik su tuketim miktari:%d ton\n",max_su_tuk_miktari1);
        printf("odedigi aylik su tuketim ucreti:%.2f TL",max_su_tuk_ucreti);

        printf("\n\nAylik atik su ucreti en yuksek olan abonenin:\n");
        if(max_atik_su_abone==1){
           printf("abonenin tipi:Konut\n",max_atik_su_abone);
                                 }
        else if(max_atik_su_abone==2){
                printf("abonenin tipi:Isyeri\n",max_atik_su_abone);
                                     }
        else if(max_atik_su_abone==3){
                printf("abonenin tipi:Kamu Kurumu\n",max_atik_su_abone);
                                     }

        printf("aylik su tuketim miktari:%d ton\n",max_su_tuk_miktari2);
        printf("odedigi aylik atik su ucreti:%.2f TL",max_atik_su_ucreti);

        printf("\n\nAbone Tipi\t\t Toplam Su Tuk Miktari\n");
        printf("Konut\t\t\t\t %d ton\n",toplam_su_tuketim_miktari_1);
        printf("Isyeri\t\t\t\t %d ton\n",toplam_su_tuketim_miktari_2);
        printf("Kamu kurumu\t\t\t %d ton\n",toplam_su_tuketim_miktari_3);
        printf("Turistik Tesis\t\t\t %d ton\n",toplam_su_tuketim_miktari_4);
        toplam1=toplam_su_tuketim_miktari_1+toplam_su_tuketim_miktari_2+toplam_su_tuketim_miktari_3+toplam_su_tuketim_miktari_4;
        printf("Toplam:\t\t\t\t %d ton\n",toplam1);

        printf("\n\nAbone Tipi\t\t Toplam Su Tuk Ucreti\n");
        printf("Konut\t\t\t\t %.2f TL\n",toplam_su_tuk_ucreti_1);
        printf("Isyeri\t\t\t\t %.2f TL\n",toplam_su_tuk_ucreti_2);
        printf("Kamu Kurumu\t\t\t %.2f TL\n",toplam_su_tuk_ucreti_3);
        printf("Turistik Tesis\t\t\t %.2f TL\n",toplam_su_tuk_ucreti_4);
        toplam2=toplam_su_tuk_ucreti_1+toplam_su_tuk_ucreti_2+toplam_su_tuk_ucreti_3+toplam_su_tuk_ucreti_4;
        printf("Toplam:\t\t\t\t %.2f TL\n",toplam2);

        printf("\n\n\nTum abonelerden elde edilen aylik toplam atik su ucreti:%.2f TL",toplam_atik_su_ucreti);

        printf("\n\n\nDevlete odenen aylik toplam KDV tutari:%.2f TL\n\n\n",toplam_kdv_tutari);

    return 0;
}

