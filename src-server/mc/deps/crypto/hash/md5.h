#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/hash/IHash.h"

namespace Crypto::Hash {

class md5 : public ::Crypto::Hash::IHash {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>       _lo;
    ::ll::TypedStorage<4, 4, uint>       _hi;
    ::ll::TypedStorage<4, 4, uint>       _a;
    ::ll::TypedStorage<4, 4, uint>       _b;
    ::ll::TypedStorage<4, 4, uint>       _c;
    ::ll::TypedStorage<4, 4, uint>       _d;
    ::ll::TypedStorage<1, 64, uchar[64]> _buffer;
    ::ll::TypedStorage<4, 64, uint[16]>  _block;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~md5() /*override*/ = default;

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
    // member functions
    // NOLINTBEGIN
    MCAPI void const* _body(void const* data, uint size);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $reset();

    MCAPI void $update(void const* data, uint size);

    MCAPI void $final(uchar* result);

    MCFOLD uint64 $resultSize() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Crypto::Hash
