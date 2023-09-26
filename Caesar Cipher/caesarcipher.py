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

    encrypted_text = cipher.encrypt('Hello World', 13)
    assert encrypted_text == 'Uryyb Jbeyq', f"Test case 1 failed. Expected 'Uryyb Jbeyq', but got '{encrypted_text}'"

    decrypted_text = cipher.decrypt('Uryyb Jbeyq', 13)
    assert decrypted_text == 'Hello World', f"Test case 2 failed. Expected 'Hello World', but got '{decrypted_text}'"

    encrypted_text = cipher.encrypt('123 456', 3)
    assert encrypted_text == '123 456', f"Test case 3 failed. Expected '123 456', but got '{encrypted_text}'"

    decrypted_text = cipher.decrypt('AbCdEfG', 1)
    assert decrypted_text == 'ZaBcDeF', f"Test case 4 failed. Expected 'ZaBcDeF', but got '{decrypted_text}'"
    
    