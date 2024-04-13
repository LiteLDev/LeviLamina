#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/hash/HashType.h"

namespace Crypto::Hash {

class HMAC {
public:
    // prevent constructor by default
    HMAC& operator=(HMAC const&);
    HMAC(HMAC const&);
    HMAC();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0HMAC@Hash@Crypto@@QEAA@W4HashType@12@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI HMAC(::Crypto::Hash::HashType type, std::string const& key, int resultSize);

    // symbol: ?resultSize@HMAC@Hash@Crypto@@QEBA_KXZ
    MCAPI uint64 resultSize() const;

    // symbol:
    // ?signAndAppend@HMAC@Hash@Crypto@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV45@_K@Z
    MCAPI void signAndAppend(std::string const& data, std::string& out, uint64 counter);

    // NOLINTEND
};

}; // namespace Crypto::Hash
