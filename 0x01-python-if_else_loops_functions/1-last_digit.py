#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)
digit = abs(number) % 10
if number < 0:
    digit *= -1
if digit > 5:
    print("Last digit of {:d} is {:d} and is greater than 5"
          .format(number, int(digit)))
elif digit == 0:
    print("Last digit of {:d} is {:d} and is 0".format(number, int(digit)))
else:
    print("Last digit of {:d} is {:d} and is less than 6 and not 0"
          .format(number, int(digit)))
