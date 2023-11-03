#include "ll/api/utils/CryptoUtils.h"

#include "openssl/md5.h"
#include "openssl/sha.h"

#include "ll/api/base/StdInt.h"


namespace ll::utils::crypto_utils {

template <size_t N>
inline std::string cryptoTransfrom(std::string_view input, decltype(MD5) func) {
    uchar       md5[N];
    const char  map[] = "0123456789abcdef";
    std::string hexmd5;

    func(reinterpret_cast<const uchar*>(input.data()), input.length(), md5);
    for (auto& x : md5) {
        hexmd5 += map[x / 16];
        hexmd5 += map[x % 16];
    }

    return hexmd5;
}


std::string md5(std::string_view input) { return cryptoTransfrom<MD5_DIGEST_LENGTH>(input, MD5); }
std::string sha1(std::string_view input) { return cryptoTransfrom<SHA_DIGEST_LENGTH>(input, SHA1); }
std::string sha224(std::string_view input) { return cryptoTransfrom<SHA224_DIGEST_LENGTH>(input, SHA224); }
std::string sha256(std::string_view input) { return cryptoTransfrom<SHA256_DIGEST_LENGTH>(input, SHA256); }
std::string sha384(std::string_view input) { return cryptoTransfrom<SHA384_DIGEST_LENGTH>(input, SHA384); }
std::string sha512(std::string_view input) { return cryptoTransfrom<SHA512_DIGEST_LENGTH>(input, SHA512); }

} // namespace ll::utils::crypto_utils
