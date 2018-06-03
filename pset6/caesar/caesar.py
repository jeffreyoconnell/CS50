import cs50
import sys

def main():
    if len(sys.argv) != 2:
        print("Not the correct number of arguments")
        exit(1)

    #get the key from the input and set up encoded[] which will contain the result
    key = int(sys.argv[1])
    encoded = []

    #get the message to be encoded from the user
    message = cs50.get_string("Message to encode: ")


    #loop through the message and use the function caesar (defined below) to encode the message
    for letter in message:
        if letter.isalpha():
            encoded.append(caesar(letter,key))
        else:
            encoded.append(letter)

    #print the encoded message
    print("ciphertext: ","".join(encoded))
    exit(0)


#define the fuction caesar that will do the encoding
def caesar(char, key):
    if char.isupper():
        return chr(((ord(char) - 65 + key) % 26) + 65)
    else:
        return chr(((ord(char) - 97 + key) % 26) + 97)

if __name__ == "__main__":
    main()
