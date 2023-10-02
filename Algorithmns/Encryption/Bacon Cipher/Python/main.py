class BaconCipher:
    def __init__(self, use_original_alphabet=True):
        self.use_original_alphabet = use_original_alphabet
        if self.use_original_alphabet:
            original_alphabet = {'A': 'AAAAA', 'B': 'AAAAB', 'C': 'AAABA', 'D': 'AAABB', 'E': 'AABAA',
              'F': 'AABAB', 'G': 'AABBA', 'H': 'AABBB', 'I': 'ABAAA', 'J': 'ABAAA',
              'K': 'ABABA', 'L': 'ABABB', 'M': 'ABBAA', 'N': 'ABBAB', 'O': 'ABBBA',
              'P': 'ABBBB', 'Q': 'BAAAA', 'R': 'BAAAB', 'S': 'BAABA', 'T': 'BAABB',
              'U': 'BABAA', 'V': 'BABAA', 'W': 'BABBA', 'X': 'BABBB', 'Y': 'BBAAA', 'Z': 'BBAAB'}
            self.alphabet = original_alphabet
        else:
            full_alphabet = {'A': 'AAAAA', 'B': 'AAAAB', 'C': 'AAABA', 'D': 'AAABB', 'E': 'AABAA',
              'F': 'AABAB', 'G': 'AABBA', 'H': 'AABBB', 'I': 'ABAAA', 'J': 'ABAAB',
              'K': 'ABABA', 'L': 'ABABB', 'M': 'ABBAA', 'N': 'ABBAB', 'O': 'ABBBA',
              'P': 'ABBBB', 'Q': 'BAAAA', 'R': 'BAAAB', 'S': 'BAABA', 'T': 'BAABB',
              'U': 'BABAA', 'V': 'BABAB', 'W': 'BABBA', 'X': 'BABBB', 'Y': 'BBAAA', 'Z': 'BBAAB'}
            self.alphabet = full_alphabet

    def encrypt(self, plain_text: str):
        return "".join(
            self.alphabet[char.upper()] if char.isalpha() else ''
            for char in plain_text
        )

    def decrypt(self, encrypted_text):
        decrypted_text = ''
        alphabet_swap = {v: k for k, v in self.alphabet.items()}
        for i in range(0, len(encrypted_text), 5):
            if chunk := encrypted_text[i : i + 5]:
                decrypted_text += alphabet_swap[chunk.upper()]

        return decrypted_text



if __name__ == '__main__':
    cipher = BaconCipher(False)
    print(cipher.decrypt('AAABAABABBBABABBABABBAABAABAAABAABAABBBABABABAAAAA'))
