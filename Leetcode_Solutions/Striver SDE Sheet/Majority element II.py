from os import *
from sys import *
from collections import *
from math import *

def majorityElementII(arr):
	# Write your code here.
    dict1 = dict()
    for i in arr:
        if i in dict1:
            dict1[i] += 1
        else:
            dict1[i] = 1
    val = len(arr)/3
    final = []
    for key, value in dict1.items():
        if value > val:
            final.append(key)
            
    return final
    
    
