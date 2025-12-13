#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class RandomGenerator {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RandomGenerator() = default;

    virtual bool Init(void const*, uint64) = 0;

    virtual bool Generate(void*, uint64) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace rtc
