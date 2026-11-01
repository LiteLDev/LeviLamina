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
    virtual ~Hash() /*override*/ = default;

    virtual void reset() /*override*/;

    virtual void update(void const* data, uint size) /*override*/;

    virtual void final(uchar* result) /*override*/;

    virtual uint64 resultSize() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::mce::UUID getUUID();
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
