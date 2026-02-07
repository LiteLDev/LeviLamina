#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

struct EncoderStats {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, int64> cpuTimeBegin;
    ::ll::TypedStorage<8, 8, int64> cpuTimeEnd;
    // NOLINTEND
};

} // namespace bgfx
