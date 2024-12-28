#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class RandomGenerator {
public:
    // prevent constructor by default
    RandomGenerator& operator=(RandomGenerator const&);
    RandomGenerator(RandomGenerator const&);
    RandomGenerator();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RandomGenerator();

    // vIndex: 1
    virtual bool Init(void const*, uint64) = 0;

    // vIndex: 2
    virtual bool Generate(void*, uint64) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace rtc
