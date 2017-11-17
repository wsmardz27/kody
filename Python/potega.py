#!/usr/bin/env python
# -*- coding: utf-8 -*-
# a0 = 1
# a1 = a
# an = a * ... * a (n-czynników) dla N+ - {1}


def potega_it(podst, wykladnik):
    """Funkcja oblicza iteracyjnie potęgę liczby naturalnej"""
    wynik = 1
    for i in range(wykladnik):
        wynik = wynik * podst
    return wynik

def main(args):
    # pobierz od użytkownika podstawę i wykładnik
    # i przypisz do odpowiednich zmiennych
    # wywołaj funkcje potega_it()

    a = int(input("Podaj podstawę: "))
    n = int(input("Podaj wykładnik: "))
    assert type(a) == int
    assert type(n) == int

    assert potega_it(10, 0) == 1
    assert potega_it(10, 1) == 10
    assert potega_it(2, 3) == 8


    # print("Wynik: ", potega_it(a, n))

    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))