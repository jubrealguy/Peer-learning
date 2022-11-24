#!/usr/bin/python3

def roman_to_int(roman_string):
    sum = 0

    for i in range(len(roman_string)):

        if roman_string[i] == "I":
            sum += 1
        if roman_string[i] == "V" and roman_string[i - 1] == "I":
            sum += 4
        elif roman_string[i] == "V":
            sum += 5
        if roman_string[i] == "X" and roman_string[i - 1] == "I":
            sum += 9
        elif roman_string[i] == "X":
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
