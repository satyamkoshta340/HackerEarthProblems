# -*- coding: utf-8 -*-
"""
Created on Tue Sep  8 08:39:17 2020

@author: user
"""

import math as m
n = int(input())
if n== 1:
    print(0)
    exit()
if n==2:
    print(1)
    exit()
ans = m.log(n)/m.log(3)
if ans%m.floor(ans) !=0:
    print(m.floor(ans)+1)
else:
    print(m.floor(ans))
    