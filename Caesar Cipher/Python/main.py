class CaesarCipher:
    def __init__(self):
        pass

    def encrypt(self, plain_text: str, shift: int):
        encrypted_text = ''

        for char in plain_text:
            if char.isalpha():
                if (char.isupper()):
                    encrypted_text += chr((ord(char) + shift - ord('A')) % 26 + ord('A'))
                else:
                    encrypted_text += chr((ord(char) + shift - ord('a')) % 26 + ord('a'))
            else:
                encrypted_text += char

        return encrypted_text

    def decrypt(self, encrypted_text: str, shift: int):
        decrypted_text = ""
        for char in encrypted_text:
            if char.isalpha():
                if (char.isupper()):
                    decrypted_text += chr(((ord(char) - ord('A') - shift) % 26) + ord('A'))
                else:
                    decrypted_text +=  chr(((ord(char) - ord('a') - shift) % 26) + ord('a'))
            else:
                decrypted_text += char

        return decrypted_text

    def brute_force_decrypt(self, encrypted_text: str):
        for shift in range(1, 27):
            print(f"Shift: {shift} Text: {self.decrypt(encrypted_text, shift)}")

if __name__ == '__main__':
    cipher = CaesarCipher()
    decrypted_text = cipher.decrypt("Kvu'a qbknl h ivvr if paz jvcly", 7)
    print(decrypted_text)
    cipher.brute_force_decrypt("KRPCFIJNZWK")

    
    