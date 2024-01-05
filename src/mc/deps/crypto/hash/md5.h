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
    // vIndex: 0, symbol: __gen_??1md5@Hash@Crypto@@UEAA@XZ
    virtual ~md5() = default;

    // vIndex: 1, symbol: ?reset@md5@Hash@Crypto@@UEAAXXZ
    virtual void reset();

    // vIndex: 2, symbol: ?update@md5@Hash@Crypto@@UEAAXPEBXI@Z
    virtual void update(void const* data, uint size);

    // vIndex: 3, symbol: ?final@md5@Hash@Crypto@@UEAAXPEAE@Z
    virtual void final(uchar* result);

    // vIndex: 4, symbol: ?resultSize@md5@Hash@Crypto@@UEBA_KXZ
    virtual uint64 resultSize() const;

    // symbol: ??0md5@Hash@Crypto@@QEAA@XZ
    MCAPI md5();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_body@md5@Hash@Crypto@@AEAAPEBXPEBXI@Z
    MCAPI void const* _body(void const* data, uint size);

    // NOLINTEND
};

}; // namespace Crypto::Hash
