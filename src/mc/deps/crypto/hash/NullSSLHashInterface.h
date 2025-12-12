#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/hash/IHash.h"
#include "mc/deps/crypto/hash/md5.h"

namespace Crypto::Hash {

class NullSSLHashInterface : public ::Crypto::Hash::IHash {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 160, ::Crypto::Hash::md5> mMd5;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NullSSLHashInterface() /*override*/ = default;

    virtual void reset() /*override*/;

    virtual void update(void const*, uint) /*override*/;

    virtual void final(uchar*) /*override*/;

    virtual uint64 resultSize() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Crypto::Hash
