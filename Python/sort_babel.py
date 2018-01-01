#!/usr/bin/env python
# -*- coding: utf-8 -*-

from random import randint

def wypelnij(tab, ile, maks):
    for i in range(ile):
        tab.append(randint(0,maks))
    return tab


def sort_babel(tab):
    for i in range(len(tab)):
        for j in range(i + 1, len(tab)):
            if tab[j-1] > tab[j]:
                tab[j-1], tab[j] = tab[j], tab[j-1]
    return tab
    


def main(args):
    tab = []
    print(wypelnij(tab,10,20))
    print(sort_babel(tab))
    return 0
    
if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
