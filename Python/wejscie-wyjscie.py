#!/usr/bin/env python
# -*- coding: utf-8 -*-


def main(args):
    m = float(input("Podaj masę: "))

    print(m)
    w = float(input("Podaj wzrost w metrach: "))

    print(w)

    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
