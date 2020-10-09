# -*- coding: utf-8 -*-
"""
Created on Wed Sep 16 12:11:55 2020

@author: user
"""


n = 2097151
rem = 1048576
ans = rem
print(rem)
while ans<n:
    ans += rem//2
    print(ans)
    rem = rem//2
    
