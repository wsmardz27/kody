#!/usr/bin/env python
# -*- coding: utf-8 -*-

from random import randint

def wypelnij(lista, ile, maks):
    

    for i in range(ile):
        lista.append(randint(0,maks))
    return lista


def sort_wyb(lista):
    
	for i in range(len(lista)):
		k = i 
		for j in range(i + 1, len(lista)):
			if lista[j] < lista[k]:
				k = j
                lista[j], lista[k] = lista[k], lista[j]
    return lista
    
    
def main(args):
    
    lista = []
    print(wypelnij(lista,10,20))
    print(sort_wyb(lista))
    return 0
    
    
if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))