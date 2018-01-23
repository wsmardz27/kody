#!/usr/bin/env python
# -*- coding: utf-8 -*-
#  


def main(args):
    n = 0
    n = int(input("Podaj liczbę: "))
    
    i = 2
    while n % i != 0:
        if i * i <= n:
            print("Liczba pierwsza")
        i += 1
    print("Liczba złożona")
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
