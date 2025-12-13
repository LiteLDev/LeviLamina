#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/hash/HashType.h"
#include "mc/deps/crypto/hash/IHash.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

namespace Crypto::Hash {

class Hash : public ::Crypto::Hash::IHash {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::Crypto::Hash::HashType>                 mHashType;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Crypto::Hash::IHash>> mHash;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Hash() /*override*/;

    virtual void reset() /*override*/;

    virtual void update(void const* data, uint size) /*override*/;

    virtual void final(uchar* result) /*override*/;

    virtual uint64 resultSize() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::mce::UUID getUUID();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $reset();

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

} // namespace Crypto::Hash
