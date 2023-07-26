#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Crypto::Hash { enum class HashType; }
// clang-format on

namespace Crypto::Hash {

class HMAC {

public:
    // prevent constructor by default
    HMAC& operator=(HMAC const&) = delete;
    HMAC(HMAC const&)            = delete;
    HMAC()                       = delete;

public:
    /**
     * @symbol
     * ??0HMAC\@Hash\@Crypto\@\@QEAA\@W4HashType\@12\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI HMAC(enum class Crypto::Hash::HashType, std::string const&, int); // NOLINT
    /**
     * @symbol ?resultSize\@HMAC\@Hash\@Crypto\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 resultSize() const; // NOLINT
    /**
     * @symbol
     * ?signAndAppend\@HMAC\@Hash\@Crypto\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV45\@_K\@Z
     */
    MCAPI void signAndAppend(std::string const&, std::string&, unsigned __int64); // NOLINT
};

}; // namespace Crypto::Hash
