#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto::Hash {

class IHash {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IHash() = default;

    virtual void reset() = 0;

    virtual void update(void const*, uint) = 0;

    virtual void final(uchar*) = 0;

    virtual uint64 resultSize() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Crypto::Hash
