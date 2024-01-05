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
    // vIndex: 0, symbol: __gen_??1OpenSSLHashInterface@Hash@Crypto@@UEAA@XZ
    virtual ~OpenSSLHashInterface() = default;

    // vIndex: 1, symbol: ?reset@OpenSSLHashInterface@Hash@Crypto@@UEAAXXZ
    virtual void reset();

    // vIndex: 2, symbol: ?update@OpenSSLHashInterface@Hash@Crypto@@UEAAXPEBXI@Z
    virtual void update(void const* data, uint size);

    // vIndex: 3, symbol: ?final@OpenSSLHashInterface@Hash@Crypto@@UEAAXPEAE@Z
    virtual void final(uchar* result);

    // vIndex: 4, symbol: ?resultSize@OpenSSLHashInterface@Hash@Crypto@@UEBA_KXZ
    virtual uint64 resultSize() const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_initHashContextPointer@OpenSSLHashInterface@Hash@Crypto@@AEAAXXZ
    MCAPI void _initHashContextPointer();

    // NOLINTEND
};

}; // namespace Crypto::Hash
