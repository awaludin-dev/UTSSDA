#include <bits/stdc++.h>
using namespace std;

string daftarPesanan[99];
int panjangPesanan = 0;

void pisahKata(string str, char seperator)
{
    int currIndex = 0, i = 0;
    int startIndex = 0, endIndex = 0;
    while (i <= str.length())
    {
        if (str[i] == seperator || i == str.length())
        {
            endIndex = i;
            string subStr = "";
            subStr.append(str, startIndex, endIndex - startIndex);
            daftarPesanan[currIndex] = subStr;
            currIndex += 1;
            startIndex = endIndex + 1;
            panjangPesanan++;
        }
        i++;
    }
}

int cariIndex(string str[], string teks)
{
    int index = 0;
    for (int i = 0; i < 5; i++)
    {
        if (str[i] == teks)
        {
            index = i;
            break;
        }
    }
    return index;
}

int main()
{
    string daftarMakanan[5] = {"Soto", "Rawon", "Pecel", "Bakso", "Siomay"};
    int hargaMakanan[5] = {15000, 20000, 10000, 12500, 25000};
    string masukkan;
    int posisi, totalHarga = 0;
    getline(cin, masukkan);
    pisahKata(masukkan, ' ');
    cout << "Total Harga : " << endl;
    for (int i = 0; i < panjangPesanan; i++)
    {
        if (i % 2 == 0)
        {
            cout << "\t(\xfb) " << daftarPesanan[i];
            posisi = cariIndex(daftarMakanan, daftarPesanan[i]);
        }
        else
        {
            cout << " @" << hargaMakanan[posisi] << " * " << daftarPesanan[i] << " = " << hargaMakanan[posisi] * stoi(daftarPesanan[i]) << endl;
            totalHarga += hargaMakanan[posisi] * stoi(daftarPesanan[i]);
        }
    }
    cout << "Total = " << totalHarga;

    return 0;
}