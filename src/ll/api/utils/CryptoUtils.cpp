#include "ll/api/utils/CryptoUtils.h"
#include "mc/deps/crypto/hash/Hash.h"


namespace ll::inline utils::crypto_utils {

std::string hash(::Crypto::Hash::HashType type, std::string_view sv) {
    auto e = Crypto::Hash::Hash(type);
    e.update(sv);
    return e.toString();
}

std::string md5(std::string_view input) { return hash(Crypto::Hash::HashType::MD5, input); }
std::string sha1(std::string_view input) { return hash(Crypto::Hash::HashType::SHA1, input); }
std::string sha256(std::string_view input) { return hash(Crypto::Hash::HashType::SHA256, input); }
std::string sha384(std::string_view input) { return hash(Crypto::Hash::HashType::SHA384, input); }
std::string sha512(std::string_view input) { return hash(Crypto::Hash::HashType::SHA512, input); }

} // namespace ll::inline utils::crypto_utils
