#include "liteloader/api/utils/CryptHelper.h"

#include <openssl/md5.h>
#include <openssl/evp.h>
#include <openssl/sha.h>

using namespace std;

uint8_t *oldMD5(const uint8_t *d, size_t n, uint8_t *md)
{
    EVP_MD_CTX *c;
    static uint8_t *m;
    uint32_t md5_digest_len = EVP_MD_size(EVP_md5());


    if (md == NULL)
        md = m;
    c = EVP_MD_CTX_new();
    if (!EVP_DigestInit_ex(c, EVP_md5(), NULL))
        return NULL;
    EVP_DigestUpdate(c, d, n);
    m = (uint8_t *)OPENSSL_malloc(md5_digest_len);
    EVP_DigestFinal_ex(c, md, &md5_digest_len);
    EVP_MD_CTX_free(c);
    OPENSSL_cleanse(&c, sizeof(c)); /* security consideration */
    return md;
}

std::string CalcMD5(const std::string& str) {
    uint8_t md5[MD5_DIGEST_LENGTH];
    const char map[] = "0123456789abcdef";
    std::string hexmd5;

    oldMD5((const uint8_t*)str.c_str(), str.length(), md5);
    for (size_t i = 0; i < MD5_DIGEST_LENGTH; ++i) {
        hexmd5 += map[md5[i] / 16];
        hexmd5 += map[md5[i] % 16];
    }

    return hexmd5;
}

std::string CalcSHA1(const std::string& str) {
    uint8_t sha1[SHA_DIGEST_LENGTH];
    const char map[] = "0123456789abcdef";
    std::string hexsha1;

    SHA1((const uint8_t*)str.c_str(), str.length(), sha1);
    for (size_t i = 0; i < SHA_DIGEST_LENGTH; ++i) {
        hexsha1 += map[sha1[i] / 16];
        hexsha1 += map[sha1[i] % 16];
    }

    return hexsha1;
}
