#include <stdio.h>
#include <stdlib.h>

// 1. Yapı Tanımları (En üstte olmalı)
typedef struct {
    int teklifveren_no;
    double teklif_miktari;
} Teklif;

typedef struct {
    int katilimci_sayisi;
    int teklifveren_sayisi;
    Teklif teklifler[50];
} Artirma;

typedef struct {
    int teklifveren_no;
    double odeme_miktari;
} KazananTeklifSahibi;

// 2. Fonksiyon Tanımları
void acikarttirma(Artirma a, KazananTeklifSahibi *kazanan) {
    int kazanan_no = -1;
    double en_yuksek_teklif = -1.0;
    for (int i = 0; i < a.teklifveren_sayisi; i++) {
        if (a.teklifler[i].teklif_miktari > en_yuksek_teklif) {
            en_yuksek_teklif = a.teklifler[i].teklif_miktari;
            kazanan_no = i;
        }
    }
    kazanan->teklifveren_no = a.teklifler[kazanan_no].teklifveren_no;
    kazanan->odeme_miktari = a.teklifler[kazanan_no].teklif_miktari;

    double toplam_teklif = 0.0;
    for (int i = 0; i < a.teklifveren_sayisi; i++) {
        if (i != kazanan_no) {
            toplam_teklif += a.teklifler[i].teklif_miktari;
        }
    }
    kazanan->odeme_miktari += toplam_teklif;
}

void odemeyi_goster(KazananTeklifSahibi kazanan) {
    printf("Kazanan Teklif Sahibi: %d\n", kazanan.teklifveren_no);
    printf("Odeme Miktari: %.2f\n", kazanan.odeme_miktari);
}

// 3. Ana Program (Sadece bir tane olmalı)
int main() {
    Artirma a;
    KazananTeklifSahibi kazanan;

    a.katilimci_sayisi = 3;
    a.teklifveren_sayisi = 3;

    a.teklifler[0].teklifveren_no = 1;
    a.teklifler[0].teklif_miktari = 500.0;
    a.teklifler[1].teklifveren_no = 2;
    a.teklifler[1].teklif_miktari = 700.0;
    a.teklifler[2].teklifveren_no = 3;
    a.teklifler[2].teklif_miktari = 900.0;

    acikarttirma(a, &kazanan);
    odemeyi_goster(kazanan);

    return 0;
}
