import io
import sys
import re


def test_main_1():
    numbers = []
    totalavg = []
    with open('out.txt') as file:
        for i, f in enumerate(file):
            if i == 0:
                print (f.rstrip('\n'))
                res = re.split(r'\s', f)
                for v in res:
                    if v.isnumeric():
                        numbers.append(int(v))
                print (numbers)
            elif i == 1:
                print (f.rstrip('\n'))
                res = re.split(r'\s', f)
                for v in res:
                    if v.isnumeric():
                        totalavg.append(int(v))
                print (totalavg)

    expectedtotal = sum(numbers)
    expectedavg = sum(numbers) // len(numbers)

    assert expectedtotal == totalavg[0]
    assert expectedavg == totalavg[1]

            