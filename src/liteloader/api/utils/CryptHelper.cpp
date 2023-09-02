#include "liteloader/api/utils/CryptHelper.h"

#include <openssl/evp.h>
#include <openssl/md5.h>
#include <openssl/sha.h>

using namespace std;

uchar* oldMD5(const uchar* d, size_t n, uchar* md) {
    EVP_MD_CTX*   c;
    static uchar* m;
    uint          md5_digest_len = EVP_MD_size(EVP_md5());


    if (md == NULL)
        md = m;
    c = EVP_MD_CTX_new();
    if (!EVP_DigestInit_ex(c, EVP_md5(), NULL))
        return NULL;
    EVP_DigestUpdate(c, d, n);
    m = (uchar*)OPENSSL_malloc(md5_digest_len);
    EVP_DigestFinal_ex(c, md, &md5_digest_len);
    EVP_MD_CTX_free(c);
    OPENSSL_cleanse(&c, sizeof(c)); /* security consideration */
    return md;
}

std::string CalcMD5(const std::string& str) {
    uchar       md5[MD5_DIGEST_LENGTH];
    const char  map[] = "0123456789abcdef";
    std::string hexmd5;

    oldMD5((const uchar*)str.c_str(), str.length(), md5);
    for (size_t i = 0; i < MD5_DIGEST_LENGTH; ++i) {
        hexmd5 += map[md5[i] / 16];
        hexmd5 += map[md5[i] % 16];
    }

    return hexmd5;
}

std::string CalcSHA1(const std::string& str) {
    uchar       sha1[SHA_DIGEST_LENGTH];
    const char  map[] = "0123456789abcdef";
    std::string hexsha1;

    SHA1((const uchar*)str.c_str(), str.length(), sha1);
    for (size_t i = 0; i < SHA_DIGEST_LENGTH; ++i) {
        hexsha1 += map[sha1[i] / 16];
        hexsha1 += map[sha1[i] % 16];
    }

    return hexsha1;
}
