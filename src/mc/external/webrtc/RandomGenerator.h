#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RandomGenerator {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RandomGenerator() = default;

    virtual bool Init(void const* seed, uint64 len);

    virtual bool Generate(void*, uint64) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $Init(void const* seed, uint64 len);


    // NOLINTEND
};

} // namespace webrtc
