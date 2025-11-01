#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class RandomGenerator {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RandomGenerator() = default;

    // vIndex: 1
    virtual bool Init(void const*, uint64) = 0;

    // vIndex: 2
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

}
