#include <Utils/CryptHelper.h>
#include <openssl/md5.h>
#include <openssl/sha.h>
using namespace std;

string CalcMD5(const string& str) {
    unsigned char md5[MD5_DIGEST_LENGTH];
    const char map[] = "0123456789abcdef";
    string hexmd5;

    MD5((const unsigned char*)str.c_str(), str.length(), md5);
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