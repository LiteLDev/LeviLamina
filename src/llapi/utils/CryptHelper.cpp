#include "llapi/utils/CryptHelper.h"

#include <openssl/md5.h>
#include <openssl/evp.h>
#include <openssl/sha.h>

using namespace std;

unsigned char *oldMD5(const unsigned char *d, size_t n, unsigned char *md)
{
    EVP_MD_CTX *c;
    static unsigned char *m;
    unsigned int md5_digest_len = EVP_MD_size(EVP_md5());


    if (md == NULL)
        md = m;
    c = EVP_MD_CTX_new();
    if (!EVP_DigestInit_ex(c, EVP_md5(), NULL))
        return NULL;
    EVP_DigestUpdate(c, d, n);
    m = (unsigned char *)OPENSSL_malloc(md5_digest_len);
    EVP_DigestFinal_ex(c, md, &md5_digest_len);
    EVP_MD_CTX_free(c);
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
