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
    // vIndex: 0
    virtual ~NullSSLHashInterface() /*override*/ = default;

    // vIndex: 1
    virtual void reset() /*override*/;

    // vIndex: 2
    virtual void update(void const*, uint) /*override*/;

    // vIndex: 3
    virtual void final(uchar*) /*override*/;

    // vIndex: 4
    virtual uint64 resultSize() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Crypto::Hash
