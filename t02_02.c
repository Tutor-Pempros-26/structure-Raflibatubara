// 12S25008 - Rafli Batubara

#include <stdio.h>

struct Gizi {
    char nama_menu[20];
    char pesan[30];
};

int main() {
    struct Gizi data_makanan[6] = {
        {"", ""},
        {"staple food", "you need side dishes"},
        {"side dishes", "you need vegetables"},
        {"vegetables", "good"},
        {"fruits", "very good"},
        {"milk", "perfect"}
    };

    int level;
    
    scanf("%d", &level);

    for (int i = level; i >= 1; i--) {
        printf("%s\n", data_makanan[i].nama_menu);
    }
    
    printf("%s\n\n", data_makanan[level].pesan);

    return 0;
}