#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/hash/IHash.h"

namespace Crypto::Hash {

class md5 : public ::Crypto::Hash::IHash {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkc62ebb;
    ::ll::UntypedStorage<4, 4>  mUnk114d4c;
    ::ll::UntypedStorage<4, 4>  mUnk9cb5c7;
    ::ll::UntypedStorage<4, 4>  mUnkeed0ca;
    ::ll::UntypedStorage<4, 4>  mUnk26ccef;
    ::ll::UntypedStorage<4, 4>  mUnkdd0605;
    ::ll::UntypedStorage<1, 64> mUnk899a7b;
    ::ll::UntypedStorage<4, 64> mUnkc290fc;
    // NOLINTEND

public:
    // prevent constructor by default
    md5& operator=(md5 const&);
    md5(md5 const&);
    md5();

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
    MCNAPI void const* _body(void const* data, uint size);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $reset();

    MCNAPI void $update(void const* data, uint size);

    MCNAPI void $final(uchar* result);

    MCNAPI uint64 $resultSize() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Crypto::Hash
