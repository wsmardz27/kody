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


# a0 = 1 - warunek brzegowy
# an = a(n-1) * a dla n > 0


def potega_rek(podst, wykladnik):
    if wykladnik == 0:
        return 1
    return potega_rek(podst, wykladnik - 1) * podst


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
    assert potega_rek(2, 3) == 8

    print("Wynik: ", potega_rek(podst, wykladnik))

    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
