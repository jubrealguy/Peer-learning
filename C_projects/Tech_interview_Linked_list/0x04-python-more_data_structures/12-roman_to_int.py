#!/usr/bin/python3
"""
I = 1 
IV = 4
V = 5
IX = 9
X = 10
xL = 40
L = 50
XC = 90
C = 100
CD = 400
D = 500
CM = 900
M = 1000

VI
"""

def roman_to_int(roman_string):
    sum = 0

    for i in range(len(roman_string)):
        if roman_string[i] == "X" and roman_string[i - 1] == "I":
            sum += 9
        if roman_string[i] == "V" and roman_string[i - 1] == "I":
            sum += 4
        if roman_string[i] == "V":
            sum += 5
        if roman_string[i] == "I":
            sum += 1
        if roman_string[i] == "X":
            sum += 10
        if roman_string[i] == "L" and roman_string[i - 1] == "X":
            sum += 40
        if roman_string[i] == "L":
            sum += 50
        if roman_string[i] == "C" and roman_string[i - 1] == "X":
            sum += 90
        if roman_string[i] == "C":
            sum += 100
        if roman_string[i] == "D" and roman_string[i - 1] == "C":
            sum += 400
        if roman_string[i] == "D":
            sum += 500
        if roman_string[i] == "M" and roman_string[i - 1] == "C":
            sum += 900
        if roman_string[i] == "M":
            sum += 1000
    return sum;
