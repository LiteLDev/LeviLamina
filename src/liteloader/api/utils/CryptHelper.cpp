#include "liteloader/api/utils/CryptHelper.h"

#include <openssl/md5.h>
#include <openssl/sha.h>

using namespace std;

std::string CalcMD5(const std::string& str) {
    uchar       md5[MD5_DIGEST_LENGTH];
    const char  map[] = "0123456789abcdef";
    std::string hexmd5;

    MD5((const uchar*)str.c_str(), str.length(), md5);
    for (auto& x : md5) {
        hexmd5 += map[x / 16];
        hexmd5 += map[x % 16];
    }

    return hexmd5;
}

std::string CalcSHA1(const std::string& str) {
    uchar       sha1[SHA_DIGEST_LENGTH];
    const char  map[] = "0123456789abcdef";
    std::string hexsha1;

    SHA1((const uchar*)str.c_str(), str.length(), sha1);
    for (auto& x : sha1) {
        hexsha1 += map[x / 16];
        hexsha1 += map[x % 16];
    }

    return hexsha1;
}
