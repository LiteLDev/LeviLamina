#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/hash/HashType.h"

namespace Crypto::Hash {

class HMAC {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnke17119;
    ::ll::UntypedStorage<8, 32> mUnk1add80;
    ::ll::UntypedStorage<4, 4>  mUnkf50a18;
    // NOLINTEND

public:
    // prevent constructor by default
    HMAC& operator=(HMAC const&);
    HMAC(HMAC const&);
    HMAC();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI HMAC(::Crypto::Hash::HashType type, ::std::string const& key, int resultSize);

    MCNAPI void signAndAppend(::std::string const& data, ::std::string& out, uint64 counter);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Crypto::Hash::HashType type, ::std::string const& key, int resultSize);
    // NOLINTEND
};

} // namespace Crypto::Hash
