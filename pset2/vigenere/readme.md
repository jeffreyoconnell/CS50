# Vigenere

Implement a program that encrypts messages using Vigenère’s cipher, per the below.

\$ ./vigenere ABC

plaintext:  HELLO

ciphertext: HFNLP

## Background

Vigenère’s cipher improves upon Caesar’s cipher by encrypting messages using a sequence 
of keys (or, put another way, a keyword). In other words, if p is some plaintext and k 
is a keyword (i.e., an alphbetical string, whereby A represents 0, B represents 1, C 
represents 2, …​, and Z represents 25), then each letter, ci, in the ciphertext, c, is 
computed as:
$ \frac{4}{5} $
