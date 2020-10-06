# an implementation of the ReverseCipher
# Author: @ladokp

class ReverseCipher(object):

    def encode(self, message: str):
        return message[::-1]

    def decode(self, message: str):
        return self.encode(message)


# Little test program for ReverseCipher class
message = input("Enter message to encrypt: ")

encryptor = ReverseCipher()
encoded_message = encryptor.encode(message)

print("Encrypted text: {0}".format(encoded_message))
print("Decrypted text: {0}".format(encryptor.decode(encoded_message)))