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
    // vIndex: 0
    virtual ~Hash() /*override*/;

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
    MCAPI explicit Hash(::Crypto::Hash::HashType type);

    MCAPI ::std::string final();

    MCAPI ::mce::UUID getUUID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Crypto::Hash::HashType type);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
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
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Crypto::Hash
