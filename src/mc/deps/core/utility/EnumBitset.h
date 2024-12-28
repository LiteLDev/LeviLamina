#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0, int T1>
class EnumBitset {
public:
    // prevent constructor by default
    EnumBitset& operator=(EnumBitset const&);
    EnumBitset(EnumBitset const&);
    EnumBitset();
};
