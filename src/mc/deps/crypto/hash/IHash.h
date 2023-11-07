#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto::Hash {

class IHash {
public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IHash() = default;

    // vIndex: 1
    virtual void reset() = 0;

    // vIndex: 2
    virtual void update(void const*, uint) = 0;

    // vIndex: 3
    virtual void final(uchar*) = 0;

    // vIndex: 4
    virtual uint64 resultSize() const = 0;

    // NOLINTEND
};

}; // namespace Crypto::Hash
