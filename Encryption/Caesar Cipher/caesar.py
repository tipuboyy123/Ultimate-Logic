# an implementation of the CaesarCipher
# Author: @ladokp

class CaesarCipher(object):

    def __init__(self, offset: int):
        self.offset = offset

    def encode(self, message: str, shifting_mode: int = 1):
        return_value = ""

        for i in range(len(message)):
            c = message[i]

            if c.isupper():
                return_value += chr((ord(c) + (shifting_mode * self.offset) - 65) % 26 + 65)
            else:
                return_value += chr((ord(c) + (shifting_mode * self.offset) - 97) % 26 + 97)

        return return_value

    def decode(self, message: str):
        return self.encode(message, shifting_mode=-1)


# Little test program for CaesarCipher class
offset = int(input("Enter offset: "))
message = input("Enter message to encrypt: ")

encryptor = CaesarCipher(offset)
encoded_message = encryptor.encode(message)

print("Encrypted text: {0}".format(encoded_message))
print("Decrypted text: {0}".format(encryptor.decode(encoded_message)))