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
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1RandomGenerator@rtc@@UEAA@XZ
    virtual ~RandomGenerator() = default;

    // vIndex: 1, symbol: ?Init@SecureRandomGenerator@rtc@@UEAA_NPEBX_K@Z
    virtual bool Init(void const*, uint64) = 0;

    // vIndex: 2, symbol: ?Generate@SecureRandomGenerator@rtc@@UEAA_NPEAX_K@Z
    virtual bool Generate(void*, uint64) = 0;

    // NOLINTEND
};

}; // namespace rtc
