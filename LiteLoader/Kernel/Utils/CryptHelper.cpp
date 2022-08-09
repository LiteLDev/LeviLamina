#include <Utils/CryptHelper.h>
#include <openssl/md5.h>
#include <openssl/crypto.h>
#include <openssl/sha.h>
using namespace std;

unsigned char *oldMD5(const unsigned char *d, size_t n, unsigned char *md)
{
    MD5_CTX c;
    static unsigned char m[MD5_DIGEST_LENGTH];

    if (md == NULL)
        md = m;
    if (!MD5_Init(&c))
        return NULL;
#ifndef CHARSET_EBCDIC
    MD5_Update(&c, d, n);
#else
    {
        char temp[1024];
        unsigned long chunk;

        while (n > 0) {
            chunk = (n > sizeof(temp)) ? sizeof(temp) : n;
            ebcdic2ascii(temp, d, chunk);
            MD5_Update(&c, temp, chunk);
            n -= chunk;
            d += chunk;
        }
    }
#endif
    MD5_Final(md, &c);
    OPENSSL_cleanse(&c, sizeof(c)); /* security consideration */
    return md;
}

string CalcMD5(const string& str) {
    unsigned char md5[MD5_DIGEST_LENGTH];
    const char map[] = "0123456789abcdef";
    string hexmd5;

    oldMD5((const unsigned char*)str.c_str(), str.length(), md5);
    for (size_t i = 0; i < MD5_DIGEST_LENGTH; ++i) {
        hexmd5 += map[md5[i] / 16];
        hexmd5 += map[md5[i] % 16];
    }

    return hexmd5;
}

string CalcSHA1(const string& str) {
    unsigned char sha1[SHA_DIGEST_LENGTH];
    const char map[] = "0123456789abcdef";
    string hexsha1;

    SHA1((const unsigned char*)str.c_str(), str.length(), sha1);
    for (size_t i = 0; i < SHA_DIGEST_LENGTH; ++i) {
        hexsha1 += map[sha1[i] / 16];
        hexsha1 += map[sha1[i] % 16];
    }

    return hexsha1;
}