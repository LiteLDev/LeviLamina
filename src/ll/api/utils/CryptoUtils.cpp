#include "ll/api/utils/CryptoUtils.h"

#include "openssl/md5.h"
#include "openssl/sha.h"

#include "ll/api/base/StdInt.h"


namespace ll::crypto {
std::string md5(std::string_view input) {
    uchar       md5[MD5_DIGEST_LENGTH];
    const char  map[] = "0123456789abcdef";
    std::string hexmd5;

    MD5(reinterpret_cast<const uchar*>(input.data()), input.length(), md5);
    for (auto& x : md5) {
        hexmd5 += map[x / 16];
        hexmd5 += map[x % 16];
    }

    return hexmd5;
}

std::string sha1(std::string_view input) {
    uchar       sha1[SHA_DIGEST_LENGTH];
    const char  map[] = "0123456789abcdef";
    std::string hexsha1;

    SHA1(reinterpret_cast<const uchar*>(input.data()), input.length(), sha1);
    for (auto& x : sha1) {
        hexsha1 += map[x / 16];
        hexsha1 += map[x % 16];
    }

    return hexsha1;
}
} // namespace ll::crypto
