#include <iostream>
#include <string>

class CaesarCipher
{
public:
    CaesarCipher()
    {
    }

    std::string encrypt(std::string input, int key)
    {
        std::string encrypted;
        for (char &letter : input)
        {
            if (isspace(letter))
            {
                encrypted += letter;
            }
            else
            {
                char c2;
                if (isascii(letter))
                {
                    if (islower(letter))
                    {
                        int val = letter - 'a';
                        val = (val + key) % 26;
                        c2 = 'a' + val;
                    }
                    else
                    {
                        int val = letter - 'A';
                        val = (val + key) % 26;
                        c2 = 'A' + val;
                    }
                }
                else
                {
                    std::cout << c2;
                    c2 = letter;
                }
                encrypted += c2;
            }
        }
        return encrypted;
    }

    std::string decrypt(std::string input, int key)
    {
        std::string decrypted;
        for (char &letter : input)
        {
            if (isspace(letter))
            {
                decrypted += letter;
            }
            else
            {
                char c2;
                if (isascii(letter))
                {
                    if (islower(letter))
                    {
                        int val = letter - 'a';
                        val = (val - key + 26) % 26; // Ensure the result is positive
                        c2 = 'a' + val;
                    }
                    else
                    {
                        int val = letter - 'A';
                        val = (val - key + 26) % 26; // Ensure the result is positive
                        c2 = 'A' + val;
                    }
                }
                else
                {
                    std::cout << c2;
                    c2 = letter;
                }
                decrypted += c2;
            }
        }
        return decrypted;
    }

    void brute_force(std::string input)
    {
        for (int i = 1; i < 27; i++)
        {
            std::cout << "Shifting '" << input << "' by " << i << " => " << decrypt(input, i) << "\n";
        }
    }
};

int main()
{
    CaesarCipher CaesarCipher;
    std::cout << "Encrypting 'Hello World!' with a key of 27: " << CaesarCipher.encrypt("Hello World!", 27) << "\n";
    std::cout << "Decrypting 'Ifmmp Xpsme<' with a key of 27: " << CaesarCipher.decrypt("Ifmmp Xpsme<", 27) << "\n";
    CaesarCipher.brute_force("D gjqz Xjyz");

    return 0;
}
