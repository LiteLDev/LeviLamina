#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

struct ViewStats {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 256, char[256]> name;
    ::ll::TypedStorage<2, 2, ushort>      view;
    ::ll::TypedStorage<8, 8, int64>       cpuTimeElapsed;
    ::ll::TypedStorage<8, 8, int64>       cpuTimeBegin;
    ::ll::TypedStorage<8, 8, uint64>      gpuTimeBegin;
    ::ll::TypedStorage<8, 8, uint64>      gpuTimeEnd;
    ::ll::TypedStorage<8, 8, int64>       gpuTimeElapsed;
    ::ll::TypedStorage<4, 4, uint>        gpuFrameNum;
    // NOLINTEND
};

} // namespace bgfx
