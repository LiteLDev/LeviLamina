#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto::Hash {

class md5 {
public:
    // prevent constructor by default
    md5& operator=(md5 const&);
    md5(md5 const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?reset@md5@Hash@Crypto@@UEAAXXZ
    virtual void reset();

    // vIndex: 2, symbol: ?update@md5@Hash@Crypto@@UEAAXPEBXI@Z
    virtual void update(void const*, uint);

    // vIndex: 3, symbol: ?final@md5@Hash@Crypto@@UEAAXPEAE@Z
    virtual void final(uchar*);

    // vIndex: 4, symbol: ?resultSize@md5@Hash@Crypto@@UEBA_KXZ
    virtual uint64 resultSize() const;

    // symbol: ??0md5@Hash@Crypto@@QEAA@XZ
    MCAPI md5();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_body@md5@Hash@Crypto@@AEAAPEBXPEBXI@Z
    MCAPI void const* _body(void const*, uint);

    // NOLINTEND
};

}; // namespace Crypto::Hash
