#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/hash/HashType.h"

// auto generated forward declare list
// clang-format off
namespace Crypto::Hash { class IHash; }
// clang-format on

namespace Crypto::Hash {

class HMAC {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Crypto::Hash::IHash>> mHash;
    ::ll::TypedStorage<8, 32, ::std::string>                           mKey;
    ::ll::TypedStorage<4, 4, int>                                      mResultSize;
    // NOLINTEND

public:
    // prevent constructor by default
    HMAC();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI HMAC(::Crypto::Hash::HashType type, ::std::string const& key, int resultSize);

    MCAPI void _final(::std::string& out);

    MCAPI void signAndAppend(::std::string const& data, ::std::string& out, uint64 counter);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Crypto::Hash::HashType type, ::std::string const& key, int resultSize);
    // NOLINTEND
};

} // namespace Crypto::Hash
