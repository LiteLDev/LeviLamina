#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/hash/IHash.h"

// auto generated forward declare list
// clang-format off
namespace Crypto::Hash { class IHash; }
// clang-format on

namespace Crypto::Hash {

class OpenSSLHashInterface : public ::Crypto::Hash::IHash {
public:
    // prevent constructor by default
    OpenSSLHashInterface& operator=(OpenSSLHashInterface const&);
    OpenSSLHashInterface(OpenSSLHashInterface const&);
    OpenSSLHashInterface();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OpenSSLHashInterface() = default;

    // vIndex: 1
    virtual void reset();

    // vIndex: 2
    virtual void update(void const* data, uint size);

    // vIndex: 3
    virtual void final(uchar* result);

    // vIndex: 4
    virtual uint64 resultSize() const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _initHashContextPointer();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void final$(uchar* result);

    MCAPI void reset$();

    MCAPI uint64 resultSize$() const;

    MCAPI void update$(void const* data, uint size);

    // NOLINTEND
};

}; // namespace Crypto::Hash
