#!/usr/bin/python3

from dis import dis

magic = __import__("103-magic_class").MagicClass
print(dis(magic))
