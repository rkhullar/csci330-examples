#!/usr/bin/env python

"""
@author		:  Rajan Khullar
@created	:  03/14/16
@updated	:  03/14/16
"""

import sys

if __name__ == '__main__':

	# check for correct number of args
	if len(sys.argv) < 3:
		print 'missing parameters'
		sys.exit(1)

	# pass message
	msg = sys.argv[1]

	# pass number
	try:
		n = int(sys.argv[2])
	except ValueError:
		print 'invalid number'
		sys.exit(1)

	# print message specified number of times
	for i in range(n):
		print msg
