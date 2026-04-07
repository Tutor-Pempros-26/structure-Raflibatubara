// 12S25008 - Rafli Batubara

#include <stdio.h>

struct Pembelian {
    int jumlah_buku;
    float harga_satuan;
    float total_harga;
    float diskon;
    float total_bayar;
};

int main() {
    struct Pembelian transaksi;

    scanf("%d", &transaksi.jumlah_buku);
    scanf("%f", &transaksi.harga_satuan);

    transaksi.total_harga = transaksi.jumlah_buku * transaksi.harga_satuan;

    if (transaksi.total_harga > 500000) {
        transaksi.diskon = transaksi.total_harga * 0.15;
    } else if (transaksi.total_harga >= 100000) {
        transaksi.diskon = transaksi.total_harga * 0.10;
    } else if (transaksi.total_harga > 50000) {
        transaksi.diskon = transaksi.total_harga * 0.05;
    } else {
        transaksi.diskon = 0.0;
    }

    transaksi.total_bayar = transaksi.total_harga - transaksi.diskon;

    printf("%.2f\n", transaksi.diskon);
    printf("%.2f\n", transaksi.total_bayar);

    return 0;
}
