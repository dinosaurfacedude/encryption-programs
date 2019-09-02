#ceasar cipher decryptor
#brute forces a string to find readable strings
import sys

#variables
i = 0
l = 0
n = 0
word = ''

#checks if argument given. If not, shows use documentation
try:
	file = open(sys.argv[1], 'r')
	message = file.read()
	l = len(message)
	print('message is length ', l)
	while i < 26:
		word = ''
		n = 0
		while n < l: 	 
			letter = ord(message[n])
			word = word + chr(letter - i)
			n = n + 1
		i = i + 1
		print(i, ' ' + word + '\n')
except IndexError:
	print('use: python3 caesar_brute.py filename.txt')
	exit(1)
except FileNotFoundError:
	print('file ' + sys.argv[1] + ' not found')
	exit(1)
