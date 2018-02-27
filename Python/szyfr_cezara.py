#!/usr/bin/env python
# -*- coding: utf-8 -*-


def szyfruj(tekst, klucz):
    """Szyfrowanie tekstu za pomoca szyfru Cezara"""
    szyfrogram = ""
    klucz = klucz % 26
    
    for i in tekst:
        ascii = ord(i) + klucz
        if ord(i) == 32:
            ascii = 32
        if ascii > 90 and ascii < 97 or ascii > 122:
            ascii -= 26
        # elif ascii > 122:
        #     ascii -= 26

        szyfrogram += chr(ascii)

    return szyfrogram

def deszyfruj(szyfrogram, klucz):
    tekst = ""
    for i in szyfrogram:
        ascii = ord(i) - klucz
        # print(i, ascii)
        if ord(i) == 32:
            ascii = 32
        if ascii < 65 and ascii != 32:
            ascii += 26
        if ascii > 90 and ascii < 97 and ascii != 32:
            ascii += 26
        if i.isdigit():
            ascii -= 26
        # print(i, ascii)
        tekst += chr(ascii)

    return tekst
   

#  obsłużyć małe i duże litery
#  obsłużyć spacje


def main(args):
    tekst = input("Podaj tekst: ")
    klucz = int(input("Podaj klucz: "))
    szyfrogram = szyfruj(tekst, klucz)
    print(szyfrogram)
    print(deszyfruj(szyfrogram, klucz))

    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
