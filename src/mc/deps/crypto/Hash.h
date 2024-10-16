#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/hash/HashType.h"
#include "mc/deps/crypto/hash/IHash.h"

// auto generated forward declare list
// clang-format off
namespace Crypto::Hash { class IHash; }
namespace mce { class UUID; }
// clang-format on

namespace Crypto::Hash {

class Hash : public ::Crypto::Hash::IHash {
public:
    // prevent constructor by default
    Hash& operator=(Hash const&);
    Hash(Hash const&);
    Hash();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Hash();

    // vIndex: 1
    virtual void reset();

    // vIndex: 2
    virtual void update(void const* data, uint size);

    // vIndex: 3
    virtual void final(uchar* result);

    // vIndex: 4
    virtual uint64 resultSize() const;

    MCAPI explicit Hash(::Crypto::Hash::HashType type);

    MCAPI std::string final();

    MCAPI class mce::UUID getUUID();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(::Crypto::Hash::HashType type);

    MCAPI void dtor$();

    MCAPI void final$(uchar* result);

    MCAPI void reset$();

    MCAPI uint64 resultSize$() const;

    MCAPI void update$(void const* data, uint size);

    // NOLINTEND
};

}; // namespace Crypto::Hash
