#!/usr/bin/env python3

def lsearch(B, value):
  for item in B:
    if ( item == value ):
      return B.index(item)
  return None

A = [31,41,59,26,41,58]

value1 = 36
value2 = 26

index1 = lsearch(A, value1)
index2 = lsearch(A, value2)

outstr = "for array ( "
for item in A:
  outstr = outstr + str(item) + " "
outstr = outstr + ")"

print(outstr)
print(value1, " is at index ", index1)
print(value2, " is at index ", index2)
