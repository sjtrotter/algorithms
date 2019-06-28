#!/usr/bin/env python

def isort(*args):

  items = list(args)

  for j in range (1, len(items)):

    # store value of next item into key
    key = items[j]
    # get index of previous item
    i = j - 1

    # sort the key into the correct place
    while ( i > -1 and items[i] > key ):  # limit i to -1 to make sure in bounds
                                          # and compare to key; if greater,
                                          # swap them.
      items[i + 1] = items[i]
      i = i - 1
      # then, repeat until at beginning of list


    # reassign key to the next item
    items[i + 1] = key


  return items

print isort(5,2,4,6,1,3)
print isort(10,8,4,6,3,1,2,9,7,5,0)
