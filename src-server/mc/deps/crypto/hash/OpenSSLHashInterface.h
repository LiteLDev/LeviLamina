#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/hash/HashType.h"
#include "mc/deps/crypto/hash/IHash.h"

namespace Crypto::Hash {

class OpenSSLHashInterface : public ::Crypto::Hash::IHash {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::Crypto::Hash::HashType> mHashType;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::evp_md_ctx_st>> mHashPointer;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OpenSSLHashInterface() /*override*/ = default;

    // vIndex: 1
    virtual void reset() /*override*/;

    // vIndex: 2
    virtual void update(void const* data, uint size) /*override*/;

    // vIndex: 3
    virtual void final(uchar* result) /*override*/;

    // vIndex: 4
    virtual uint64 resultSize() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $reset();

    MCAPI void $update(void const* data, uint size);

    MCAPI void $final(uchar* result);

    MCAPI uint64 $resultSize() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
