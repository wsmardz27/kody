#!/usr/bin/env python
# -*- coding: utf-8 -*-
# a0 = 1
# a1 = a
# an = a * ... * a (n-czynników) dla N+ - {1}


def potega_it(podst, wykladnik):
    """Funkcja oblicza iteracyjnie potęgę liczby naturalnej"""
    wynik = 1
    for i in range(wykladnik):
        wynik = wynik*i
    return wynik

def main(args):
    # pobierz od użytkownika podstawę i wykładnik 
    # i przypisz do odpowiednich zmiennych
    # wywołaj funkcje potęga_it() 
    int(input("Podaj podstawę: "))
    int(input("Podaj wykładnik: "))
    return 0

    
if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
