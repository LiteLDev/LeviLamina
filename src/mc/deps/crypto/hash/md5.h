#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/hash/IHash.h"

// auto generated forward declare list
// clang-format off
namespace Crypto::Hash { class IHash; }
// clang-format on

namespace Crypto::Hash {

class md5 : public ::Crypto::Hash::IHash {
public:
    // prevent constructor by default
    md5& operator=(md5 const&);
    md5(md5 const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~md5() = default;

    // vIndex: 1
    virtual void reset();

    // vIndex: 2
    virtual void update(void const* data, uint size);

    // vIndex: 3
    virtual void final(uchar* result);

    // vIndex: 4
    virtual uint64 resultSize() const;

    MCAPI md5();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void const* _body(void const* data, uint size);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$();

    MCAPI void final$(uchar* result);

    MCAPI void reset$();

    MCAPI uint64 resultSize$() const;

    MCAPI void update$(void const* data, uint size);

    // NOLINTEND
};

}; // namespace Crypto::Hash
