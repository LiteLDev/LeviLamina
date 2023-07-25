#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Crypto::Hash { enum class HashType; }
// clang-format on

namespace Crypto::Hash {

class HMAC {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRYPTO_HASH_HMAC
public:
    HMAC& operator=(HMAC const&) = delete;
    HMAC(HMAC const&)            = delete;
    HMAC()                       = delete;
#endif

public:
    /**
     * @symbol
     * ??0HMAC\@Hash\@Crypto\@\@QEAA\@W4HashType\@12\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI HMAC(enum class Crypto::Hash::HashType, std::string const&, int);
    /**
     * @symbol ?resultSize\@HMAC\@Hash\@Crypto\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 resultSize() const;
    /**
     * @symbol
     * ?signAndAppend\@HMAC\@Hash\@Crypto\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV45\@_K\@Z
     */
    MCAPI void signAndAppend(std::string const&, std::string&, unsigned __int64);
};

}; // namespace Crypto::Hash
