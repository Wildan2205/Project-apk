print("=== PEMBELAJARAN MATEMATIKA ===")
print("Latihan Operator Aritmatika\n")

nama = input("Masukkan nama: ")

print("\nHalo,", nama)
print("Pilih soal:")
print("1. Penjumlahan")
print("2. Pengurangan")
print("3. Perkalian")
print("4. Pembagian")
print("5. Modulus")

pilihan = int(input("Pilihan: "))

angka1 = int(input("Masukkan angka pertama: "))
angka2 = int(input("Masukkan angka kedua: "))

if pilihan == 1:
    hasil = angka1 + angka2
    print("Hasil penjumlahan =", hasil)

elif pilihan == 2:
    hasil = angka1 - angka2
    print("Hasil pengurangan =", hasil)

elif pilihan == 3:
    hasil = angka1 * angka2
    print("Hasil perkalian =", hasil)

elif pilihan == 4:
    hasil = angka1 / angka2
    print("Hasil pembagian =", hasil)

elif pilihan == 5:
    hasil = angka1 % angka2
    print("Sisa pembagian =", hasil)

else:
    print("Pilihan tidak tersedia.")
